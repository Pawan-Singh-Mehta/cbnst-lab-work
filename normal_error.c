/*normal erro*/
#include<stdio.h>
#include<math.h>
int main()
{
    float apr, act,ab_err,rel_err,per_err;
    printf("enter the absolute value\n");
    scanf("%f",&act);
    printf("enter the  approximated value\n");
    scanf("%f",&apr);
printf("calculating errors\n");
ab_err=fabs(act-apr);
rel_err=ab_err/act;
per_err=rel_err*100;
printf("errors are\n");
printf("Absolute error is %f\n",ab_err);
printf("Relative error is %f\n",rel_err);
printf("Percentage error is %f\n",per_err);
return 0;

}