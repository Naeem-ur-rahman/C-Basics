#include <iostream> 
#include <math.h> 
using namespace std; 
int main() 
{ 
    double x = 45; 
    cout << "Sine    of 45 : " << sin(x) << endl<<endl; 
    cout << "Cosine  of 45 : " << cos(x) << endl<<endl; 
    cout << "Tangent of 45 : " << tan(x) << endl<<endl; 
    double y = 14; 
    cout << "Square root of 14 : " << sqrt(y) << endl<<endl; 
    int z = -25; 
    cout << "Absolute value of -25 : " << abs(z) << endl<<endl; 
    cout << "Power value of 45^14 : " << pow(x, y) << endl<<endl; 
    x = 4; 
    y = 20; 
    cout << "Hypotenuse as x=4,y=20"<< hypot(x, y) << endl<<endl; 
    x = 19.234; 
    cout << "Floor value of 19.234  : " << floor(x) << endl<<endl; 
    x = 1.0; 
    cout << "Arc Cosine value of x=1.0 : " << acos(x) << endl<<endl; 
    cout << "Arc Sine value of x=1.0 : " << asin(x) << endl<<endl; 
    cout << "Arc Tangent value of x=1.0 : " << atan(x) << endl<<endl; 
    y = 12.3; 
    cout << "Ceiling value of 12.3 : " << ceil(y) << endl<<endl; 
    x = 57.3;
    cout << "Hyperbolic Cosine of  57.3 : " << cosh(x) << endl<<endl; 
    cout << "Hyperbolic tangent of 57.3 : " << tanh(x) << endl<<endl; 
    y = 90 ; 
    cout << "Log value of 90 : "  << log(y) << endl<<endl; 
    return 0; 
}
