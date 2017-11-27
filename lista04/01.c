#include <stdio.h>
#include <math.h>

struct ponto
{
    float x;
    float y;
    float z;
};

float distancia(struct ponto p1, struct ponto p2)
{
    float d;
    d = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
    return d;
}


int main(){
    
    struct ponto p1;
    struct ponto p2;
    float d;
    
    scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
    scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));
    
    d = distancia(p1, p2);
    
    printf("%.2f\n", floor(d*100)/100);
    
    return 0;
}