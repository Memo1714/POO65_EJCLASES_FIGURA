#include <iostream>
#include <cmath>
using namespace std;
//CLASES DEFINICION
class cuadrado{
public:
    double lado;
    cuadrado();
    cuadrado(double);
    cuadrado(const cuadrado &);
    double area();
    double perimetro();

};
class triangulo{
public:
    double base,altura;
    triangulo();
    triangulo(double,double);
    triangulo(const triangulo &);
    double area();
    double perimetro();
    double volumen();
};

class circulo{
public:
    double radio;
    circulo();
    circulo(double);
    circulo(const circulo &);
    double area();
    double perimetro();
    double volumen();

};
//IMPLEMENTACION CLASE
cuadrado::cuadrado():lado(0){};
//cuadrado::cuadrado(double ld):lado(ld){};
//cuadrado::cuadrado(const cuadrado &cd):lado(cd.lado){};
double cuadrado::area(){
    return lado*lado;
}
double cuadrado::perimetro(){
    return 4*lado;
}

triangulo::triangulo():base(0),altura(0){};
//triangulo::triangulo(double b,double h):base(b),altura(h){};
//triangulo::triangulo(const triangulo &tr):base(tr.base),altura(tr.altura){};
double triangulo::area(){
    return base*altura;
}
double triangulo::perimetro(){
    return base*3;

}
double triangulo::volumen(){
    return ((base*altura)*altura)/3;

}

circulo::circulo():radio(0){};
//circulo::circulo(double rd):radio(rd){};
//circulo::circulo(const circulo &cir):radio(cir.radio){};
double circulo::area(){
    return M_PI*pow(radio,2);
}
double circulo::perimetro(){
    return 2*M_PI*radio;
}

double circulo::volumen(){
    return (4.0/3.0)*M_PI*pow(radio,3);
}


//APLICACION
int main(){
    int op;
    cuadrado c1;
    triangulo t1;
    circulo co1;
    do{
        cout<<"\t**** Menu ****\n";
        cout<<"1.-Cuadrado"<<endl;
        cout<<"2.-Triangulo"<<endl;
        cout<<"3.-Circulo"<<endl;
        cout<<"4.-Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>op;
        switch(op){
            case 1:{
            cout<<"Ingrese cuanto miden los lados del cuadrado: ";
            cin>>c1.lado;
            cout<<"El area del cuadrado es: "<<c1.area()<<endl;
            cout<<"El perimetro del cuadrado es: "<<c1.perimetro()<<endl;
                break;
            }
            case 2:{
                cout<<"Ingrese la base del triangulo: ";
                cin>>t1.base;
                cout<<"Ingrese la altura del triangulo: ";
                cin>>t1.altura;
                cout<<"El area del triangulo es: "<<t1.area()<<endl;
                cout<<"El perimetro del triangulo es: "<<t1.perimetro()<<endl;
                cout<<"El volumen del triangulo es:"<<t1.volumen()<<endl;
                break;
            }
            case 3:{
                cout<<"Ingrese el radio del circulo: ";
                cin>>co1.radio;
                cout<<"El area del circulo es: "<<co1.area()<<endl;
                cout<<"El perimetro del circulo es: "<<co1.perimetro()<<endl;
                cout<<"El volumen del circulo es: "<<co1.volumen()<<endl;
                break;
            }
            case 4:{
                cout<<"Saliendo del programa...:)"<<endl;
                break;
            }
            default:{
                cout<<"Opcion incorrecta ...!"<<endl;
            }
        }

    }while(op!=4);

    return 0;
}
