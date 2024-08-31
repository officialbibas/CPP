/*ax2+bx+c=0
roots= -b +-sqrt(b*b- 4*a*c0/(2a)
if sqrt =0 root= -b/2a
discriminant{d= b2-4ac}
if d=0, real and equal
d>0, real and unequal
d<0, imaginary
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, c, d, r1, r2;
    cout << " Enter a, b, and c: "<< endl;
    cin >> a >> b >> c;
    d = b*b- 4*a*c;
    if (d==0)
    {
        cout << "Roots are euqal and Real. ";
        cout << endl << (-b)/(2*a);
    }
    else if(d>0)
    {
        cout << "Roots are reqal and unequal. ";
        cout << endl << (-b+sqrt(d))/(2*a);
        cout << endl << (-b-sqrt(d))/(2*a);
    }
    else
    {
        cout<< "Imaginary";
    }
    return 0;
}