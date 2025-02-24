//Prova 01 - ECOP03
//Aluno: Marcos Andre Magalhaes de Sousa Filho:
//Matricula: 2020002875

#include "coordenada.h"

void coordenada :: set_lat(float lat)
{
  lat = _lat;
}

void coordenada :: set_long(float lon)
{
  lon = _lon;
}

float coordenada :: get_lat()
{
  return _lat;
}

float coordenada :: get_long()
{
  return _lon;
}

coordenada coordenada :: operator !()
{
  if(_lat != 0)
    _lat = -(_lat);
  if (_lon != 0)
    _lon = -(_lon);
  if(_lon == 0 && _lat == 0)
    {
      _lat = 0;
      _lon = 0;
    }
}

bool coordenada :: operator !=(coordenada& c)
{
  if(_lat != c._lat)
  {
    if(_lon != c._lon)
      return true;
    else
      return false;
  }
  else
    return false;
}

bool coordenada :: operator ==(coordenada& c)
{
  if(_lat == c._lat)
  {
    if(_lon == c._lon)
      return true;
    else
      return false;
  }
  else
    return false;
}

string coordenada :: hemisferio()
{
  string lo, la, re;
  if(_lon > 0)
    lo = " norte ";
  if(_lon < 0)
    lo = " sul ";
  if(_lon == 0)
    lo = " ";

  if(_lat > 0)
    la = "- leste ";
  if(_lat < 0)
    la = "- oeste ";
  if(_lat == 0)
    la = " ";

  re = lo + la;
  if( lo == " " && la  == " ")
    re = "origem";

    return re;
}

ostream& operator<<(ostream& out, const coordenada& c)
{
  out << "\nLatitude: " << c._lat << "\nLongitude: " << c._lon;
  return out;
}

istream& operator>>(istream& in, coordenada& c)
{
  cin >> c._lat >> c._lon;
  return in;
}
