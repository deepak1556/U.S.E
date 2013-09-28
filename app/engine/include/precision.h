#ifndef SPARK_PRECISION_H
#define SPARK_PRECISION_H

#include <float.h>

namespace spark {
#if 0
  /**
   * Defines in single precision mode for any conditional compilation.
   */
  #define SINGLE_PRECISION

  /**
   * Defines a real number precision.
   */
  typedef float real;

  /**
   * Defines highest value for the real number.
   */
  #define REAL_MAX FLT_MAX

  /** 
   * Defines the precision of sqrt operator.
   */
  #define real_sqrt sqrtf

  /**
   * Defines the precision of absolute magnitude operator.
   */
  #define real_abs fabsf

  /**
   * Defines the procision of sine operator.
   */
  #define real_sin sinf

  /**
   * Defines the precision of cosine operator.
   */
  #define real_cos cosf

  /** 
   * Defines the precision of exponent operator.
   */
  #define real_exp expf

  /**
   * Defines the precision of power operator.
   */
  #define real_pow powf
  
  /**
   * Defines the precision of floating point modulo operator.
   */
  #define real_fmod fmodf

  /**
   * Defines the number e on which 1+e == 1 
   */
  #define real_epsilon FLT_EPSILON

  #define R_PI 3.14159f
#else
  #define DOUBLE_PRECISION
  typedef double real;
  #define REAL_MAX DBL_MAX
  #define real_sqrt sqrt
  #define real_abs abs
  #define real_sin sin
  #define real_cos cos
  #define real_pow pow
  #define real_exp exp
  #define real_fmod fmod
  #define real_epsilon DBL_EPSILON
  #define R_PI 3.14159265358979
#endif
}

#endif //SPARK_PRECISION_H
