
#include <iostream>
#include <math.h>

using namespace std;

class point{
    
    public:
    
    double getx(){
        return x;
    }
    double gety(){
        return y;
    }
    
    void setx(double n){
        x = n;
    }
    void sety(double n){
        y = n;
    }
    
    void dset(double s, double d){
       x = s;
       y = d;
    }
    
    friend point operator+ (point& a, point& b);
    friend point operator- (point& a, point& b);
    friend ostream& operator<< (ostream& out, const point& pt);
    friend double calcpend(point& a, point& b);
    friend void sacarfuncexp(point& a, point& b);
    
    private:
    
    double x, y;
    
};

ostream& operator<< (ostream& out, const point& pt){
       out << "(" << pt.x << ", " << pt.y << ")";
       return out;
    } 
point operator+ (point& a, point& b){
        point psum;
        psum.x = (a.x + b.x);
        psum.y = (a.y + b.y);
        return psum;
    }
point operator- (point& a, point& b){
       point restp;
       restp.x = (a.x - b.x);
       restp.y = (a.y - b.y);
       return restp;
    }

double calcpend(point& a, point& b){
    double m = (b.y - a.y) / (b.x - a.x);
    return m;
}

void sacarfuncexp(point& p1, point& p2){
    double b; double a;
    b = pow((p2.y / p1.y), (1 / (p2.x - p1.x)));
    a = (p1.y / pow(b, p1.x));
    cout << "La función es: y = (" << a << ")" << "(" << b << ")" << "^x" << endl;
}

int main()
{
    point dani;
    dani.dset(5,12);
    
    point rata;
    rata.dset(10,56);
    
    cout << "Punto Dani: " << dani << endl;
    cout << "Punto Rata: " << rata << endl;
    cout << "Dani - Rata : " << (dani - rata) << endl;
    cout << "Dani + Rata : " << (dani + rata) << endl;
    cout << "Pendiente: " << calcpend(rata, dani) << endl;
    sacarfuncexp(dani, rata);
    return 0;
}
