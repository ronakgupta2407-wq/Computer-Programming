// Calculate surface area and volume of a cone, sphere, and cylinder
#include <iostream>
#include <cmath> // Required for the sqrt() function

// This line allows you to use names like cout, cin, etc., directly.
using namespace std;

int main() {
    // Use const for PI as its value shouldn't change
    const double PI = 3.14159; 
    
    double r, h;

    // --- Input from User ---
    cout << "Enter the radius (r): ";
    cin >> r;
    
    cout << "Enter the height (h): ";
    cin >> h;

    // --- Calculations ---
    // Sphere
    double volume_of_sphere = (4.0 / 3.0) * PI * r * r * r;
    double surface_area_of_sphere = 4 * PI * r * r;

    // Cone
    // 'l' is the slant height, calculated using the Pythagorean theorem
    double slant_height_l = sqrt(r * r + h * h); 
    double volume_of_cone = (1.0 / 3.0) * PI * r * r * h;
    double surface_area_of_cone = PI * r * (r + slant_height_l);

    // Cylinder
    double volume_of_cylinder = PI * r * r * h;
    double surface_area_of_cylinder = (2 * PI * r * h) + (2 * PI * r * r);

    // --- Output Results ---
    cout << "\n--- Results ---" << endl;
    cout << "Volume of Sphere: " << volume_of_sphere << endl;
    cout << "Surface Area of Sphere: " << surface_area_of_sphere << endl;
    cout << "-----------------" << endl;
    cout << "Volume of Cone: " << volume_of_cone << endl;
    cout << "Surface Area of Cone: " << surface_area_of_cone << endl;
    cout << "-----------------" << endl;
    cout << "Volume of Cylinder: " << volume_of_cylinder << endl;
    cout << "Surface Area of Cylinder: " << surface_area_of_cylinder << endl;

    return 0; // Indicates the program ran successfully
}
