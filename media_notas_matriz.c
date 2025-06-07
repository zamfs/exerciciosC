#include <stdio.h>

int main(){
      float NotasTurma[10][3], somaNotasTestes;
      float mediaAlunos[10] = {0.0};
      float mediaTestes[3] = {0.0};
      int i,j;
  
      for (i=0; i<10; i++){
            printf("\nNotas do aluno %d: \n", i + 1);
            for (j=0; j<3; j++){
                  printf("Teste %d: ", j+1);scanf("%f", &NotasTurma[i][j]);
            }
      }
      
      //Calculando média de notas de cada aluno.
      for (i=0; i<10; i++){
            mediaAlunos[i] = (NotasTurma[i][0] + NotasTurma[i][1] + NotasTurma[i][2])/3;
      }
      
      //Calculando média da turma em cada teste.
      for (j=0; j<3; j++){
            for(i=0; i<10; i++){
                  somaNotasTestes += NotasTurma[i][j];
            }
            mediaTestes[j] = somaNotasTestes/10;
      }
      
      
      //Mostrar a media de cada aluno
      printf("\nMedia de notas dos alunos nos testes.\n");
      for (i=0; i<10; i++){
            printf("Aluno %d: %2.2f\n", i+1, mediaAlunos[i]);
      }

      //Printar a media da turma no testes 1,2,3
      printf("\n\nMedia de notas da turma no testes.\n");
      for (j=0; j<3; j++){
            printf("\nTeste %d: %2.2f\n", j+1, mediaAlunos[j]);
            
      }
      
      return 0;
}
