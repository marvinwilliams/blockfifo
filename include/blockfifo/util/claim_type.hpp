#pragma once

namespace blockfifo::claim_type {

enum class value {
    ZERO = 0,
    ONE = 1,
};

enum class mode {
    READ_WRITE,
    READ_ONLY,
};

};  // namespace blockfifo::claim_type
