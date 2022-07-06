#pragma once

#include <any>
#include <brynet/base/CPP_VERSION.hpp>

namespace brynet { namespace base {

using BrynetAny = std::any;

template<typename T>
auto cast(const BrynetAny& ud)
{
    return std::any_cast<T>(&ud);
}

}}// namespace brynet::base
