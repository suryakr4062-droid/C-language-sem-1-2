//take marks of 5 subjects in interers,find the total in integer and average in float
#include<stdio.h>
int main()
{
    int eng,mat,sci,psy,his,total;
    float ave;
    
    printf("enter marks of english:");
    scanf("%d",&eng);
    
    printf("enter marks of maths:");
    scanf("%d",&mat);
    
    printf("enter marks of science:");
    scanf("%d",&sci);

    printf("enter marks of phychology:");
    scanf("%d",&psy);

    printf("enter marks of history:");
    scanf("%d",&his);
    
    total=eng+mat+sci+psy+his;
    ave=total/5.0;
    
    printf("subjects total is:%d\n",total);
    printf("subjects average is:%.2f",ave);
    
    return 0;
}