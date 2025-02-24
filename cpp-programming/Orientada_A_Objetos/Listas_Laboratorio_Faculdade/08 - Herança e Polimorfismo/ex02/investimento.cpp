#include "investimento.h"

float investimento :: retorno(int meses)
{
  return 0;
}

float PapelBolsa :: retorno(int meses)
{
  float PapelBolsaP = 0, PapelBolsaN = 0;
  float valor = _valor;
  for(int i = 1 ; i <= meses; i++)
  {
    if(i%2 == 0)
    {
      PapelBolsaP = valor + valor * _taxa;
      valor = PapelBolsaP;
    }
    else
    {
      PapelBolsaN = valor - valor * _taxa;
      valor = PapelBolsaN;
    }
  }
  return valor;
}

float RendaFixa :: retorno(int meses)
{
  float valor = _valor;

  for (int i = 0; i <= meses - 1; i++)
  {
    valor = valor + valor*(_taxa - _taxa * 0.15);
  }
  return valor;
}

float Imobiliario :: retorno(int meses)
{
  float valor = _valor;

  for (int i = 0; i <= meses - 1; i++)
  {

    valor = valor + valor*0.75*_taxa;
  }

  return valor;
}

void investimento :: retornaValores()
{
  float valor, taxa_bolsa, taxa_renda, taxa_Imobiliario;
  int meses;

  cout << "\n=== Programa de Rendimentos ===\n";

  cout << "Entre com os seguintes valores:\n";

  cout << "\nValor inicial da aplicacao (R$): ";
  cin >> valor;

  cout << "\nTaxa do papel da bolsa: ";
  cin >> taxa_bolsa;

  cout << "\nTaxa do fundo renda fixa: ";
  cin >> taxa_renda;

  cout << "\nTaxa do fundo imobiliario: ";
  cin >> taxa_Imobiliario;

  cout << "\nNumero de meses: ";
  cin >> meses;

  investimento *papel = new PapelBolsa{valor, taxa_bolsa};
  investimento *renda = new RendaFixa{valor, taxa_renda};
  investimento *imobiliario = new Imobiliario{valor, taxa_Imobiliario};



  cout << "\n\nExpectativa de rendimentos:\n";
  cout << "\nRendimento do papel da bolsa: " << papel->retorno(meses);
  cout << "\nRendimento do fundo renda fixa: " << renda->retorno(meses);
  cout << "\nRendimento do fundo imobiliario: " << imobiliario->retorno(meses);
}
