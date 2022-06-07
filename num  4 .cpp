#include <bits/stdc++.h>


using namespace std;

//Cria a classe pai imposto

class Imposto

{

    public:

 // declara o construtor vazio
   Imposto(){
    
   }

//declara o método  calculaImposto
    double calculaImposto(double valor){
     //declara uma variável auxiliar pra calcular o valor final       double aux = 0;
      return aux;
    }
    
};
//declara a classe filha icms
class ICMS: public Imposto 

{

    public:
 
   
   //cria o construtor vazio
   ICMS(){
    
   }

   //sobrescreve o  calculaImposto
   double calculaImposto(double valor){
     //declara uma variável auxiliar pra calcular o valor  final 
       double aux = 0;
    //calcula e retorna o imposto
       aux = 0.30 * valor;
       return aux;
    }
    
};

//deara a classe filha ipi
class IPI: public Imposto 

{

    public:
 
 
   //cria o construtor vazio
   IPI(){
    
   }
    
    double calculaImposto(double valor){
     //declara uma variável auxiliar pra calcular o valor  final 
       double aux = 0;
    //teste se é maior, igual ou menor que 25000 e calcula o impostl
       if(valor < 25000){
        aux = valor * 0.05;
    }else if(valor >= 25000){
       aux = valor * 0.10;
    }
       return aux;
    }
};
//declara a classe filha cofins
class COFINS: public Imposto

{

    public:
 
   
   //cria o construtor vazio
   COFINS(){
    
   }
    //declara o método calculaImposto
    double calculaImposto(double valor){
    double aux = 0;
    //verifica se é maior,igual ou menor que 1700, calcula e retorna o imposto 
       if(valor <= 170000){
        aux = 0;
    }else if(valor > 17000){
       aux = valor * 0.08;
    }
       return aux;
    }
};


int main() {
    //declara as variáveis 
    double valor,icms, ipi,cofins,soma;
    
    //declara os objetos
    ICMS ic;
    IPI ip;
    COFINS c;
    
    //pede o valor
    cout<<"Digite um Valor:";
    cin>>valor;
    
    //calcula os impostos  e a soma
   icms = ic.calculaImposto(valor);
   ipi = ip.calculaImposto(valor);
    cofins = c.calculaImposto(valor);
    soma = valor + icms + ipi + cofins;
    
    //exibe tudo
    cout << "ICMS:"<< icms << endl;
    
    cout << "IPI:"<< ipi << endl;
    
    cout << "COFINS:"<< cofins << endl;
    
    cout << "Valor Final:" << soma << endl;
    
    return 0;

}