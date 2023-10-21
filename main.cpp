#include <iostream>
#include <cmath> // connecting the library of mathematical functions
using namespace std;

int main ()
{ // begin
    // calculating the sum and multiplication of the digits of a three-digit number
    cout << "         Integer11           " << endl; // task number display
    int three; // declaration three-digit number 
    // input
    cout << " Enter a three-digit number :  "; // three-digit number input
    cin >> three;
    int a = three/100; // hundredths calculation   
    int b = (three - (a*100)) / 10; // tens calculation
    int c = three - (a*100) - (b*10); // unit calculation
    int sum = a+b+c; // calculation of the sum
    int multiplying = a*b*c; // calculation of the multiplying 
    // output
    cout << " Sum :  " << sum << endl; // summarisation
    cout << " Multiplying :  " << multiplying << endl; // multiplication
    
    //the numbers x, y, x1, y1, x2, y2 are given. Check the truth of the statement: "The point with
    // with coordinates (x, y) is inside the rectangle, the left upper vertex
    // whose upper left vertex has coordinates (x1, y1), lower right vertex has coordinates (x2, y2), 
    //and the sides are parallel to the to the coordinate axes".
    cout << "         Boolean29    " << endl; // task number display
    // input
    int x1, y1, x11, y11, x2, y2; // diclaration coordinates of points
    cout << " Enter the values of the point with coordinates x and y:  ";
    cin >> x1 >> y1; // coordinates x and y
    cout << " Coordinates of the left top vertex x1 and y1:  ";
    cin >> x11 >> y11; // coordinates x1 and y1
    cout << " Coordinates of the right bottom vertex x2 and y2: ";
    cin >> x2 >> y2; // coordinates x2 and y2
    if(y2 < y11 && x2 < x11 ) { "This rectangle does not exist"; }
    // determining the veracity of the entered coordinates
    bool check = (x1 >= x11 && y1 <= y11) && (x1 <= x2 && y1 >= y2);
    // output
    cout << boolalpha << " A point with given coordinates belongs to a rectangle:  " << check << endl;
    
    // calculation of mathematical expressions
    cout << "           Math3    " << endl; // task number display
    double x, y, yn, yd, r28; // diclaration of variables
    // input
    cout << " Enter the value of x:  "; // entering the value of x
    cin >> x;
    const double pi = 3.14; // diclaration of constant pi
    r28 = 28.0 * pi / 180.0; // converting degrees to radians
    yn = ((pow(sin(x+pi),2))*(pow(2, 1-x))); // numerator calculation
    yd = ((4*tan(fabs(x)))*(sin(r28))); // denominator calculation
    y = ((yn/yd) + ((1.0/3.0)*(log(x)/log (2)))); // calculating the unknown y
    // output
    cout << " Y: " << y; // value of y
    
} // end
