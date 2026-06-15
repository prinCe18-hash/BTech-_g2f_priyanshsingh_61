#include<stdio.h>
int main()
{
    int hindi , english, science, math, computer, sum ;
    float per;
    printf("Enter marks of Hindi=");
    scanf("%d",&hindi);
        printf("Enter marks of English=");
    scanf("%d",&english);
    printf("Enter marks of Science=");
    scanf("%d",&science);
    printf("Enter marks of Math=");
    scanf("%d",&math);
    printf("Enter marks of Computer=");
    scanf("%d",&computer);

    sum=hindi+english+science+math+computer;
    printf("Sum of marks=%d",sum);

    per=(float)sum/5;
    printf("Percent of marks=%f",per);
    return 0;


}