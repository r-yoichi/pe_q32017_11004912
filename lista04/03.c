#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[50];
    int ra;
    float p1;
    float p2;
    float p3;
    float media;
};

float media(struct aluno a)
{
    float media;
    
    media = (a.p1 + a.p2 + a.p3)/3;
    
    return media;
}

int main(){
    
    struct aluno alunos;
    
    int i;
    
    FILE * fp;
    FILE * fp2;
    
    fp = fopen("lista_alunos.txt", "r");
    fp2 = fopen("media_alunos.txt", "w");
    
    while(fscanf(fp, "\%s \%d \%f \%f %f", alunos.nome, &alunos.ra, &alunos.p1, &alunos.p2, &alunos.p3)!=EOF)
    {
        alunos.media = media(alunos);
    
        fprintf(fp2, "\%s \%.4d \%.2f \%.2f %.2f %.2f\n", alunos.nome, alunos.ra, alunos.p1, alunos.p2, alunos.p3, alunos.media);
    }
    fclose(fp);
    fclose(fp2);
    
    return 0;
}