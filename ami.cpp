#include<stdio.h>
#include<string.h>
long long int counter=0;
long long int flag=0;

void swap(char *x, char *y)
{
    char temp1;
    temp1= *x;
    *x = *y;
    *y = temp1;
}
void permutation(char *a, int l, int r)
{
   int i,len1;
   if(l!=r)
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permutation(a, l+1, r);
          swap((a+l), (a+i));
       }
   }

   else if (l == r)
   {   counter=0;
       len1=strlen(a);
     for(i=0;i<len1/2;i++)
        {
            if(a[i]==a[len1-1-i])
            {
                counter++;
            }
        }
        if(counter==((len1/2)-1))
        {
            flag=1;
        }

        else if(counter==len1/2 && len1%2==1){flag=1;}




}
}
int main(){
    int t,len2,i;
    scanf("%d",&t);
    while(t--)

    {
        char str[10001];
        scanf("%s",str);
        len2=strlen(str);
        permutation(str,0,len2-1);


        if (flag==1){
            printf("DPS\n");
        }
        else printf("!DPS\n");
    }}

