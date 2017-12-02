#include "utils/vecUtil.hpp"

using namespace Raytrace;
int main()
{
    Vec3dI v0(3,4,0);
    cout << v0 <<" Mag: "<< v0.Magnitude() << endl;


    Vec3dF v1(3.0, 4.0, 0.0);
    cout << v1 <<" Mag: "<< v1.Magnitude() << endl;
    v1.Normalize();
    cout << "normalized v1: "<< v1 << endl;

    //Compiler error Int vs float
    //float d0 = Dot(v0 ,v1);
    //cout << " v0.v1 = " << d0;

    //Compiler error
    //copy int vec to float
    //Vec3dF v2 = v0;
    if (0)
    {
        Vec3dF v(3,4,0);
        Vec3dF u(0,3,4);
        Vec3dF r = Cross(v, u);
        cout << v << " X " << u << " = " << r << endl;
        cout << v << " . " << u << " = " << Dot(v, u) << endl;
        Vec3dF m = v;
        m.Normalize();
        Vec3dF n = u;
        n.Normalize();
        r = Cross(m, n);
        cout << m << " X " << n << " = " << r << " Mag: " << r.Magnitude();
        cout << endl;
    }
    {
        Vec3dF v(.25);
        Vec3dF u(.25, .5, .25);
        Vec3dF r = Cross(v, u);
        cout << v << " X " << u << " = " << r << endl;
    }
    return 0;
}
