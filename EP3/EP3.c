#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Algoritmo da dicotomia

float f(float x)
{
    float y;
    y = (pow(x, 3) -17); // função para determinar valor 
    return y;
}
float dicotomia(float a, float b, float erro)
{
    float c,fa,fb,fc;
    int i = -1;
    fa = f(a);
    fb = f(b);
    while(fabs(b-a) > erro)
    {
    	i ++;
    	printf("%f -> %d iteracoes \n",c,i);
        c = (a+b)/2;
        fc = f(c);
        if(fa*fc < 0)
        {
            b = c;
            fb = fc;
        }
        else
        {
            a = c;
            fa = fc;
        }
    }
        c = (a+b)/2;
        
        return c;
}
int main()
{
    float a, b, c, erro;
    printf("METODO DA DICOTOMIA. \n \n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("erro = ");
    scanf("%f",&erro);
    if(f(a)*f(b) > 0)
    {
        printf("O intervalo não e aplicavel. \n \n");
        printf("Digite um novo intervalo. \n \n");
        printf("a = ");
        scanf("%f",&a);
        printf("b = ");
        scanf("%f",&b);
    }
    c=dicotomia(a,b,erro);
    printf("\nRaiz aproximada = %f ",c);
    system("pause");
    return 0;
}
