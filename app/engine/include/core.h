#include <math.h>

#ifndef SPARK_CORE_H
#define SPARK_CORE_H

#include "precision.h"

/**
 * The spark namespace includes all engine function and classes.
 * It is defined as a namespace to allow funciton and class names to be simple
 * without causing conflicts.
 */
namespace spark {
  class Vector3
  {
  public:
    /** Holds value along x-axis. */
    real x;

    /** Holds value along y-axis */
    real y;

    /** Holds value along z-axis. */
    real z;

  private:
    /** Padding to ensure alignment. */
    real pad;

  public:
    /** The default constructor creates a zero vector. */
  Vector3() : x(0), y(0), z(0) {}

    /** 
     * The explicit constructor creates a vector with the given
     * components
     */
    Vector3(const real x, const real y, const real z)
      : x(x), y(y), z(z) {}

    const static Vector3 GRAVITY;
    const static Vector3 HIGH_GRAVITY;
    const static Vector3 UP;
    const static Vector3 RIGHT;
    const static Vector3 OUT_OF_SCREEN;
    const static Vector3 X;
    const static Vector3 Y;
    const static Vector3 Z;
  };

}
