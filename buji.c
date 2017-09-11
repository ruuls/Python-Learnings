#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 5 

int f=0,r=-1,a[max],count=0,b[max],c[50],top=0  ;

int enqueue()
{

    int s;
    if((f==0&&r==max-1)||(f>0&&r==f-1))
        printf("Queue is Overflow\n");
    else
    {
        printf("Enter element to be insert:");
        scanf("%d",&s);
        if(r==max-1&&f>0)
        {
            r=0;
            a[r]=s;
            c[top]=s ;
        top=top+1 ;
        }
        else
        {
            if((f==0&&r==-1)||(r!=f-1))
                a[++r]=s;
                c[top]=s ;
        top=top+1 ;
               
        }
        
        
    }
    
}

int dequeue()
{
    int s;
    if((f==0)&&(r==-1))
    {
        printf("Queue is underflow\n");
        enqueue();

    }
    if(f==r)
    {
        s=a[f];
        r=-1;
        f=0;
    }
    else
        if(f==max-1)
        {
            s=a[f];
            f=0;
        }
        else s=a[f++];
        printf("Deleted element is:%d\n",s);
}

int display()
{
    int i,j;
    if(f==0&&r==-1)
    {
        printf("Queue is Empty\n");
        enqueue();
    }
    if(f>r)
    {
        for(i=0;i<=r;i++)
         {
		   printf("\n%d",a[i]);
		   b[i]=a[i] ;
	}
        for(j=f;j<=max-1;j++)
        {
            printf("\n%d",a[j]);
            b[j]=a[j] ;
       }
        printf("\nrear is at %d\n",a[r]);
        printf("\nfront is at %d\n",a[f]);
        
        
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("\n%d",a[i]);
            b[i]=a[i] ;
        }
        printf("\nfront is at %d\n",a[f]);
        printf("\nrear is at %d\n",a[r]);
        
    }

printf("***** BACK UP ARRAY ***** \n") ;

 for(i=0;i<top;i++)
    {
    	printf("%d \n",c[i]) ;
	}
}

int main()
{
    int opt ;
    while(1)
    {
            printf("******MAIN MENU****** \n\n") ;
            printf("1.ENQUEUE \n") ;
            printf("2.DEQUEUE \n") ;
            printf("3.DISPLAY \n") ;
            printf("4.EXIT \n\n") ;
            
            printf("Enter the option : ") ;
            scanf("%d",&opt) ;
            
            switch(opt)
            {
                  case 1:
                  enqueue() ;
                  break ;
                  
                  case 2:
                  dequeue() ;
                  break ;
                  
                  case 3:
                  display() ;
                  break ;
                  
                  case 4:
                  exit(0) ;
                  
                  
                  default :
                  printf("Wrong option choosen") ;
                   
    }
}
}
