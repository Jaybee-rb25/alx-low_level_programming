#include 

* main - prints all possible combinations of two two-digit 
* Return: Always 0 

int 

	int i, 
	
	for (i = 0; i < 100; i++) 
	
		for (j = 0; j < 100; j++) 
		
			if (i < j) 
			
				putchar((i / 10) + 
				putchar((i % 10) + 
			       	putchar(' 
				putchar((j / 10) + 
				putchar((j % 10) + 
				if (i != 98 || j != 
				
					
					putchar(' 
				
			
		
	
	
	return 

