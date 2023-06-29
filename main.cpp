#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");
    float x,y,soma;
    cout<<"Digite o primeiro valor: ";
    cin>>x;
    cout<<"Digite o segundo valor: ";
    cin>>y;
    soma=x+y;
    cout<<endl<<x<<" + "<<y<<" = "<<soma;
    return 0;
}
