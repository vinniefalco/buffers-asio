# Boost.Buffers

Branch      | Linux/OSX | Windows | Coverage | Documentation | Matrix
------------|-----------|---------|----------|---------------|--------
[master](https://github.com/vinniefalco/buffers/tree/master)   | [![Build Status](https://travis-ci.org/vinniefalco/buffers.svg?branch=master)](https://travis-ci.org/vinniefalco/buffers)  | [![Build status](https://ci.appveyor.com/api/projects/status/g0llpbvhpjuxjnlw/branch/master?svg=true)](https://ci.appveyor.com/project/vinniefalco/buffers/branch/master)   | [![codecov](https://codecov.io/gh/vinniefalco/buffers/branch/master/graph/badge.svg)](https://codecov.io/gh/vinniefalco/buffers/branch/master)   | [![Documentation](https://img.shields.io/badge/documentation-master-brightgreen.svg)](http://www.boost.org/doc/libs/master/libs/buffers/doc/html/index.html)  | [![Matrix](https://img.shields.io/badge/matrix-master-brightgreen.svg)](http://www.boost.org/development/tests/master/developer/buffers.html)
[develop](https://github.com/vinniefalco/buffers/tree/develop) | [![Build Status](https://travis-ci.org/vinniefalco/buffers.svg?branch=develop)](https://travis-ci.org/vinniefalco/buffers) | [![Build status](https://ci.appveyor.com/api/projects/status/g0llpbvhpjuxjnlw/branch/develop?svg=true)](https://ci.appveyor.com/project/vinniefalco/buffers/branch/develop) | [![codecov](https://codecov.io/gh/vinniefalco/buffers/branch/develop/graph/badge.svg)](https://codecov.io/gh/vinniefalco/buffers/branch/develop) | [![Documentation](https://img.shields.io/badge/documentation-develop-brightgreen.svg)](http://www.boost.org/doc/libs/develop/libs/buffers/index.html) | [![Matrix](https://img.shields.io/badge/matrix-develop-brightgreen.svg)](http://www.boost.org/development/tests/develop/developer/buffers.html)

## Description

This library optionally provides a subset of the buffer interfaces present
in Boost.Asio, depending on a compilation switch setting. Otherwise, it
includes the buffer header files directly from Boost.Asio.

The purpose of this library is to allow other libraries to be developed
which make use of the **ConstBufferSequence**, **MutableBufferSequence**
concepts, the required concrete types
`boost::asio::const_buffer` and `boost::asio::mutable_buffer`, and
the algorithms such as
`boost::asio::buffer_copy` and `boost::asio::buffer_size`
associated with buffer sequences. These other libraries can then be built
without requiring a dependency on all of Boost.Asio.

