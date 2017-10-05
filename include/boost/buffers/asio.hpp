//
// Copyright (c) 2017 Vinnie Falco (vinnie dot falco at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/boostorg/ssl_verify
//

#ifndef BOOST_BUFFERS_ASIO_HPP
#define BOOST_BUFFERS_ASIO_HPP

#if BOOST_NET_BUFFER_NO_ASIO
# include <boost/buffers/detail/asio_buffer.hpp>
#else
# include <boost/asio/buffer.hpp>
#endif

#endif
