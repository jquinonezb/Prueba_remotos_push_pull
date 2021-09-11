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
			printf("%d \n", cont5);
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
	if(estado_nuevo == 'AGUASCALIENTES')
	{
		estado_le[TAM_MD] = {65,83};
	}	
	else if(estado_nuevo == 'BAJACALIFORNIA')
	{
		estado_le[TAM_MD] = {66,67};
	}
	else if(estado_nuevo == 'BAJACALIFORNASUR')
	{
		estado_le[TAM_MD] = {66,83};
	}	
	else if(estado_nuevo =='CAMPECHE')
	{
		estado_le[TAM_MD] = {67,67};
	}
	else if(estado_nuevo =='COAHUILA')
	{
		estado_le[TAM_MD] = {67,76};
	}	
	else if(estado_nuevo =='COLIMA')
	{
		estado_le[TAM_MD] = {67,77};
	}
	else if(estado_nuevo == 'CHIAPAS')
	{
		estado_le[TAM_MD] = {67,83};
	}	
	else if(estado_nuevo =='CHIHUAHUA')
	{
		estado_le[TAM_MD] = {65,72};
	}	
	else if(estado_nuevo =="DISTRITOFEDERAL")
	{
		estado_le[TAM_MD] = {68,70};
	}
	else if(estado_nuevo =='DURANGO')
	{
		estado_le[TAM_MD] = {68,71};
	}	
	else if(estado_nuevo =='GUANAJUATO')
	{
		estado_le[TAM_MD] = {71,84};
	}	
	else if(estado_nuevo =='GUERRERO')
	{
		estado_le[TAM_MD] = {71,82};
	}	
	else if(estado_nuevo =='HIDALGO')
	{
		estado_le[TAM_MD] = {72,71};
	}	
	else if(estado_nuevo =='JALISCO')
	{
		estado_le[TAM_MD] = {74,67};
	}	
	else if(estado_nuevo == 'MEXICO')
	{
		estado_le[TAM_MD] = {77,67};
	}	
	else if(estado_nuevo =='MICHOACAN')
	{
		estado_le[TAM_MD] = {77,78};
	}
	else if(estado_nuevo == 'MORELOS')	
	{	
		estado_le[TAM_MD] = {77,83};
	}
	else if(estado_nuevo == 'NAYARIT')
	{
		estado_le[TAM_MD] = {78,84};
	}
	else if(estado_nuevo == 'NUEVOLEON')
	{
		estado_le[TAM_MD] = {78,76};
	}
	else if(estado_nuevo == 'OAXACA')
	{
		estado_le[TAM_MD] = {79,67};
	}
	else if(estado_nuevo == 'PUEBLA')
	{
		estado_le[TAM_MD] = {80,76};
	}
	else if(estado_nuevo == 'QUERETARO')
	{
		estado_le[TAM_MD] = {81,84};
	}
	else if(estado_nuevo == 'QUINTANAROO')
	{
		estado_le[TAM_MD] = {81,82};
	}
	else if(estado_nuevo == 'SANLUISPOTOSI')
	{
		estado_le[TAM_MD] = {83,80};
	}
	else if(estado_nuevo == 'SINALOA')	
	{
		estado_le[TAM_MD] = {83,76};
	}
	else if(estado_nuevo == 'SONORA')
	{
		estado_le[TAM_MD] = {83,82};
	}
	else if(estado_nuevo == 'TABASCO')
	{
		estado_le[TAM_MD] = {84,67};
	}
	else if(estado_nuevo == 'TAMAULIPAS)
	{
		estado_le[TAM_MD] = {84,83};
	}
	else if(estado_nuevo == 'TLAXCALA')		
	{
		estado_le[TAM_MD] = {84,76};
	}
	else if(estado_nuevo == 'VERACRUZ')		
	{
		estado_le[TAM_MD] = {86,90};
	}
	else if(estado_nuevo == 'YUCATAN')
	{
		estado_le[TAM_MD] = {88,78};
	}
	else if(estado_nuevo == 'ZACATECAS')
	{
		estado_le[TAM_MD] = {90,83};
	}
	else{
		printf("No existe tu datos \n");
	}
char CURP[14]; 
}
