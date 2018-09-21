#include <iostream>

using namespace std;


class Persona{
 public:
    Persona(string _nombre, unsigned short int _peso)
    {
        nombre = _nombre;
        peso = _peso;
    }
     string nombre;
    float peso; //en kg
};
 int main()
{
    Persona chico("Jaime", 80);
    cout << "Hola " << chico.nombre <<
            ", pesas " << chico.peso <<
            " kg " << endl;
    return 0;
}
