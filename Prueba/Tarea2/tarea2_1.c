#include<stdio.h>
#define TAM_MAX 20
#define TAM_AN 4
#define TAM_MD 2
#define TAM_SE 1
/* PROGRAMA QUE CALCULA LA CURP SEGUN DATOS DADOS*/

void main (void)
{
	int num_nom=0, jom=0;
	char nom1[TAM_MAX], nom2[TAM_MAX], c = 0;
	char ap_pat[TAM_MAX], ap_mat[TAM_MAX], dia[TAM_MD], mes[TAM_MD];
	char year[TAM_AN], sexo[TAM_SE], estado_le[TAM_MD];
	int cont=0, cont2=0, cont1=0;
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
	cont = 0;
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
 printf("%s \n",nom1);
 printf("%d \n", cont);
 
/* SI TIENE 2 NOMBRES*/
  if(num_nom==2)
  {
	printf("Tu primer nombre es Jose o María (1 sí, 2 no)?\n");
	scanf("%d", &jom);
	do
	{
 /*CONOCER EL NUMERO DE CARACTERES QUE TIENEN LOS NOMBRES Y VERIFICAR QUE ESTÉ EN MAYÚSUCULAS*/
	printf("Por favor introduce tu primer nombre en mayúsculas:\n");
	scanf("%s", nom1);
	cont1 = 0;
	for(int a = 0; a<=TAM_MAX; a++)
	{
		if (nom1[a]>=65 && nom1[a]<=90)
		{
			cont1++;
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
printf("%s \n",nom1);
 printf("%d \n", cont1);
	
	c = 0;
	
 do
 {
	printf("Por favor introduce tu segundo nombre en mayúsculas: \n");
 	scanf("%s", nom2);
	
	cont2 = 0;
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
 printf("%s \n",nom2);
 printf("%d \n", cont2);
	/*APELLIDO PATERNO*/
	c = 0;
	int cont3 = 0;
	do
 {
	printf("Por favor introduce tu apellido paterno en mayúsculas: \n");
	printf("Si tu apellido tiene eñe por favor sustituyela con una X\n");
	scanf("%s", ap_pat);
	cont3 = 0;
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
	printf("%s \n",ap_pat);
 printf("%d \n", cont3);
	
	/*APELLIDO MATERNO*/
	c = 0;
	int cont4 = 0;
	do
 {
        printf("Por Favor introduce tu apellido materno en mayúsculas: \n");
	printf("Si tu apellido tiene eñe por favor sustituyela con una X\n");
	scanf("%s", ap_mat);
	cont4 = 0;
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
	printf("%s \n",ap_mat);
 printf("%d \n", cont4);
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

/*ENCONTRAR LA ABREVIACIÓN DEL ESTADO*/
	int choice = 0;
	printf("A continuación se mostrará una lista de los estados de la República, elige el tuyo \n1 AGUASCALIENTES\n2 BAJACALIFORNIA\n3 BAJACALIFORNASUR\n4 CAMPECHE\n5 COAHUILA\n6 COLIMA\n7 CHIAPAS\n8 CHIHUAHUA\n9 DISTRITOFEDERAL\n10 DURANGO\n11 GUANAJUATO\n12 GUERRERO\n13 HIDALGO\n14 JALISCO\n15 MEXICO\n16 MICHOACAN\n17 MORELOS\n18 NAYARIT\n19 NUEVOLEON\n20 OAXACA\n21 PUEBLA\n22 QUERETARO\n23 QUINTANAROO\n24 SANLUISPOTOSI\n25 SINALOA\n26 SONORA\n27 TABASCO\n28 TAMAULIPAS\n29 TLAXCALA\n30 VERACRUZ\n31 YUCATAN\n32 ZACATECAS\n");
	
	scanf("%d", &choice);
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
	printf("%s \n", estado_le);
	printf("%d \n",cont);
	printf("%d \n",cont2);
	printf("%d \n",cont3);
	printf("%d \n",cont4);
	printf("%d \n", jom);
/*CURP*/	
char CURP[16]; 
CURP[0]= ap_pat[0];
for (int a=1; a<cont3;a++)
	{
		if(ap_pat[a] == 65 || ap_pat[a]==69 || ap_pat[a]==73 || ap_pat[a]==79 || ap_pat[a]==85)
		{
			CURP[1] = ap_pat[a];
			break;
		}
	}
CURP[2]= ap_mat[0];
	if (num_nom == 1)
	{
		CURP[3]= nom1[0];
	}
	else if (num_nom == 2)
	{
		if(jom == 1)
		{
		CURP[3]=nom2[0];
		}
		else
		{
		CURP[3]=nom1[0];
		}
	}
CURP[4]= year[2];
CURP[5]= year[3];
CURP[6]= mes[0];
CURP[7]= mes[1];
CURP[8]= dia[0];
CURP[9]= dia[1];
CURP[10]= sexo[0];
CURP[11]= estado_le[0];
CURP[12]= estado_le[1];
	for (int a=1; a<cont3;a++)
        {	
	if(ap_pat[a] == 65 || ap_pat[a]== 69 || ap_pat[a]== 73 || ap_pat[a]== 79 || ap_pat[a]== 85)
		{
			
		}
		else
		{
		    CURP[13] = ap_pat[a];
			printf("%c \n", CURP[13]);
			break;
		}
	}

	for (int a=1; a<cont4;a++)
        {	
	if(ap_mat[a] == 65 || ap_mat[a]==69 || ap_mat[a]==73 || ap_mat[a]==79 || ap_mat[a]==85)
		{
		}
	else
	    {
	        CURP[14] = ap_mat[a];
			printf("%c \n", CURP[14]);
			break;
	    }
	}

	if (num_nom == 1)
	{
		for(int a=1;a<cont;a++)
		{
		if(nom1[a] == 65 || nom1[a]==69 || nom1[a]==73 || nom1[a]==79 || nom1[a]==85)
			{
			}
		else
		    {
		    CURP[15] = nom1[a];
			printf("%c \n", CURP[15]);
			break;   
		    }
		}
	}
	
	if (num_nom == 2 && jom == 1 )
	{
			for(int a=1;a<cont1;a++)
                {
                	if(nom2[a] == 65 || nom2[a]==69 || nom2[a]==73 || nom2[a]==79 || nom2[a]==85)
                    {
                    }
                	else
                	{
                	    CURP[15] = nom2[a];
                        	printf("%c \n", CURP[15]);
                        	break;
                	}
                }
	}
    if (num_nom == 2 && jom == 2)
		{
			for(int a=1; a<cont1; a++)
                {
                if(nom1[a] == 65 || nom1[a]==69 || nom1[a]==73 || nom1[a]==79 || nom1[a]==85)
                        {}
                        else
                        {
                            CURP[15] = nom1[a];
                            printf("%c \n", CURP[15]);
                            break;
                        }
                }
		}
	
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",CURP[0],CURP[1],CURP[2],CURP[3],CURP[4],CURP[5],CURP[6],CURP[7],CURP[8],CURP[9],CURP[10],CURP[11],CURP[12],CURP[13],CURP[14],CURP[15]);
}
