#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
    float a, b, c, triangle, square, rectangle, trapezoid;
    cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
    triangle=(a*b)/2;
    square=a*a;
    rectangle=a*b;
    trapezoid=((a+b)*c)/2;
    std::cout << triangle<<"\n"<<square<<"\n"<<rectangle<<"\n"<<trapezoid;
}
