#include <stdio.h>

struct cronometro
{
    int m;
    int s;
    int d;
};

struct cronometro calcula_tempo(struct cronometro t1, struct cronometro t2)
{
    struct cronometro tf;
    int tmp;
    
    if(t1.d < t2.d)
    {
        //decimos
        tmp = t1.d;
        t1.d = t2.d;
        t2.d = tmp;
        
        //segundos
        tmp = t1.s;
        t1.s = t2.s;
        t2.s = tmp;
        
        //minutos
        tmp = t1.m;
        t1.m = t2.m;
        t2.m = tmp;
    }
    
    if(t2.d < t1.d)
    {
        t2.d =t2.d+100;
        t2.s =t2.s-1;
    }
    
    if(t2.s < t1.s)
    {
        t2.s =t2.s+60;
        t2.m =t2.m-1;
    }
    
    tf.d = t2.d - t1.d;
    tf.s = t2.s - t1.s;
    tf.m = t2.m - t1.m;
    
    
    return tf;
}

int main(){
    
    struct cronometro t1, t2, tf;
    
    scanf("%dm %ds %d", &(t1.m), &(t1.s), &(t1.d));
    scanf("%dm %ds %d", &(t2.m), &(t2.s), &(t2.d));
    
    tf = calcula_tempo(t1, t2);
    
    if(t2.m > t1.m)
    {
        printf("%dm %ds %d\n", tf.m, tf.s, tf.d);
    }else
    {
        printf("-%dm %ds %d\n", tf.m, tf.s, tf.d);
    }
    
    return 0;
}