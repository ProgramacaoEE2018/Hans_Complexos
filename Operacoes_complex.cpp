#include <iostream>
#include <math.h>
using namespace std;

class Complex{
private:

    float r;
    float i;

public:

    Complex(float c, float d){
        r = c;
        i = d;
    };

    Complex Conjug(){
        return Complex(r, -i);
    };


    float Mod(){
        return sqrt(r*r + i*i);
    };

    Complex operator -(Complex z){
        Complex za(r,i);
        za.r = this->r - z.r;
        za.i = this->i - z.i;
        return za;
    }


    Complex operator+(Complex z){
        Complex zb(r,i);
        zb.r = this ->r + z.r;
        zb.i = this ->i + z.i;
        return zb;
    }


    Complex operator/(Complex z){
        return Complex((this->r * z.r  +  this->i * z.i)/(z.r*z.r + z.i*z.i) , (-this->r * z.i  +  this->i * z.r)/(z.r*z.r + z.i*z.i
));
    }

    Complex operator*(Complex z ){
        Complex zc(r, i);
        zc.r = (this->r * z.r) - (this->i * z.i);
        zc.i = (this->r * z.i) + (this->i * z.r);
        return zc;
    }
    void imprimeComplex(){
        cout << r << " + " << i<< "i" ;
    }
};
int main()
{
    float a,b;
    cout << "insira a parte real:";
    cin >>a;
    cout << "insira a parte imaginaria:";
    cin >>b;
    cout << "o numero complexo eh"<< endl;
    Complex x(a,b);
    x.imprimeComplex();
    return 0;
}
