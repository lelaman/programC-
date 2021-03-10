#include <stdio.h>
#include <conio.h>

main() {
	int kolom, c, n, temp;
	printf("Masukkan jumlah kolom segitiga:");scanf("%d",&n);
	
	temp=n;
	for (kolom = 1; kolom=n; kolom++) 
	{
		for (c =1; c<temp; c++)
		printf(" ");
		
		temp--;
		for ( c=1; c<=2 * kolom-1;c++);
		printf(" * ");
		  
		printf("/5");
	}

	getch();
}

