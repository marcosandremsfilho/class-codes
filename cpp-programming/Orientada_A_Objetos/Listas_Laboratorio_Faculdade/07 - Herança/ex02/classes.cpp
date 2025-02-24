#include "classes.h"

string basic :: get_nome()
{
  return _nome;
}

int basic :: get_id()
{
  return _id;
}

int basic :: get_idade()
{
  return _idade;
}

string department :: get_departamento()
{
  return _departamento;
}
string department :: get_cargo()
{
  return _cargo;
}
float department :: get_horas()
{
  return _horas;
}

istream& operator>>(istream&, employee& x)
{
  cout << "--------------------------\n" << "Enter employee's basic info\n\n";
  cout << "Enter Name: ";
  getline(cin, x._nome);
  cout << "\nEnter Id: ";
  cin >> x._id;
  cout << "\nEnter Age: ";
  cin >> x._idade;
  cout << "\nEnter Department Name: ";
  cin >> x._departamento;
  cout << "\nEnter Assigned Work: ";
  cin >> x._cargo;
  cout << "\nEnter time in hours to complete work: ";
  cin >> x._horas;

  return cin;
}

void employee :: print()
{
  system("cls");
  cout << "\n======================\nEMPLOYEE'S INFORMATION\n======================\n\n";
  cout << "-----------------\nBASIC INFORMATION\n";
  cout << "\nName: " << get_nome();
  cout << "\nID: " << get_id();
  cout << "\nAge: " << get_idade() << "\n\n";

  cout << "\n\n----------------------\nDEPARTMENT INFORMATION\n";
  cout << "\nDepartment: " << get_departamento();
  cout << "\nAssigned Work: " << get_cargo();
  cout << "\nTime to Complete Work: " << get_horas();
}
