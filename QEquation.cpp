#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, root1, root2;
    cout << "Enter a, b, c";
    cin >> a >> b >> c;
    root1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
    cout << "The roots are " <<root1 << " " << root2;
    return 0 ;

}