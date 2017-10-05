#
# Copyright (c) 2016-2017 Vinnie Falco (vinnie dot falco at gmail dot com)
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#
# Official repository: https://github.com/boostorg/beast
#

GroupSources(include/boost/buffers buffers)
GroupSources(subtree/unit_test/include/boost/beast extern)
GroupSources(test "/")

include_directories (${PROJECT_SOURCE_DIR}/subtree/unit_test/include)

file (GLOB_RECURSE TEST_INCLUDES
    ${PROJECT_SOURCE_DIR}/subtree/unit_test/include/*.hpp
    ${PROJECT_SOURCE_DIR}/subtree/unit_test/include/*.ipp
)

set (TEST_MAIN ${PROJECT_SOURCE_DIR}/subtree/unit_test/include/boost/beast/unit_test/main.cpp)

add_executable (test-buffers
    ${LIB_INCLUDES}
    ${TEST_INCLUDES}
    ${TEST_MAIN}
    asio_buffer.cpp
    Jamfile
)
