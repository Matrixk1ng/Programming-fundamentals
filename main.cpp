
#include <iostream>
#include <cmath>
using namespace std;

const double PI = acos(-1);

int main()
{
    double radius, area;

    cout << "Please enter the radius of the circle in inches: ";
    cin >> radius;

    cout << "PI = " << PI << endl; 
    
    area = radius * radius * PI;

    cout << "\nA circle with a radius of " << radius
         << " inches has an area of "
         << area << " square inches.\n";
    

    return 0;
}


