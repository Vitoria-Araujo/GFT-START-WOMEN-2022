#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  int num[10], soma = 0, qtd= 0,qtd10=0,qtd50=0, menor = 100000, maior = -10000000;
   for(int j = 0,j < 10; j++){
   cin>>num[j];
   }

for(int i = 0,i < 10; i++){
soma = soma + num[i];
if(num[i] < menor){
menor = num[i]
}
if(num[i] > maior){
maior = num[i]
}
}if(num[i] < menor){
menor = num[i]
}
if(num[i] > 10){
qtd10 = qtd10 + 1;
cout<<"Numéro maior que 10"<< num[i]<<endl;
}
if(num[i] > 50){
qtd50 = qtd50 + 1;
cout<<"Número maior que 50:"<<num[i]<<endl;
}
}
media = soma / 10;
cout<<"Maior:"<<maior<<endl;
cout<<"Menor:"<<menor<<endl;
cout<<"Media:"<<media<<endl;
   return 0;
}
