//----------------------------------------------------------
// Name: Waylon Wu
// E-mail Address: wiw5145@psu.edu
// Class: CMPSC 121
// Lab #6
// Due Date: 10/28/16
// Brief Project Description: Passing Arrays to Functions
//----------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

double mean(double[], int);
double deviation(double[], int);

int main() {
    
    const int size = 10;
    double numbers[size];
    
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
    
    cout << "The mean is " << mean(numbers, size) << endl;
    cout << "The standard deviation is " << deviation(numbers, size) << endl;
    
    return 0;
}

double mean(double x[], int size) {
    
    double mean, numerator = 0;
    
    for(int i = 0; i < size; i++) {
        numerator += x[i];
    }
    
    mean = numerator/size;
    return mean;
}

double deviation(double x[], int size) {
    
    double newMean, numerator = 0, originalMean = mean(x, size);
    
    for(int i = 0; i < size; i++) {
        
        newMean = (pow((x[i] - originalMean), 2));
        
        numerator += newMean;
    }
    
    double sDev = sqrt(numerator/(size - 1));
    return sDev;
}
