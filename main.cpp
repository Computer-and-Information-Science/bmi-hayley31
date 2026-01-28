#include <iostream>
using namespace std;

int main() {
 
int height, weight;
height = 60;
weight = 127;

double kg, meters, bmi;

kg = weight*0.453492;
meters = height * 0.0254;

bmi = kg/(meters*meters);

cout << "The BMI for this person is: " << bmi << endl;

}
