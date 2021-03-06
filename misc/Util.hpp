#pragma once
#include <cstdint>

#include "../types.hpp"

/*template <typename E>
constexpr auto to_underlying(E e) noexcept;*/

bool inside(point_t, box_t);
bool inside(box_t, box_t);

bool equal(const point_t *, const point_t *);

int32_t abs(const std::int32_t);

point_t walk(point_t, point_t, std::uint8_t[400 * 300]);
point_t unstuck(point_t, std::uint8_t[400 * 300]);
