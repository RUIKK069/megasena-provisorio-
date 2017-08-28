#include <stdio.h>

int main()
{
  FILE *pae, *pas;//ponteiros para arquivos
  int valor;//variavel para leitura de dados do arquivo
  char *modo = "r";//modo de leitura "read"
  char arquivoSaida[] = "arquivo.txt";//nome do arquivo a ser utilizado

  pae = fopen("megasena.txt", "r");//abrindo arquivo para leitura.

  if (pae == NULL) {//teste para verificar se conseguiu abrir o arquivo
     printf(stderr, "Nao pode abrir o arquivo megasena.txt!\n");
     exit(1);
  }
      pas = fopen("arquivo.txt", "w");//abre o arquivo para incluir novos elementos
  if (pas == NULL) {
     fprintf(stderr, "Nao pode abrir o arquivo de saida %s!\n",arquivoSaida);
     exit(1);
  }
  char n1="1",n2="2";
  printf("%c",n1);


  fclose(pae);//fecha o arquivo
  fclose(pas); 
  return 0;
}
      char dez1;
      char dez2;
      char dez3;
      char dez4;
      char dez5;
      char dez6;
      char ordem[MAX];
      char data;
      int x=0,y=0;
      while(y<MAX){
        fscanf(pae,"%d",&x);
        if(x!=0){
            ordem[y]=(char)x;
            fscanf(pae,"%d",&data);
            fscanf(pae,"%c\n",&megasena[y]);
            y++;
        }else{
          fscanf(pae,"%d\n",&x);
        }
        x=0;
      }
      int i;
      for(i;i<10;i++){
        printf("%c %c\n",ordem[i],megasena[i]);
      }
}
