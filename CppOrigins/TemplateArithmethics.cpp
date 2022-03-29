
// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function

#include <iostream>
#include <vector> // for compiler to be able to use vectors
using namespace std;

const int N = 40;

inline void sum(int*p, int n, vector<int> d){

    int i;
    *p = 0;
    for(i = 0; i < (n + 1); ++i){ //in 2nd argument, (n + 1) is used to make up for the
                                  //last iteration of the cycle (also used in line 33)
        *p = *p + d[i];
        
    }

}

int main(){

    int i;
    int accum = 0;
    vector<int> data;
    
    for(i = 0; i < (N + 1); ++i){
        
        data.push_back(i);
        
    }
    
    sum(&accum, N, data);
    
    cout << "Sum is: " << accum << endl;

    return 0;

}