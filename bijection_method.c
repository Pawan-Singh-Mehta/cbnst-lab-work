/*bijection method*/
#include<stdio.h>
#include<math.h>
double fun(double x)
{
    return x*x*x-5*x+1;
}
int main()
{
    double x1,x2,err,x;
    int flag=0,itr;
    do{
         printf("enter the guess value of x1,x2\n");
         scanf("%lf%lf",&x1,&x2);
    if(fun(x1)*fun(x2)<0)
    {
      
    
       printf("root lies between %d and %d",x1,x2);
        flag++;
    }
    else{
    printf("wrong interval try again\n");
       
    }
    }while(flag!=1);
    printf("enter the allowed error\n");
    scanf("%lf",&err);

    do{
        x=(x1+x2)/2;
        if( fun(x)==0.0)
        {
            break;
        }
        else if(fun(x)*fun(x1)<0)
        {
            x2=x;
        }
        else{
            x1=x;
        }
        itr++;
        printf("no of iteration is = %d .root = %lf  ,value of function =%lf\n",itr,x,fun(x));
       

    }while((x2-x1)>=err);
    printf("the root is %lf",x);

    return 0;


   

}