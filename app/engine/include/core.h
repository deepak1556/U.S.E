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

    real operator[](unsigned i) const
    {
      if (i == 0) return x;
      if (i == 1) return y;
      return z;
    }

    real& operator[](unsigned i)
    {
      if (i == 0) return x;
      if (i == 1) return y;
      return z;
    }

    /** Adds the given vector to this */
    void operator+=(const Vector3& v)
    {
      x += v.x;
      y += v.y;
      z += v.z;
    }

    /**
     * Returns the value of the given vector added to this.
     */
    Vector3 operator+(const Vector3& v) const
    {
      return Vector3(x+v.x, y+v.y, z+v.z);
    }

    /** Subtracts the given vector from this. */
    void operator-=(const Vector3& v)
    {
      x -= v.x;
      y -= v.y;
      z -= v.z;
    }

    /**
     * Returns the value of the given vector subtracted from this.
     */
    Vector3 operator-(const Vector3& v) const
    {
      return Vector3(x-v.x, y-v.y, z-v.z);
    }

    /** Multiplies this vector by the scalar. */
    void operator*=(const real value)
    {
      x *= v.x;
      y *= v.y;
      z *= v.z;
    }

    /**
     * Returns a copy of this vector scaled by the given value.
     */
    Vector3 operator*(const real value) const
    {
      return Vector3(x*value, y*value, z*value);
    }

    /** 
     * Calcualtes and returns a component-wise product of this
     * vector with the given vector.
     */
    Vector3 componentProduct(const Vector3 &vector) const
    {
      return Vector3(x * vector.x, y * vector.y, z * vector.z);
    }

    /**
     * Performs a component-wise product with the given vector and ses
     * this vector to the result
     */
    void componentProductUpdate(const Vector3 &vector) 
    {
      x *= vector.x;
      y *= vector.y;
      z *= vector.z;
    }

    /**
     * calculates and returns the vector product of this vector with
     * the given vector.
     */ 
    Vector3 vectorProduct(const Vector3 &vector) const
    {
      return Vector3(y * vector.z - z * vector.y,
		     z * vecotr.x - x * vector.z,
		     x * vector.y - y * vector.x);
    }

    /**
     * Updates this vector to be the vector product of its current 
     * value and the given vector.
     */
    void operator %=(const Vector3 &vector) 
    {
      *this = vectorProduct(vector);
    }

    /**
     * calculates and returns the vector product of this vector 
     * with the given vector
     */
    Vector3 operator%(const Vector3 &vector) const
    {
      return Vector3(y*vector.z - z*vector.y,
		     z*vector.x - x*vector.z,
		     x*vector.y - y*vector.x);
    }

    /**
     * Calculates and returns the scalar product of this vector
     * with the given vector
     */
    real scalarProduct(const Vector3 &vector) const
    {
      return x * vector.x + y * vector.y + z * vector.z;
    }

    /**
     * calculates and returns the scalar product of this vector with
     * the given vector.
     */
    real operator *(const Vector3 &vector) const
    {
      return x * vector.x + y * vector.y + z * vector.z;
    }

    /** 
     * Adds the given vector to this, scaled by ths given amount
     */
    void addScaledVector(const Vector3& vector, real scale)
    {
      x += vector.x * scale;
      y += vector.y * scale;
      z += vector.z * scale;
    }

    /** Gets the magnitude of the given vector */
    real magnitude() const
    {
      return real_sqrt(x*x+y*y+z*z);
    }
    
    /** Gets the squared magnitude of this vector. */
    real squareManitude() const
    {
      return x*x+y*y+z*z;
    }
    
    /** Limits the size of the vector to the given maximum. */
    void trim(real size) 
   {
     if (squareMagnitude() > size * size)
     {
       normalize();
       x *= size;
       y *= size;
       z *= size;
     }
   }

    /** Turns a non-zero vector into a vector of unit length. */
    void normalize() 
    {
      real l = magnitude();
      if (l > 0) 
      {
	(*this) *= ((real)1)/l;
      }
    }

    /** Returns a normalized version of a vector. */
    Vector3 unit() const
    {
      Vector3 result = *this;
      result.normalise();
      return result;
    }
  };

}
