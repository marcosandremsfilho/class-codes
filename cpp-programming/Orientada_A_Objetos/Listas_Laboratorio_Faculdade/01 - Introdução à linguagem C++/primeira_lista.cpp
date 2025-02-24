#include "primeira.h"

int x;
float graus, reais, dolar, cambio;
long double radiano;
int numero, cep;

string rua = "";
string bairro = "";
string cidade = "";
string estado = "";

void grausRadiano()
{
  system("cls");
  cout << "Digite o angulo em graus: ";
  cin >> graus;
  radiano = graus*0.0174553292;
  cout << "\nGraus = " << graus << " Radiano = " << radiano;
  cout << "\n";
  system("pause");
}

void ConversorDolar()
{
  system("cls");
  cout << "Reais R$: ";
  cin >> reais;
  cout << "Taxa de cambio: ";
  cin >> cambio;
  dolar = reais/cambio;
  cout << "Equivalente em dolares $: " << dolar << "\n";
  system("pause");
}

void endereco()
{
  system("cls");
  cout << "Rua: ";
  cin.ignore();
  getline(cin,rua);
  cout << "\n" << "Numero: ";
  cin >> numero;
  cout << "\n" << "CEP: ";
  cin >> cep;
  cout << "\n" << "Bairro: ";
  cin.ignore();
  getline(cin,bairro);
  cout << "\n" << "Cidade: ";
  getline(cin,cidade);
  cout << "\n" << "Estado: ";
  getline(cin,estado);
  cout << "\n{" << rua << "}, {" << numero << "}, {";
  cout << bairro << "}, {" << cidade << "} - {" << estado;
  cout << "}, {" << cep;
  cout << "}\n";
  system("pause");
}
