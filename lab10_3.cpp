#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    ifstream source;
    int number=0;
    double mean=0, stan=0, num;
    string read;

    source.open("D:\\Git\\LABSIB\\score.txt");
    while(getline(source,read)){
        number += 1;
        num = atof(read.c_str());
        mean += num;
        stan += pow(num,2);
    }
    mean = mean/number;
    stan = sqrt(stan/number-pow(mean,2));
    source.close();

    cout << "Number of data = " << number << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << stan << endl;
}