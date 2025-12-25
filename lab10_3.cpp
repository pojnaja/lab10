#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath> 
using namespace std;

int main() {
    ifstream source("score.txt");
    
    double num;
    double sum = 0;
    double sum_sq = 0; 
    int N = 0;         

    
    while(source >> num) {
        sum += num;            
        sum_sq += pow(num, 2); 
        N++;                   
    }

    
    double mean = sum / N;

    
    double std_dev = sqrt((sum_sq / N) - pow(mean, 2));

    
    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << std_dev << endl;

    source.close();
    return 0;
}
