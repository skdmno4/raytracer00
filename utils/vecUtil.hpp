#include "vector.h"

namespace Raytrace
{
    template <class T>
    Vec3d<T>::Vec3d(const Vec3d &v0):
        m_X(v0.X()), m_Y(v0.Y()), m_Z(v0.Z())
    {}

    template <class T>
    float Vec3d<T>::Magnitude()
    {
        return sqrt(Dot(*this, *this));
    }
    template <class T>
    void Vec3d<T>::Scale(const T& scaler)
    {
        m_X *= scaler;
        m_Y *= scaler;
        m_Z *= scaler;
    }

    template <class T>
    void Vec3d<T>::Normalize()
    {
       float inv = 1.0 / Magnitude();
       m_X *= inv;
       m_Y *= inv;
       m_Z *= inv;
    }
    ///*
    template <class T>
    Vec3d<T> Vec3d<T>::operator *(const T & st)
    {
        Vec3d<T> tmp(m_X * st, m_Y *st, m_Z * st);
        return tmp;
    }
    template <class T>
    Vec3d<T> Vec3d<T>::operator *(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X * vt.m_X, m_Y * vt.m_Y, m_Z * vt.m_Z);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator *=(const T & st)
    {
        Vec3d<T> tmp(m_X * st, m_Y *st, m_Z * st);
        return tmp;
    }
    template <class T>
    Vec3d<T> Vec3d<T>::operator *=(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X * vt.m_X, m_Y * vt.m_Y, m_Z * vt.m_Z);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator /(const T & st)
    {
        Vec3d<T> tmp(m_X / st, m_Y /st, m_Z / st);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator /(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X / vt.m_X, m_Y / vt.m_Y, m_Z / vt.m_Z);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator/=(const T & st)
    {
        Vec3d<T> tmp(m_X / st, m_Y /st, m_Z / st);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator/=(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X / vt.m_X, m_Y / vt.m_Y, m_Z / vt.m_Z);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator +(const T & st)
    {
        Vec3d<T> tmp(m_X + st, m_Y +st, m_Z + st);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator +(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X + vt.m_X, m_Y + vt.m_Y, m_Z + vt.m_Z);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator +=(const T & st)
    {
        Vec3d<T> tmp(m_X + st, m_Y +st, m_Z + st);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator +=(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X + vt.m_X, m_Y + vt.m_Y, m_Z + vt.m_Z);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator -(const T & st)
    {
        Vec3d<T> tmp(m_X - st, m_Y -st, m_Z - st);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator -(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X - vt.m_X, m_Y - vt.m_Y, m_Z - vt.m_Z);
        return tmp;
    }

    template <class T>
    Vec3d<T> Vec3d<T>::operator -=(const Vec3d<T> & vt)
    {
        Vec3d<T> tmp(m_X - vt.m_X, m_Y - vt.m_Y, m_Z - vt.m_Z);
        return tmp;
    }

    /******************Global utilities***************************************/
    template <class T>
    float Dot(const Vec3d<T> &v1, const Vec3d<T> &v2)
    {
        T retval = (v2.X() * v1.X()) + (v2.Y() * v1.Y()) + (v2.Z() * v1.Z());
        return retval;
    }

    template <class T>
    Vec3d<T> Cross(const Vec3d<T> &v0, const Vec3d<T> &v1)
    {
        Vec3d<T> v2;
        v2.m_X = (v0.m_Y * v1.m_Z) - (v1.m_Y * v0.m_Z);
        v2.m_Y = (v0.m_Z * v1.m_X) - (v1.m_Z * v0.m_X);
        v2.m_Z = (v0.m_X * v1.m_Y) - (v1.m_X * v0.m_Y);
        return v2;
    }
    //*/

    template <class U>
    ostream & operator<<(ostream& out, const Vec3d<U> &v0)
    {
        out << "{ " << v0.m_X <<"i, " << v0.m_Y << "j, " << v0.m_Z <<"k}";
        return out;
    }

    void Test()
    {
        cout << "Linked\n";
    }
}

