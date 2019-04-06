cmake_minimum_required(VERSION 3.0)

project(xapian-core)
set(MAJOR_VERSION 1)
set(MINOR_VERSION 4)
set(REVISION 45)
set(MAIN_VERSION "${MAJOR_VERSION}.${MINOR_VERSION}.${REVISION}")


set(PACKAGE_VERSION ${MAIN_VERSION})
set(prefix ${CMAKE_INSTALL_PREFIX})
set(exec_prefix ${prefix})
set(libdir ${CMAKE_INSTALL_PREFIX}/lib)
set(LIBRARY_VERSION_SUFFIX ".lib")
set(incdir ${CMAKE_INSTALL_PREFIX}/include)

set(CMAKE_CXX_STANDARD 11)
find_package(ZLIB REQUIRED)

include_directories(
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/common
    ${CMAKE_SOURCE_DIR}/backends/glass
    ${CMAKE_SOURCE_DIR}/backends/chert
    ${CMAKE_SOURCE_DIR}/backends/flint
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/languages
    ${ZLIB_INCLUDE_DIRS}
)

add_definitions(-DHAVE_CONFIG_H)

#add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/include/xapian/version.h
#    COMMAND ${CMAKE_CXX_COMPILER} ${CMAKE_CXX_FLAGS}
#                /P /I${CMAKE_SOURCE_DIR}
#                /DSTRING_VERSION="\"@@${MAIN_VERSION}@@\""
#                /DMAJOR_VERSION="\"${MAJOR_VERSION}\""
#                /DMINOR_VERSION="\"${MINOR_VERSION}\""
#                /DREVISION="\"${REVISION}\""
#                /DXAPIAN_HAS_GLASS_BACKEND
#                /DXAPIAN_HAS_CHERT_BACKEND
#                /DXAPIAN_HAS_FLINT_BACKEND
#                /DXAPIAN_HAS_INMEMORY_BACKEND
#                /DXAPIAN_HAS_REMOTE_BACKEND
#                /DXAPIAN_ENABLE_VISIBILITY
#                ${CMAKE_SOURCE_DIR}/include/xapian/version_h.cc
#    COMMAND sed "/\"/!d;s/^ *//;/^#l/d;s/ *\$//;s/\" *,//;s/\"//g;s/@@/\"/g;s/  */ /g;s/ *,\$//;s/ *,\$//"
#            ${CMAKE_BINARY_DIR}/version_h.i > ${CMAKE_SOURCE_DIR}/include/xapian/version.h
#    VERBATIM
#)
#add_custom_target(generate_version_h DEPENDS ${CMAKE_SOURCE_DIR}/include/xapian/version.h)

file(GLOB_RECURSE API_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} api/*.cc)
file(GLOB_RECURSE BACKENDS_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} backends/*.cc)
file(GLOB_RECURSE COMMON_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} common/*.cc)
list(REMOVE_ITEM COMMON_SRCS "common/proc_uuid.cc")
file(GLOB_RECURSE EXPAND_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} expand/*.cc)
file(GLOB_RECURSE LANGUAGES_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} languages/*.cc)
file(GLOB_RECURSE MATCHER_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} matcher/*.cc)
file(GLOB_RECURSE NET_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} net/*.cc)
file(GLOB_RECURSE QUERYPARSER_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} queryparser/*.cc)
file(GLOB_RECURSE UNICODE_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} unicode/*.cc)
file(GLOB_RECURSE WEIGHT_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} weight/*.cc)
file(GLOB_RECURSE GEOSPATIAL_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} geospatial/*.cc)

set(lib_SRCS
    ${API_SRCS}
    ${BACKENDS_SRCS}
    ${COMMON_SRCS}
    ${EXPAND_SRCS}
    ${LANGUAGES_SRCS}
    ${MATCHER_SRCS}
    ${NET_SRCS}
    ${QUERYPARSER_SRCS}
    ${UNICODE_SRCS}
    ${WEIGHT_SRCS}
    ${GEOSPATIAL_SRCS}
)

add_library(xapian SHARED ${lib_SRCS})
#add_dependencies(xapian generate_version_h)
set_target_properties(xapian PROPERTIES PREFIX lib COMPILE_DEFINITIONS xapian_EXPORTS)
target_link_libraries(xapian ${ZLIB_LIBRARY} rpcrt4 ws2_32)

set(BIN_COMMON_SRCS
    common/getopt.cc
)

add_executable(xapian-compact bin/xapian-compact.cc ${BIN_COMMON_SRCS})
target_link_libraries(xapian-compact xapian)

add_executable(xapian-check
    bin/xapian-check.cc
    ${BIN_COMMON_SRCS}
)
target_link_libraries(xapian-check xapian)

#add_executable(xapian-inspect bin/xapian-inspect.cc ${BIN_COMMON_SRCS})
#target_link_libraries(xapian-inspect xapian)

#add_executable(xapian-progsrv bin/xapian-progsrv.cc ${BIN_COMMON_SRCS})
#target_link_libraries(xapian-progsrv xapian)
#
#add_executable(xapian-replicate bin/xapian-replicate.cc ${BIN_COMMON_SRCS})
#target_link_libraries(xapian-replicate xapian)
#
#add_executable(xapian-replicate-server bin/xapian-replicate-server.cc ${BIN_COMMON_SRCS})
#target_link_libraries(xapian-replicate-server xapian)
#
#add_executable(xapian-tcpsrv bin/xapian-tcpsrv.cc ${BIN_COMMON_SRCS})
#target_link_libraries(xapian-tcpsrv xapian)

install(
    TARGETS xapian xapian-compact 
    #xapian-inspect
    #xapian-progsrv xapian-replicate xapian-replicate-server
    #xapian-tcpsrv
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

file(GLOB xapian_HDRS ${CMAKE_SOURCE_DIR}/include/xapian/*.h)
install(
    FILES ${xapian_HDRS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/xapian/
    COMPONENT development
)
install(FILES ${CMAKE_SOURCE_DIR}/include/xapian.h
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/
    COMPONENT development
)

configure_file(cmake/xapian-config.cmake.in
    ${CMAKE_BINARY_DIR}/cmake/xapian-config.cmake
)
configure_file(cmake/xapian-config-version.cmake.in
    ${CMAKE_BINARY_DIR}/cmake/xapian-config-version.cmake
)
install(FILES
    ${CMAKE_BINARY_DIR}/cmake/xapian-config.cmake
    ${CMAKE_BINARY_DIR}/cmake/xapian-config-version.cmake
    DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/cmake/xapian/
)
