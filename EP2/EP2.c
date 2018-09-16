 /* Nome: Guilherme Navarro            */
 /* Numero USP: 8943160                */
 /* Exercicio-Programa 2               */
 /* Compilador: Dev-C++ 5.11           */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double AproxRetang (int n, int r){ // Função que aproxima o valor de pi por retâgulos
	int i;
	double x=0, w=0, Area=0, pi=0, R=0, N=0, altura=0;
	R= r; // r e n em formato double
	N= n;
	w= R/N;
	x= (w/2);
	
	for(i=0; i<n; i++){
		altura = sqrt(R*R - x*x);
		Area = Area + altura*w;
    	x = x + w;
  }
  pi = 4*Area/(R*R); // A area de 1/4 do circulo multiplicada por 4
  return pi;
}

double AproxSerie (int k){ // Função que aproxima o valor de pi por série
	int i, soma=1;
	double pi=0, n=1;
	
	for(i=0; i<k; i++){
		pi= pi + soma/n;
		soma= soma*(-1);
		n= n + 2;
	}
	pi= pi*4; // Série de 1/4 de pi multiplicada por 4 para obter o valor de pi
	return pi;
}

int dados (int raio){ // Saida dos dados apresentados no enunciado
	Saida_Resultado(10, 2, 10);
	Saida_Resultado(100, 2, 100);
	Saida_Resultado(500, 2, 500);
	Saida_Resultado(1000, 2, 1000);
	Saida_Resultado(5000, 2, 5000);
	return 0;
}

int Saida_Resultado(int k, int r, int n){ // Saida dos valores de pi para funções AproxSerie e AproxRetang
	double pi;
	pi = AproxSerie(k);
	printf("Aproximacao por Serie (k=%d) = %f\n",k, pi);
	pi = AproxRetang(n,r);
	printf("Aproximacao por Retangulos (n=%d, r=%d) = %f\n\n", n, r, pi);
	return 0;
}
int main(){
	dados(2); // Chama função "dados" para o raio = 2 cm
	return 0;
}

