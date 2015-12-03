#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <math.h>
#include <tgmath.h>
#include <boost/math/constants/constants.hpp>

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
inline Float wrap_to_pi(const Float angle_radians)
{
  return (angle_radians
      + (2.0 * boost::math::constants::pi<Float>()
          * floor(
              (boost::math::constants::pi<Float>() - angle_radians)
                  / (2.0 * boost::math::constants::pi<Float>()))));
}

template<typename Float>
inline int fltcmp(const Float f1, const Float f2)
{
  Float epsilon = f1 - f2;
  if (epsilon < 0.0)
    return -1;
  else if (epsilon > 0.0)
    return 1;
  else
    return 0;
}

template<typename Float>
inline bool flteq(const Float f1, const Float f2, const Float epsilon)
{
  if (fabs(f1 - f2) <= epsilon)
    return true;
  else
    return false;
}

}  // namespace math_utils

#endif  // MATH_UTILS_H

