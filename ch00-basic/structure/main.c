#include<stdio.h>
#include<stdlib.h>

struct data
{
    char name[10];
    float math;
    float english;
};

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);    
    struct data student[n];    
    for(size_t i = 0; i < n; i++)
    {
        scanf("%s %f %f", student[i].name, &student[i].math, &student[i].english);
    }
    printf("姓名 數學 英文\n");    
    for(size_t i = 0; i < n; i++)
    {        
        printf("%s %.2f %.2f\n", student[i].name, student[i].math, student[i].english);         
    }
    return 0;
}