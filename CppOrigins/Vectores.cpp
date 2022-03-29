
#include <iostream>
#include <vector>
#include <stdlib.h>

std::vector <int> promedios;

using namespace std; 

int main(){
    
    int promdes;
    int promagr;
    int promnum;
    string deseo;
    int sumprom = 0;
    double finalprom;
    
    cout << "Cuantas calificaciones desea agregar?" << endl;
    cin >> promnum;
    
    cout << "Agrege las calificaciones: " << endl;

        for(int i = 0; i < promnum; ++i){
            cin >> promagr;
            promedios.push_back (promagr);
        }
    
    cout << "Los calificaciones agregadas son: ";
    for(int j = 0; j < promnum; ++j){
        cout << promedios[j];
        if(j == promnum - 1){
            cout << "\n";
            break;
        }else{
            cout << ", ";
    }
    }
    cout << "Desea promediar las calificaciones? si/no " << endl;
    
    cin >> deseo;
    
    if(deseo == "si"){
       
        for(int b = 0; b < promnum; ++b){
        sumprom = sumprom + promedios[b];
        }
        
       finalprom = (static_cast <double> (sumprom) / promnum);
        cout << "El promedio es " << finalprom << endl;
        
    }else{
        exit;
    }

    return 0;
    
}

