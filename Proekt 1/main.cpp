#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,D,x1,x2;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    D=b*b-4*c*a;
    if (D<0) cout << "Nope";
    else {
            float D1 = sqrt(D);
            x1=(-b+D1)/(2*a);
            x2=(-b-D1)/(2*a);
            cout << "x1= " << x1 << " x2= " << x2;
         }
    return 0;
}
