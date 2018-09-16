 /* Nome: Guilherme Navarro            */
 /* Numero USP: 8943160                */
 /* Exercicio-Programa 1               */
 /* COmpilador: Dev-C++ 5.11           */

#include <stdlib.h>
#include <stdio.h>

	int main() {
        int n; //numero de alunos da turma
		int freq; //frequencia 
		int i; // contador de alunos
		int P1, P2, Psub, PRec; //provas
		int EP1, EP2, EP3; //EP's
		int MP, ME, MF, MFRec; //médias
		int Reprovados, Aprovados; // Contador do aprovados e reprovados
		
		printf("Digite o numero de alunos da turma: ");
		scanf("%d" , &n);
		for(i=1;n>=i;i+=1) {
			printf("\nAluno %d\n", i); // contador de alunos
			printf("Digite a Frequencia: ");
			scanf("%d", &freq);
			printf("Digite as notas das 3 provas(0 a 100): ");	
			scanf("%d %d %d", &P1, &P2, &Psub);
			printf("Digite as 3 notas dos EP's(0 a 100): ");
			scanf("%d %d %d", &EP1, &EP2, &EP3);
			if(P1<50 && Psub!=-1){  // onde Prova Sub entra
				P1=Psub;
			}
			if(P2<50 && Psub!=-1){
				P2=Psub;
			}
			if(P1==-1){   // condições impostas pela convenção de notas
				P1=0;
			}
			if(P2==-1){
				P2=0;
			}
			if(Psub==-1){
				Psub=0;
			}
			MP=(2*P1+3*P2)/5; // Media das provas
			if(EP1==-1){    // condições impostas pela convenção
				EP1=0;
			}
			if(EP2==-1){
				EP2=0;
			}
			if(EP3==-1){
				EP3=0;
			}
	    	ME=(4*EP1+5*EP2+11*EP3)/20; // Media dos EP's
	    	printf("Media das Provas: %d\n" , MP);
	    	printf("Media dos EP's: %d\n" , ME);  	
	    	if(ME>=50){   // condição para tomar Media final como Minimo entre media de EP's e provas
	    		MF=(3*MP+ME)/4; // Media Final
			}else{
				MF=ME;
			}
	    	if(MP<50){
				MF=MP;
	    	}
		    printf("Media final: %d\n", MF);
			if(MF>=50 && freq>=70){ // critérios de aprovação
				printf("Aprovado!\n");
	   			Aprovados = (Aprovados+1);
			} 
			if(MF<30 && freq>=70){
				printf("Reprovado por nota!\n");
				Reprovados = (Reprovados +1);	
			}
			if(freq<70){
				printf("Reprovado por falta!\n");
				Reprovados = (Reprovados +1);	
				if(MF<30){
					printf("Reprovado por nota e falta!\n");
					Reprovados = (Reprovados +1);		
				}
			}
			if(MF>=30 && MF<50 && freq>=70){ // condição para fazer prova de recuperação
				printf("Digite a nota da prova de recuperacao: ");
				scanf("%d", &PRec);
				MFRec=(PRec+MF)/2;
				printf("Media final apos a recuperacao: %d\n" , MFRec);
				if(MFRec>=50) {   // criterios de aprovação para receuperação
    				printf("Aprovado!\n");
	   				Aprovados = (Aprovados+1);
				} else {
					printf("Reprovado por nota!\n");
					Reprovados = (Reprovados +1);
				}
			}
		}
	    printf("Total de alunos Aprovados: %d\n", Aprovados); // contagem de alunos aprovado e reprovados
	    printf("Total de alunos Reprovados: %d\n", Reprovados);
	    return 0;	
	}
