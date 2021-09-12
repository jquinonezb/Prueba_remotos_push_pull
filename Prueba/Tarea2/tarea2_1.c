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
	char year[TAM_AN], sexo[TAM_SE], estado[TAM_MAX], estado_le[2];
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
	int cont5 = 0;
printf("Ahora introducirá el estado donde nació \n");
	do
	{
		printf("Introduzca en mayúsculas el estado donde nació (omita los espacios y acentos) \n");
		scanf("%s", estado);
		cont5 = 0;
		for(int a = 0; a<=TAM_MAX; a++)
		{
			if (estado[a]>=65 && estado[a]<=90)
			{
			cont5++;
			/*printf("%d \n", cont5);*/
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
printf("%s \n", estado_nuevo);

	/*ENCONTRAR LA ABREVIACIÓN DEL ESTADO*/
	int choice = 0;
	printf("A continuación se mostrará una lista de los estados de la República, elige el tuyo \n
"1 AGUASCALIENTES\n"
"2 BAJACALIFORNIA\n"
"3 BAJACALIFORNASUR\n"
"4 CAMPECHE\n"
"5 COAHUILA\n"
"6 COLIMA\n"
"7 CHIAPAS\n"
"8 CHIHUAHUA\n"
"9 DISTRITOFEDERAL\n"
"10 DURANGO\n"
"11 GUANAJUATO\n"
"12 GUERRERO\n"
"13 HIDALGO\n"
"14 JALISCO\n"
"15 MEXICO\n"
"16 MICHOACAN\n"
"17 MORELOS\n"
"18 NAYARIT\n"
"19 NUEVOLEON\n"
"20 OAXACA\n"
"21 PUEBLA\n"
"22 QUERETARO\n"
"23 QUINTANAROO\n"
"24 SANLUISPOTOSI\n"
"25 SINALOA\n"
"26 SONORA\n"
"27 TABASCO\n"
"28 TAMAULIPAS\n"
"29 TLAXCALA\n"
"30 VERACRUZ\n"
"31 YUCATAN\n"
"32 ZACATECAS\n");
	
	scanf("%d", choice);
	switch(choice)
	{
	case 1:
		estado_le[0] = 65;
		estado_le[1] = 83;
		break;
	case 2:	
		estado_le[0] = 66;
		estado_le[1] = 67;
		break;
	
	case 3:
		estado_le[0] = 66;
		estado_le[1] = 83;
		break;	
	
	case 4:
		estado_le[0] = 67;
		estado_le[1] = 67;
		break;
	case 5:
		estado_le[0] = 67;
		estado_le[1] = 76;
		break;
	case 6:
		estado_le[0] = 67;
		estado_le[1] = 77;
		break;
	case 7:
		estado_le[0] = 67;
		estado_le[1] = 83;
		break;
	case 8:
		estado_le[0] = 65;
		estado_le[1] = 72;
		break;
	case 9:
		estado_le[0] = 68;
		estado_le[1] = 70;
		break;
	case 10:
		estado_le[0] = 68;
		estado_le[1] = 71;
		break;
	case 11:
		estado_le[0] = 71;
		estado_le[1] = 84;
		break;
	case 12:
		estado_le[0] = 71;
		estado_le[1] = 82;
		break;
	case 13:
		estado_le[0] = 72;
		estado_le[1] = 71;
		break;
	case 14:
		estado_le[0] = 74;
		estado_le[1] = 67;
		break;
	case 15:
		estado_le[0] = 77;
		estado_le[1] = 67;
		break;
	case 16:
		estado_le[0] = 77;
		estado_le[1] = 78;
		break;
	case 17:

		estado_le[0] = 77;
		estado_le[1] = 83;	
		break;	
	case 18:
		estado_le[0] = 78;
		estado_le[1] = 84;
		break;
	case 19:
		estado_le[0] = 78;
		estado_le[1] = 76;
		break;
	case 20:
		estado_le[0] = 79;
		estado_le[1] = 67;
		break;
	case 21:
		estado_le[0] = 80;
		estado_le[1] = 76;
		break;
	case 22:
		estado_le[0] = 81;
		estado_le[1] = 84;
		break;
	case 23:
		estado_le[0] = 81;
		estado_le[1] = 82;
		break;
	case 24:
		estado_le[0] = 83;
		estado_le[1] = 80;
		break;
	case 25:	
		estado_le[0] = 83;
		estado_le[1] = 76;
		break;
	case 26:
		estado_le[0] = 83;
		estado_le[1] = 82;
		break;
	case 27:
		estado_le[0] = 84;
		estado_le[1] = 67;
		break;
	case 28:
		estado_le[0] = 84;
		estado_le[1] = 83;
		break;
	case 29:	
		estado_le[0] = 84;
		estado_le[1] = 76;
		break;
	case 30:	
		estado_le[0] = 86;
		estado_le[1] = 90;
		break;
	case 31:
		estado_le[0] = 88;
		estado_le[1] = 78;
		break;
	case 32:
		estado_le[0] = 90;
		estado_le[1] = 83;
		break;
	}
	printf("%s", estado_le);
char CURP[14]; 
}
