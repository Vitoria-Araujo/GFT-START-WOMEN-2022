#include <bits/stdc++.h>


using namespace std;

//Cria a classe produto
class Produto

{

    public:
 
    //define os atributos 
    string nome;
    double valor;
    int tipo;
 
   //cria o construtor
   Produto(string n,double v,int t){
    nome = n;
    valor = v;
    tipo = t;
   }
    
};

//cria a classe caixa
class Caixa

{

    public:

 // declara o construtor vazio
   Caixa(){
    
   }

//declara o método  calculaValorFinal
    double calculaValorFinal(Produto p,int qtd){
     //declara uma variável auxiliar pra calcular o valor  final 
    double aux;
    //testa se o tipo do produto é 1
    if(p.tipo == 1){ 
    //se for atribui 10% de desconto 
       aux = p.valor * qtd;
       aux = aux - aux * 0.10;
       return aux;
    }
    //testa se o tipo do produto é 2
    else if(p.tipo == 2){
    //se for atribui 20% de desconto
       aux = p.valor * qtd;
       aux = aux - aux * 0.20;
       return aux;
    }
     //testa se o tipo do produto é 3 e a quantidade  é 5
    else if(p.tipo == 3 && qtd == 5){
    //se for atribui 10% de desconto
       aux = p.valor * qtd;
       aux = aux - aux * 0.10;
       return aux;
    }
    //testa se o tipo do produto é 3
    else if(p.tipo == 3){
    //se for retorna o valor integral sem desconto
       aux = p.valor * qtd;
       return aux;
    }
    }
    
};

int main() {
  
    //instancia os produtos 
    Produto p1("Banana",0.99,2);
    Produto p2("Energético",5.49,3);
    Produto p3("Arroz",20.00,1);
    Produto p4("Chocolate",4.50,1);
    Produto p5("Leite",3.73,3);
    Produto p6("Abacaxi",2.40,2);
    
    //instancia o caixa   
     Caixa c;
    
    //declara e calcula os valores finais 
    double valor1,valor2,valor3,valor4,valor5,valor6;
    valor1 = c.calculaValorFinal(p1,3);
    valor2 = c.calculaValorFinal(p2,7);
    valor3 = c.calculaValorFinal(p3,1);
    valor4 = c.calculaValorFinal(p4,12);
    valor5 = c.calculaValorFinal(p5,5);
    valor6 = c.calculaValorFinal(p6,1);
    
    //exibe os valores finais
    
    cout << p1.nome << ":"<< valor1 << endl;
    
    cout << p2.nome << ":"<< valor2 << endl;
    
    cout << p3.nome << ":"<< valor3 << endl;
    
    cout << p4.nome << ":"<< valor4 << endl;
    
    cout << p5.nome << ":"<< valor5 << endl;
    
    cout << p6.nome << ":"<< valor6 << endl;
    
    return 0;

}