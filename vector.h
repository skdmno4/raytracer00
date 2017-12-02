#pragma once
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
namespace Raytrace
{
    template <class T>
    class Vec3d
    {
    private:
        T m_X = 0;
        T m_Y = 0;
        T m_Z = 0;
    public:
        Vec3d() = default;
        Vec3d(const Vec3d &);
        Vec3d(T x, T y, T z):
            m_X(x), m_Y(y), m_Z(z){}
        Vec3d(T o):
            m_X(o), m_Y(o), m_Z(o){}

        T X() const
        {
            return m_X;
        }
        T Y() const
        {
            return m_Y;
        }
        T Z() const
        {
            return m_Z;
        }

        /* Vector operations */
        float Magnitude();
        void Scale(const T& scaler);
        void Normalize();

        Vec3d<T> operator*(const T & st);
        Vec3d<T> operator*(const Vec3d<T> & vt);
        Vec3d<T> operator*=(const T & st);
        Vec3d<T> operator*=(const Vec3d<T> & vt);
        Vec3d<T> operator/(const T & st);
        Vec3d<T> operator/(const Vec3d<T> & vt);
        Vec3d<T> operator/=(const T & st);
        Vec3d<T> operator/=(const Vec3d<T> & vt);
        Vec3d<T> operator+(const T & st);
        Vec3d<T> operator+(const Vec3d<T> & vt);
        Vec3d<T> operator+=(const T & st);
        Vec3d<T> operator+=(const Vec3d<T> & vt);
        Vec3d<T> operator-(const T & st);
        Vec3d<T> operator-(const Vec3d<T> & vt);
        Vec3d<T> operator-=(const Vec3d<T> & vt);

        template <class U>
        friend Vec3d<U> Cross(const Vec3d<U> &v0, const Vec3d<U> &v1);
        template <class U>
        friend ostream& operator<<(ostream &, const Vec3d<U> &v0);
    };

    template <class T>
    float Dot(const Vec3d<T> &v0, const Vec3d<T> &v1);

    void Test();
}
typedef Raytrace::Vec3d<float> Vec3dF;
typedef Raytrace::Vec3d<int> Vec3dI;
