
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline ;
    double mew,SD,num,sum = 0.0,sum_2 = 0.0;
    int n = 0;
    while(getline(source,textline)){

        num =  atof(textline.c_str()) ;
        sum += num;
        sum_2 += num*num;
        n++;
    }

    mew = 1.0/n*sum;
    SD = sqrt((1.0/n*sum_2)-pow(mew,2));
    cout << "Number of data = "<< n <<endl;
    cout << setprecision(3);
    cout << "Mean = " << mew << endl;
    cout << "Standard deviation = "<< SD << endl;
}