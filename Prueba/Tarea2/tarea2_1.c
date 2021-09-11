#include<stdio.h>
#define TAM_MAX 20
#define TAM_AN 4
#define TAM_MD 2
#define TAM_SE 1
/* PROGRAMA QUE CALCULA LA CURP SEGUN DATOS DADOS*/

void main (void)
{
	int num_nom=0;
	char nom1[TAM_MAX], nom2[TAM_MAX], c = 0;
	char ap_pat[TAM_MAX], ap_mat[TAM_MAX], dia[TAM_MD], mes[TAM_MD];
	char year[TAM_AN], sexo[TAM_SE], estado[TAM_MAX], estado_le[TAM_MD];
  	char numero=165;
	printf("%c\n",numero);
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
		if (nom1[a]>=65 && nom1[a]<=90)
		{
			cont++;
			/*printf("%d \n", cont);*/
		}
		else if(nom1[a] >= 97 && nom1[a]<= 122 || nom1[a]==164)
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
		if (nom1[a]>=65 && nom1[a]<=90)
		{
			cont++;
			/*printf("%d \n", cont);*/
		}
		else if(nom1[a]>= 97 && nom1[a]<= 122 || nom1[a]==164)
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

	
	c = 0;
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
			/*printf("%d \n", cont2);*/
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
	c = 0;
	do
 {
	printf("Por favor introduce tu apellido paterno en mayúsculas: \n");
	printf("Si tu apellido tiene eñe por favor sustituyela con una X\n");
	scanf("%s", ap_pat);
	int cont3 = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (ap_pat[a]>=65 && ap_pat[a]<=90)
		{
			cont3++;
			/*printf("%d \n", cont3);*/
		}
		else if(ap_pat[a]>= 97 && ap_pat[a]<= 122 || ap_pat[a]==164)
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
	c = 0;
	do
 {
        printf("Por Favor introduce tu apellido materno en mayúsculas: \n");
	printf("Si tu apellido tiene eñe por favor sustituyela con una X\n");
	scanf("%s", ap_mat);
		int cont4 = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (ap_mat[a]>=65 && ap_mat[a]<=90)
		{
			cont4++;
			/*printf("%d \n", cont4);*/
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
	char d = 0;
do
{
	printf("Ingrese su día de nacimiento: \n");
	scanf("%s", dia);
	    if (dia[0] >= 48 && dia[0] <= 50 && dia[1] >= 48 && dia[1] <= 57)
		       {
			printf("Día correcto\n");
	      		d++;
		       }
	     else if(dia[0] == 51 && dia[1]<=49)
	       {
		printf("Día correctos\n");
	      	d++;
	       }
	     else{
	     printf("Numero incorrecto\n");

	     }
}while(d==0);
/*MES DE NACIMIENTO*/
	d = 0;
do
{
	printf("Ingrese su mes de nacimiento: \n");
	scanf("%s", mes);
	    if (mes[0] == 48 && mes[1]>=49 && mes[1]<=57)
		       {
			printf("Mes correcto\n");   
	       	      	d++;
		       }
	       else if (mes[0] == 49 && mes[1]>=49 && mes[1]<=50)
	       {
		      printf("Mes correcto\n");
	       	      d++;
	       }
	     else{
	     printf("Mes incorrecto\n");
	     }
}while(d==0);
/*AÑO DE NACIMIENTO*/
	d = 0;
	do
	{
	printf("Introduzca su año de nacimiento\n");
	scanf("%s", year);
		if (year[0]==49 && year[1]==57)
		{
			if(year[2]>=48 && year[2]<=57 && year[3]>=48 && year[3]<=57)
			{
				printf("Año válido \n");
				d++;
			}
		}
		else if (year[0]==50 && year[1]==48) 
		{
			if(year[2]>=48 && year[2]<=49 && year[3]>=48 && year[3]<=57)
			{
				printf("Año válido \n");
				d++;
			}
			else if (year[2]>=50 && year[3]>=48 && year[3]<=49)
			{
				printf("Año válido \n");
				d++;
			}
		}
		else
		{
			printf("Año incorrecto\n");
		}
	}while(d==0);
/*SEXO DE LA PERSONA*/
	char e = 0;
do
{
	printf("Introduzca su sexo (H para hombre; M para mujer) con letra Mayúscula \n");
	scanf("%s", sexo);
	if (sexo[0]==72 || sexo[0]==77)
	{
		e++;
	}
	else
	{
		printf("Letra no válida, vuelva a intentarlo. \n");
	}
}while(e==0);
/*ESTADO DONDE NACIÓ*/
	char f = 0;
printf("Ahora introducirá el estado donde nació \n");
	do
	{
		printf("Introduzca en mayúsculas el estado donde nació (omita los espacios y acentos) \n");
		scanf("%s", estado);
		int cont5 = 0;
		for(int a = 0; a<=TAM_MAX; a++)
		{
			if (estado[a]>=65 && estado[a]<=90)
			{
			cont5++;
			printf("%d \n", cont4);
			}
			else if(estado[a]>= 97 && estado[a]<= 122)
			{		
		 	printf("El estado no está completamente en mayúsculas\n");
		 	break;
			}
			else
			{
		 	f++;
		 	break;
			}
		}
	}while(f==0);
/*NUEVA VARIABLE CON EL NOMBRE DEL ESTADO*/
	char estado_nuevo[cont5];
	for(int g = 0; g < cont5; g++)
	{
		estado_nuevo[g] = estado[g];
	}
	/*ENCONTRAR LA ABREVIACIÓN DEL ESTADO*/
	switch(estado_nuevo)
	{
		case 'AGUASCALIENTES':
		estado_le[TAM_MD] = {65,83};
		break;
		case 'BAJACALIFORNIA':
		estado_le[TAM_MD] = {66,67};
		break;
		case 'BAJACALIFORNASUR':
		estado_le[TAM_MD] = {66,83};
		break;
		case 'CAMPECHE':
		estado_le[TAM_MD] = {67,67};
		break;
		case 'COAHUILA':
		estado_le[TAM_MD] = {67,76};
		break;
		case 'COLIMA':
		estado_le[TAM_MD] = {67,77};
		break;
		case 'CHIAPAS':
		estado_le[TAM_MD] = {67,83};
		break;
		case 'CHIHUAHUA':
		estado_le[TAM_MD] = {65,72};
		break;
		case 'DISTRITOFEDERAL':
		estado_le[TAM_MD] = {68,70};
		break;
		case 'DURANGO':
		estado_le[TAM_MD] = {68,71};
		break;
		case 'GUANAJUATO':
		estado_le[TAM_MD] = {71,84};
		break;
		case 'GUERRERO':
		estado_le[TAM_MD] = {71,82};
		break;
		case 'HIDALGO':
		estado_le[TAM_MD] = {72,71};
		break;
		case 'JALISCO':
		estado_le[TAM_MD] = {74,67};
		break;
		case 'MEXICO':
		estado_le[TAM_MD] = {77,67};
		break;
		case 'MICHOACAN':
		estado_le[TAM_MD] = {77,78};
		break;
		case 'MORELOS':
		estado_le[TAM_MD] = {77,83};
		break;
		case 'NAYARIT':
		estado_le[TAM_MD] = {78,84};
		break;
		case 'NUEVOLEON':
		estado_le[TAM_MD] = {78,76};
		break;
		case 'OAXACA':
		estado_le[TAM_MD] = {79,67};
		break;
		case 'PUEBLA':
		estado_le[TAM_MD] = {80,76};
		break;
		case 'QUERETARO':
		estado_le[TAM_MD] = {81,84};
		break;
		case 'QUINTANAROO':
		estado_le[TAM_MD] = {81,82};
		break;
		case 'SANLUISPOTOSI':
		estado_le[TAM_MD] = {83,80};
		break;
		case 'SINALOA':
		estado_le[TAM_MD] = {83,76};
		break;
		case 'SONORA':
		estado_le[TAM_MD] = {83,82};
		break;
		case 'TABASCO':
		estado_le[TAM_MD] = {84,67};
		break;
		case 'TAMAULIPAS':
		estado_le[TAM_MD] = {84,83};
		break;
		case 'TLAXCALA':
		estado_le[TAM_MD] = {84,76};
		break;
		case 'VERACRUZ':
		estado_le[TAM_MD] = {86,90};
		break;
		case 'YUCATAN':
		estado_le[TAM_MD] = {88,78};
		break;
		case 'ZACATECAS':
		estado_le[TAM_MD] = {90,83};
		break;
		default:
			printf("No hubo coincidencias \n");
	}
char CURP[14] 
}
