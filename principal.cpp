#include<iostream>

using namespace std;

#define _MAX_ 100

class TVetInt
{
  private:
      int v[_MAX_];
      int qtd;
  public:
      void ler();
      void listar();
};
void TVetInt::ler()
{
    cout << "Entre com a quantidade de elementos:";
    cin >> qtd;
    for(int i=0; i<qtd; i++)
    {
       cout << "entre com o valor " << i+1 << 
		" de " << qtd << ":";
       cin >> v[i]; 
    }
}

void TVetInt::listar()
{
    for(int i=qtd-1; i>=0; i--)
       cout << v[i] << " ";
    cout << endl;
}

int main()
{
    TVetInt v;
    v.ler();
    v.listar();
    return 0;
}
