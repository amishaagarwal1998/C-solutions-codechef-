/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
 #include<stdio.h>
 #include<stdlib.h>
char* intToRoman(int A) {
    char * B=(char *)malloc(20 *sizeof(char));
    int i=0;
    while(A>0)
    {
        if(A>=1000)
        {
            A-=1000;
            B[i]='M';
            i++;
        }
    
        else if(A>=900)
        {   
            B[i]='C';i++;
            B[i]='M';i++;
            A-=900;
        }
        
        else if(A>=500)
            {
                B[i]='D';i++;
                A-=500;
            }
            
        else if(A>=400)
        {
        	B[i]='C';i++;
        	B[i]='D';i++;
        	A-=400;
        	
		}
        else if(A>=100)
        {
            B[i]='C';i++;
            A-=100;
            
        }
        
        
        
        else if(A>=90)
        {
            B[i]='X';i++;
            B[i]='C';i++;
            A-=90;
            
        }
        
        else if(A>=50)
        {   B[i]='L';i++;
            A-=50;
        }
        
        else if(A>=40)
        {
            B[i]='X';i++;
            B[i]='L';i++;
            A-=40;
        }
        
        else if(A>=10)
        {
            B[i]='X';i++;
            A-=10;
            
        }
        
        else if(A==9)
        {
            B[i]='I';i++;
            B[i]='X';i++;
            A-=9;
        }
        
        else if(A>=5)
        {
            B[i]='V';i++;
            A-=5;
        }
        
        else if(A==4)
        {
            B[i]='I';i++;
            B[i]='V';i++;
            A-=4;
            
        }
        
        else if(A>=1)
        {
            B[i]='I';i++;
            A-=1;
        }
        
    }
    
    B[i]='\0';
    return B;
}

int main(void)
{
	int A,i;
	scanf("%d",&A);
char *B=intToRoman(A);
for(i=0;B[i]!='\0';i++)
printf("%c ",B[i]);


}
