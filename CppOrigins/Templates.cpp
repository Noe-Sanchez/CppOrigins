
#include <iostream>

using namespace std;

template<class T>

T FarenCel(T f){
    
   return (f - 32.0) * (5.0 / 9.0);
   
}



int main(){
    
    cout << FarenCel<int>(5) << endl;
    cout << FarenCel<double>(5.5) << endl;
    return 0;
    
}
