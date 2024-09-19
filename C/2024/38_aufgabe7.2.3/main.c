#include <stdio.h>

#define Pi 3.14159265358979323846

// Function to find the smaller of two numbers
double smaller_of_two(double num1, double num2) {
 if (num1 < num2) {
  return num1;
 } else {
  return num2;
 }
}

// Function to calculate the area of a circle given the radius
double circle_area(double radius) {
 return Pi * radius * radius;
}

int main(void) {
 double radius;  // Use double for consistency
 double surface;

 // Input the radius of the circle
 printf("Enter the radius of the circle: ");
 scanf("%lf", &radius);  // Use %lf for double

 // Calculate the surface area of the circle
 surface = circle_area(radius);
 printf("Surface of the circle is: %.3lf\n", surface);  // Use %.3lf for double precision

 // Input two numbers
 double num1;
 double num2;

 printf("Write two numbers: ");
 scanf("%lf %lf", &num1, &num2);  // Use %lf for double

 // Find the smaller of the two numbers
 double smaller = smaller_of_two(num1, num2);
 printf("The smaller of %.2lf and %.2lf is %.2lf\n", num1, num2, smaller);

 return 0;
}



