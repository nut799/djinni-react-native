// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#pragma once

#include "access_flags.hpp"
#include <utility>

namespace testsuite {

struct RecordWithFlags final {
    access_flags access;

    RecordWithFlags(access_flags access_)
    : access(std::move(access_))
    {}
};

}  // namespace testsuite
