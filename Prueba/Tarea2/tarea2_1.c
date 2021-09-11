#include<stdio.h>
#define TAM_MAX 20
#define TAM_AN 4
#define TAM_MD 2
/* PROGRAMA QUE CALCULA LA CURP SEGUN DATOS DADOS*/

void main (void)
{
	int num_nom=0;
	char nom1[TAM_MAX], nom2[TAM_MAX], c = 0;
	char ap_pat[TAM_MAX], ap_mat[TAM_MAX], dia[TAM_MD], mes[TAM_MD];
	char year[TAM_FE];
  	printf("Bienvenido al sistema de captura de datos para CURP\n");
	printf("¿Cuántos nombres tienes? (1 o 2):\n");
	scanf("%d", &num_nom);
 if (num_nom == 1)
 {
	do
	{
 /*CONOCER EL NUMERO DE CARACTERES QUE TIENEN LOS NOMBRES Y VERIFICAR QUE ESTÉ EN MAYÚSUCULAS*/
/*SI TIENE 1 NOMBRE*/
	printf("Por favor introduce tu primer nombre en mayúsculas:\n");
	scanf("%s", nom1);
	int cont = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (nom1[a]>=65 && nom1[a]<=90 || nom1[a]==165)
		{
			cont++;
			printf("%d \n", cont);
		}
		else if(nom1[a] >= 97 && nom1[a]<= 122 || nom1[a]==164 )
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
/* SI TIENE 2 NOMBRES*/
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
		if (nom1[a]>=65 && nom1[a]<=90 nom1[a]==165)
		{
			cont++;
			printf("%d \n", cont);
		}
		else if(nom1[a]>= 97 && nom1[a]<= 122 nom1[a]==164)
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

	
	char c = 0;
 do
 {
	printf("Por favor introduce tu segundo nombre en mayúsculas: \n");
 	scanf("%s", nom2);
	
	int cont2 = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (nom2[a]>=65 && nom2[a]<=90 || nom2[a]==165)
		{
			cont2++;
			printf("%d \n", cont2);
		}
		else if(nom2[a]>= 97 && nom2[a]<= 122 || nom2[a]==164)
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
}
	/*APELLIDO PATERNO*/
	char c = 0;
	do
 {
	printf("Por favor introduce tu apellido paterno en mayúsculas: \n");
	scanf("%s", ap_pat);
	int cont3 = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (ap_pat[a]>=65 && ap_pat[a]<=90 || ap_pat[a]==165)
		{
			cont3++;
			printf("%d \n", cont3);
		}
		else if(ap_pat[a]>= 97 && ap_pat[a]<= 122 || ap_pat[a]==165)
		{		
		 printf("Tu apellido no está completamente en mayúsculas\n");
		 break;
		}
		else
		{
		 c++;
		 break;
		}
	 }
  	} while(c==0);
	
	/*APELLIDO MATERNO*/
	char c = 0;
	do
 {
        printf("Por Favor introduce tu apellido materno en mayúsculas: \n");
	scanf("%s", ap_mat);
		int cont4 = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (ap_mat[a]>=65 && ap_mat[a]<=90 || ap_mat[a]==165)
		{
			cont4++;
			printf("%d \n", cont4);
		}
		else if(ap_mat[a]>= 97 && ap_mat[a]<= 122 || ap_mat[a]==164)
		{		
		 printf("Tu apellido no está completamente en mayúsculas\n");
		 break;
		}
		else
		{
		 c++;
		 break;
		}
	 }
  	} while(c==0);
/* FECHA DE NACIMIENTO*/
	/*DIA DE NACIMIENTO*/
	printf("Ahora ingrese su fecha de nacimiento (el formato será dd/mm/aaaa)\n");
	d==0;
do
{
	printf("Ingrese su día de nacimiento: \n);
	scanf("%s", dia);
	    if (dia[0] >= 48 && dia[0] <= 50 && dia[1] >= 48 && dia[1] <= 57)
		       {
			       printf("Días correctos\n");
		       }
	     else if(dia[0] == 51 && dia[1]<=49)
	       {
		       printf("Día correctos\n");
	       }
	     else{
	     printf("Numero incorrecto\n");
		     break;
	     }
	       d++;
}while(d==0);
/*MES DE NACIMIENTO*/
	d==0;
do
{
	printf("Ingrese su mes de nacimiento: \n);
	scanf("%s", mes);
	    if (mes[0] == 48 && mes[1]>=49 && mes[1]<=57)
		       {
			     printf("Mes correcto\n");   
		       }
	       else if (mes[0] == 49 && mes[1]>=49 && mes[1]<=50)
	       {
		       printf("Mes correcto\n");
	       }
	     else{
	     printf("Mes incorrecto\");
		     break;
	     }
	       d++;
}while(d==0);
	
	

}
