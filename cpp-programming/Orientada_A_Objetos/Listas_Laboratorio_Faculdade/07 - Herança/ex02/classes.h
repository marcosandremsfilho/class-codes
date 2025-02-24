#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

#ifndef BASIC_H
#define BASIC_H

class basic
{
protected:
  string _nome = " ";
  int _id, _idade;
public:
  basic(string nome = " ", int id = 0, int idade = 0) : _nome{nome}, _id{id}, _idade{idade} { }
  ~basic() { }

  string get_nome();
  int get_id();
  int get_idade();
};

#endif

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

class department
{
protected:
  string _departamento =  " ", _cargo = " ";
  float _horas;
public:
  department(string departamento = " ", string cargo = " ", float horas = 0.0) : _departamento{departamento}, _cargo{cargo}, _horas{horas} { }
  ~department() { }

  string get_departamento();
  string get_cargo();
  float get_horas();
};

#endif

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class employee : public basic, public department
{
public:
  employee(string nome = " ", int id = 0, int idade = 0, string departamento = " ", string cargo = " ", float horas = 0.0) : basic{nome, id, idade}, department{departamento, cargo, horas} { }
  ~employee() { }

  friend istream& operator>>(istream&, employee&);
  void print();
};

#endif
