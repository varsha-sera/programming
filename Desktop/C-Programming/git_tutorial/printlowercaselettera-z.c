#include<stdio.h>
int main()
{    
    int i,j;
    char choice;
    printf("Enter choice :");
    scanf("%c",&choice);
    switch(choice)
    {
    	case 'a':
    	 for(i=1;i<=6;i++)
	{
    	for(j=1;j<=5;j++)
    	{
    		if((i==1&&j==1)||(i==1&&j==2)||(i==1&&j==3)||(i==1&&j==4)||(i==2&&j==4)||(i==3&&j==4)||(i==3&&j==3)||(i==3&&j==2)||(i==3&&j==2)||(i==3&&j==1)||(i==4&&j==1)||(i==5&&j==2)||(i==5&&j==3)||(i==5&&j==4)||(i==6&&j==5)||(i==4&&(j==4)))
    		  printf("*");
    		else
    		  printf(" ");
		}
		printf("\n");
	}
	break;
	    case 'b':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    		   if(j==1||i==3||i==5||(i==4&&j==5))
				     printf("*");
				   else
				      printf(" ");	
				}
				printf("\n");
			}
	break;
	    case 'c':
	    	for(i=1;i<=4;i++)
	    	{
	    		for(j=1;j<=3;j++)
	    		{
	    			if((i==1&&j==2)||(i==1&&j==3)||(i==2&&j==1)||(i==3&&j==1)||(i==4&&j==2)||(i==4&&j==3))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'd':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    			if(j==5||i==3||i==5||(i==4&&j==1))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'e':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    			if((i==2&&j==1)||(i==3&&j==1)||(i==4&&j==1)||(i==5&&j==2)||(i==5&&j==3)||(i==5&&j==4)||(i==1&&j==2)||(i==1&&j==3)||(i==1&&j==4)||(i==2&&j==5)||(i==3&&j==4)||(i==3&&j==3)||(i==2&&j==2))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	   case 'f':
	   	    for(i=1;i<=5;i++)
	   	    {
	   	      for(j=1;j<=5;j++)
			  {
			  	if((i==2&&j==3)||(i==3&&j==3)||(i==4&&j==3)||(i==5&&j==3)||(i==1&&j==4)||(i==1&&j==5)||(i==3&&j==2)||(i==3&&j==4))
			  	  printf("*");
			  	else
			  	  printf(" ");
			  }	
			  printf("\n");
		    }
	break;
	    case 'g':
	    	for(i=1;i<=6;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if((i==3&&j==2)||(i==2&&j==1)||(i==1&&j==2)||(i==1&&j==3)||(i==2&&j==4)||(i==3&&j==4)||(i==4&&j==4)||(i==5&&j==4)||(i==6&&j==3)||(i==6&&j==2))
	    			   printf("*");
	    			else
	    			   printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'h':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if(j==1||(i==3&&j==3)||(i==4&&j==4)||(i==5&&j==4))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'i':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=3;j++)
	    		{
	    			if((i==3&&j==2)||(i==4&&j==2)||(i==5&&j==2)||(i==1&&j==2))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'j':
	    	for(i=i;i<=7;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if((i==3&&j==4)||(i==4&&j==4)||(i==5&&j==4)||(i==6&&j==4)||(i==7&&j==3)||(i==7&&j==2)||(i==6&&j==1)||(i==1&&j==4))
	    			 printf("*");
	    			else
	    			 printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'l':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=3;j++)
	    		{
	    			if(j==2)
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
    break;
        case 'm':
            for(i=1;i<=5;i++)
            {
            	for(j=1;j<=6;j++)
            	{
            		if((i==1&&j==1)||(i==5&&j==2)||(i==4&&j==2)||(i==3&&j==2)||(i==2&&j==2)||(i==1&&j==3)||(i==2&&j==4)||(i==1&&j==5)||(i==2&&j==6)||(i==3&&j==6)||(i==4&&j==6)||(i==5&&j==6))
			            printf("*");
			        else
			           printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'n':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if((i==5&&j==2)||(i==4&&j==2)||(i==3&&j==2)||(i==2&&j==2)||(i==1&&j==3)||(i==2&&j==4)||(i==3&&j==4)||(i==4&&j==4)||(i==5&&j==4)||(i==1&&j==1))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	   case '0':
	   	   for(i=1;i<=4;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if((i==1&&j==2)||(i==1&&j==3)||(i==2&&j==1)||(i==3&&j==1)||(i==4&&j==2)||(i==4&&j==3)||(i==3&&j==4)||(i==2&&j==4))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'p':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=3;j++)
	    		{
	    			 if(j==1||(i==1&&j==2)||(i==3&&j==2)||j==3&&i==2)
	    			   printf("*");
	    			else
	    			   printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'q':
	    	for(i=1;i<=6;i++)
	    	{
	    		for(j=1;j<=3;j++)
	    		{
	    			if(j==3||(i==1&&j==2)||(i==2&&j==1)||(i==3&&j==2))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'r':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    		   if((i==1&&j==1)||(i==2&&j==2)||(i==3&&j==3)||(i==2&&j==4)||(i==1&&j==5)||(i==4&&j==2)||(i==5&&j==3)||(i==4&&j==4))
				      printf("*");
					 else
					  printf(" ");	
				}
				printf("\n");
			}
	break;
	    case 's':
	    	for(i=1;i<=7;i++)
	    	{
	    		for(j=1;j<=3;j++)
	    		{
				    if((i==1&&j==3)||(i==1&&j==2)||(i==2&&j==1)||(i==3&&j==1)||(i==4&&j==2)||(i==5&&j==3)||(i==6&&j==3)||(i==7&&j==2)||(i==7&&j==1))
				      printf("*");
				    else
				      printf(" ");
				}
				printf("\n");
			}
	break;
	    case 't':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    		   if(j==2&&i<5||i==3&&(j==1||j==3)||i==5&&(j==3||j==4))
				     printf("*");
					else
					 printf(" ");	
				}
				printf("\n");
			}
   break;
	    case 'u':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    			if(j==1&&i<5 || i==5&&(j==2||j==3)||(j==4&&i<5)||(i==5&&j==5))
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
			    printf("\n");	
			}
	break;
	   case 'v':
	        for(i=1;i<=3;i++)
			{
				for(j=1;j<=5;j++)
				{
					if(i==1&&(j==1||j==5)||i==2&&(j==2||j==4)||(i==3&&j==3))
					  printf("*");
					else
					  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'w':
	    	for(i=1;i<=3;i++)
	    	{
	    		for(j=1;j<=7;j++)
	    		{
	    			if(i==1&&(j==1||j==7)||i==2&&(j==2||j==4||j==6)||i==3&&(j==3||j==5))
	    			  printf("*");
	    			else
	    			printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'x':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=5;j++)
	    		{
	    			if(i==j||(i==1&&j==5)||(i==2&&j==4)||(i==4&&j==2)||(i==5&&j==1))
	    			 printf("*");
	    			else
	    			 printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'y':
	    	for(i=1;i<=5;i++)
	    	{
	    		for(j=1;j<=6;j++)
	    		{
	    			if(i==1&&(j==2||j==6)||i==2&&(j==3||j==5)||i==3&&j==4||i==4&&j==3||i==5&&j==2||i==5&&j==1)
	    			  printf("*");
	    			else
	    			  printf(" ");
				}
				printf("\n");
			}
	break;
	    case 'z':
	    	for(i=1;i<=4;i++)
	    	{
	    		for(j=1;j<=4;j++)
	    		{
	    			if(i==1||i==4||i==2&&j==3||i==3&&j==2)
	    			  printf("*");
	    			else
	    			   printf(" ");
				}
				printf("\n");
			}
			
	}
    
   
	return 0;
}
