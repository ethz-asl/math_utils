#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <boost/math/constants/constants.hpp>
#include <cmath>

namespace math_utils {

template<typename Float>
inline Float to_radians(const Float angle_degrees)
{
  return angle_degrees * (boost::math::constants::pi<Float>() / 180.0);
}

template<typename Float>
inline Float to_degrees(const Float angle_radians)
{
  return angle_radians * (180.0 / boost::math::constants::pi<Float>());
}

template<typename Float>
inline double wrap_to_pi(const Float angle_radians)
{
  return (angle_radians
      + (2.0 * boost::math::constants::pi<Float>()
          * floor(
              (boost::math::constants::pi<Float>() - angle_radians)
                  / (2.0 * boost::math::constants::pi<Float>()))));
}

}  // namespace math_utils

#endif  // MATH_UTILS_H

