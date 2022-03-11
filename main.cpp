#include <iostream>

using namespace std;

int main(){
    float a, b, c, triangle, square, rectangle, trapezoid;
    std::cout
    <<"Si devono inserire tre valori per calcolare l'area delle quattro figure piane.\n"
    << "Il primo valore indica:\n"
        <<"-la base del triangolo;\n"
        <<"-il lato del quadrato;\n"
        <<"-il lato minore del rettangolo;\n"
        <<"-la base minore del trapezio;\n\n"
    <<"Il secondo valore indica:\n"
        <<"-l'altezza del triangolo;\n"
        <<"-il lato maggiore del rettangolo;\n"
        <<"-la base maggiore del trapezio;\n\n"
    <<"Il terzo valore indica:\n"
        <<"-l'altezza del trapezio.\n";
    std::cin >> a >> b >> c;
    triangle=(a*b)/2;
    square=a*a;
    rectangle=a*b;
    trapezoid=((a+b)*c)/2;
    std::cout << "Area del triangolo:"<<triangle<< ";\n"
    << "Area del quadrato:" << square<<";\n"
    << "Area del rettangolo:"<<rectangle<< ";\n"
    << "Area del trapezio:"<<trapezoid<< ".\n";
    return 0;
}
