#include<stdio.h>
#define TAM_MAX 20
#define TAM_FE 4
/* PROGRAMA QUE CALCULA LA CURP SEGUN DATOS DADOS*/

void main (void)
{
	int num_nom=0;
	char nom1[TAM_MAX], nom2[TAM_MAX], c = 0;
	char ap_pat[TAM_MAX], ap_mat[TAM_MAX], dia[TAM_FE], mes[TAM_FE];
	char ano[TAM_FE];
  	printf("Bienvenido al sistema de captura de datos para CURP\n");
	printf("¿Cuántos nombres tienes? (1 o 2):\n");
	scanf("%d", &num_nom);
 if (num_nom == 1)
 {
	do
	{
 /*CONOCER EL NUMERO DE CARACTERES QUE TIENEN LOS NOMBRES Y VERIFICAR QUE ESTÉ EN MAYÚSUCULAS*/
	printf("Por favor introduce tu primer nombre en mayúsculas:\n");
	scanf("%s", nom1);
	int cont = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (nom1[a]>=65 && nom1[a]<=90)
		{
			cont++;
			printf("%d \n", cont);
		}
		else if(nom1[a] >= 97 && nom1[a]<= 122 )
		{		
			printf("Tu nombre no está completamente en mayúsculas\n");
			break;
		}
		else
		{
			c++;
			break;
		}
	 }
  	}
  while(c==0);
 }
  else
  {
	do
	{
 /*CONOCER EL NUMERO DE CARACTERES QUE TIENEN LOS NOMBRES Y VERIFICAR QUE ESTÉ EN MAYÚSUCULAS*/
	printf("Por favor introduce tu primer nombre en mayúsculas:\n");
	scanf("%s", nom1);
	int cont = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (nom1[a]>=65 && nom1[a]<=90)
		{
			cont++;
			printf("%d \n", cont);
		}
		else if(nom1[a]>= 97 && nom1[a]<= 122 )
		{		
		     printf("Tu nombre no está completamente en mayúsculas\n");
		     break;
		}
		else
		{
			c++;
			break;
		}
	 }
  	} while(c==0);

	
	char d = 0;
 do
 {
	printf("Por favor introduce tu segundo nombre en mayúsculas: \n");
 	scanf("%s", nom2);
	
	int cont2 = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (nom2[a]>=65 && nom2[a]<=90)
		{
			cont2++;
			printf("%d \n", cont2);
		}
		else if(nom2[a]>= 97 && nom2[a]<= 122 )
		{		
		 printf("Tu nombre no está completamente en mayúsculas\n");
		 break;
		}
		else
		{
		 d++;
		 break;
		}
	 }
  	} while(d==0);
}
	printf("Por favor introduce tu apellido paterno en mayúsculas: \n");
	scanf("%s", ap_pat);
        printf("Por Favor introduce tu apellido materno en mayúsculas: \n");
	scanf("%s", ap_mat);	

}
