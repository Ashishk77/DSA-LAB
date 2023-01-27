#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void push(float[],float);
float pop(float[]);
int top;
float pop(float[],float)
int top;
float eval_postfix(char postfix[]){

      float opndstk[50],op1,op2;
      int i;
      char symb;
      top=-1;
      for(i=0;postfix[i]!='\0';i++)
      {
            symb=postfix[i];
            if(isdigit(symb))
            push(opndstk,(float)(symb-'0'));
            else
            {     
                  op2=pop(opndstk);
                  op1=pop(opndstk);
                  switch(symb)
                  {
                        case'*':push(opndstk,op1*op2);
                                break;
                        case'/':push(opndstk,op1/op2);
                                break;
                        case'+':push(opndstk,op1+op2);
                                break;
                        case'-':push(opndstk,op1-op2);
                                break;
                        case'$':push(opndstk,pow(op1,op2);
                                break;
                  }
            }
        }
        return(pop(opndstk));
}
void push(float opndstk[],float value)
{
      opndstk[++top]=value;
}
float pop(float opndstk[])
{
      return(opndstk[top--];
}
void main()
{
      char postfix[50];
      float fvalue;
      printf("entern the valis expression;\n");
      scanf("%s",postfix);
      fvalue=eval_postfix(postfix);
      printf("\n evaluated value is:%.2f",fvalue);
}s               
      
      

