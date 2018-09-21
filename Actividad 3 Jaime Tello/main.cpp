#include <iostream>

using namespace std;

int main()
{
  string nombre;
  short int edad;
  short int altura;
  float peso;

  cout << "Por favor, introduce el nombre: ";
  cin >> nombre;

  cout << "Por favor, introduce la edad de " << nombre << ": ";
  cin >> edad;

  if(edad <= 0){
    cout << "La edad debe ser mayor que 0" << endl;
    return 1;
}
if (edad>=115){
    cout<<"Inroduzca un valor menor a 115 años";
    return 1;

}
  cout << "Por favor, introduce la altura en cm de " << nombre << ": ";
  cin >> altura;


  if(altura <= 0){
    cout << "La altura debe ser mayor que 0" << endl;
    return 1;
  }

  cout<< "Por favor, introduce el peso en kg de "<<nombre << ": ";
  cin >> peso;

  if(peso >=200); {
      cout <<"El peso debe ser menor de 200 Kg "<<nombre<<endl;
      return 1;

      }



}

