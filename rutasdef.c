#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	char *globalMaturino[]= {"11:00", "11:15", "11:30", "11:45"};
            //Ruta 1 CU-Xochimilco
	char *globalVespertino[]= {"12:00", "12:15", "12:30", "12:45", "13:00", "13:15", "13:35", "13:45", "14:00", "14:10", "14:20", "14:40", "14:45", "15:00", "15:10", "15:20", "15:30", "15:45",
        "16:00", "16:10", "16:20", "16:30", "16:40", "16:50", "17:00", "17:10", "17:20", "17:30", "17:40", "17:50", "18:00", "18:10", "18:20", "18:30", "18:40", "18:50", "19:00", "19:10", "19:20",
            "19:30", "19:40", "19:50"};
            //Rutas 1-5
	char *globalNocturno[]= {"20:00", "20:10", "20:20", "20:30", "20:45", "21:00", "21:15", "21:30", "21:45", "22:00", "22:20"};
			//Rutas 6-10
	int globalPrecio_0= 22;	//Se repite:1 En la ruta:Xochimilco
	int globalPrecio_1= 32;	//Se repite:3 En la ruta:Tulyehualco,Tlahuac,Milpa Alta
	int globalPrecio_2= 34;	//Se repite:2 En la ruta:Mixquic, San pablo
	int globalPrecio_3= 45;	//Se repite:1 En la ruta:Chalco
	int globalPrecio_4= 30;	//Se repite:1 En la ruta:San Mateo

int main(void) {
    
	int opcion;
    int selec;

	do{
	printf("�Bienvenido! a Puma Foraneo\n");
	printf("Menu Principal\n");
	printf("Selecciona la ruta\n1)CU a Xochimilco \n2)CU a Deportiva Sta.Cruz \n3)CU a Tulyehualco \n4)CU a Tlahuac \n5)CU a Milpa Alta \n6)CU a Mixquic \n7)CU A Chalco \n8)CU a San Pablo \n9)CU a San Bartolo \n10)CU a San Mateo\n");
	printf("Seleccionaste la opcion:\n");
		scanf("%d",&opcion);	
		switch(opcion){

case 1:
		printf("CU a Xochimilco \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Matutino \n2)Vespertino \n3)Nocturno \n4)Terminar\n\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo:$%d\n", globalPrecio_0);
			printf("Horarios \n");
			printf("1)%s \n2)%s \n3)%s \n4)%s \n", globalMaturino[0], globalMaturino[1], globalMaturino[2], globalMaturino[3]);
			break;
      
		case 2:
			printf("Costo:$%d\n", globalPrecio_0);
			printf("Horarios: \n");
			printf("1)%s \n2)%s \n3)%s \n4)%s \n5)%s \n6)%s \n7)%s \n8)%s \n9)%s \n10)%s \n11)%s \n12)%s \n13)%s \n14)%s \n15)%s \n16)%s \n17)%s \n18)%s \n19)%s \n20)%s \n21)%s \n22)%s \n23)%s \n24)%s \n25)%s \n26)%s \n27)%s \n28)%s \n29)%s \n30)%s \n31)%s \n32)%s \n33)%s \n34)%s \n35)%s \n36)%s \n37)%s \n38)%s \n", globalVespertino[0], globalVespertino[1], globalVespertino[2], globalVespertino[3], globalVespertino[4], globalVespertino[6], globalVespertino[7], globalVespertino[8], globalVespertino[9], globalVespertino[10], globalVespertino[11], globalVespertino[12], globalVespertino[13], globalVespertino[14], globalVespertino[15], globalVespertino[16], globalVespertino[17], globalVespertino[18], globalVespertino[19], globalVespertino[20], globalVespertino[21], globalVespertino[22], globalVespertino[23], globalVespertino[24], globalVespertino[25], globalVespertino[26], globalVespertino[27], globalVespertino[28], globalVespertino[29], globalVespertino[30], globalVespertino[31], globalVespertino[32], globalVespertino[33], globalVespertino[34], globalVespertino[35], globalVespertino[36], globalVespertino[37], globalVespertino[38]);
			break;
      
		case 3:
			printf("Costo:$%d\n", globalPrecio_0);
			printf("Horarios: \n");
			printf("1)%s \n2)%s \n3)%s \n4)%s \n5)%s \n6)%s \n7)%s \n8)%s \n9)%s \n10)%s \n", globalNocturno[1], globalNocturno[2], globalNocturno[3], globalNocturno[4], globalNocturno[5], globalNocturno[6], globalNocturno[7], globalNocturno[8], globalNocturno[9], globalNocturno[10]);
			break;
      
		case 4:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
      
		;
		}

	}while(selec!=4);
	return 0;
}
		break;

case 2:
		printf("CU a Deportiva Sta.Cruz \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Vespertino \n2)Nocturno \n3)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo: \n");
			printf("Horarios \n");
			printf("1)%s \n2)%s \n3)%s \n", globalVespertino[5], globalVespertino[9], globalVespertino[39]);
			break;
      
		case 2:
			printf("Costo \n");
			printf("Horarios \n");
			printf("1)%s \n2)%s \n", globalNocturno[3], globalNocturno[7]);
			break;
      
      
		case 3:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
      
		
		;
		}

	}while(selec!=3);
	return 0;
}

case 3:
		printf("CU a Tulyehualco \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Vespertino \n2)Nocturno \n3)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo:$%d\n", globalPrecio_1 );
			printf("Horarios \n");
			printf("1)%s \n2)%s \n3)%s \n4)%s \n", globalVespertino[5], globalVespertino[12], globalVespertino[16], globalVespertino[35]);
			break;
      
		case 2:
			printf("Costo: %d, globalPrecio_1 \n");
			printf("Horarios \n");
			printf("1)%s \n2)%s \n", globalNocturno[5], globalNocturno[9]);
			break;
      
		case 3:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		
		;
		}

	}while(selec!=3);
	return 0;
}

case 4:
		printf("CU a Tlahuac \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Vespertino \n2)Nocturno \n3)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo: %d, globalPrecio_1 \n");
			printf("Horarios \n");
			printf("1)%s \n2)%s \n", globalVespertino[5], globalVespertino[14]);
			break;
      
		case 2:
			printf("Costo: %d, globalPrecio_1 \n");
			printf("Horarios \n");
			printf("1)%s \n2)&s \n", globalNocturno[3], globalNocturno[9]);
			break;
      
		case 3:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		
		;
		}

	}while(selec!=3);
	return 0;
}


case 5:
		printf("CU a Milpa Alta \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Vespertino \n2)Nocturno \n3)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{

		case 1:
			printf("Costo: %d, globalPrecio_1 \n");
			printf("Horarios \n");
			printf("1)%s \n2)%s \n3)%s \n", globalVespertino[9], globalVespertino[15], globalVespertino[39]);
			break;
      
		case 2:
			printf("Costo: %d, globalPrecio_1 \n");
			printf("Horarios \n");
			printf("1)%s \n2)%s \n", globalNocturno[3], globalNocturno[7]);
			break;
      
		case 3:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		;
		}

	}while(selec!=3);
	return 0;
  
}

case 6:
		printf("CU a Mixquic \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Nocturno \n2)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo %d, globalPrecio_2\n");
			printf("Horarios \n");
			printf("1)%s \n", globalNocturno[0]);
			break;
      
		case 2:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		
		;
		}

	}while(selec!=2);
	return 0;
  
}

case 7:
		printf("CU A Chalco \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Nocturno \n2)Terminar\n");		
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo %d, globalPrecio_3\n");
			printf("Horarios \n");
			printf("1)%s \n2)%s \n", globalNocturno[3], globalNocturno[10]);
			break;

		case 2:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		;
		}

	}while(selec!=2);
	return 0;
  
}

case 8:
		printf("CU a San Pablo \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n1)Nocturno \n2)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo %d, globalPrecio_2\n");
			printf("Horarios \n");
			printf("1)%s \n", globalNocturno[9]);
			break;;

		case 2:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		
		;
		}

	}while(selec!=2);
	return 0;
  
}


case 9:
		printf("CU a San Bartolo \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n 1)Nocturno \n2)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo  \n");
			printf("Horarios \n");
			printf("1)%s \n", globalNocturno[10]);
			break;
      
		case 2:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		
		;
		}

	}while(selec!=2);
	return 0;
  
}

case 10:
		printf("CU a San Mateo \n");
		system("cls");
		{
	do
	{
		printf("�Qu� horario desea saber?:\n 1)Nocturno \n2)Terminar\n");
		scanf("%i",&selec);
		system("cls");
		switch(selec)
		{
		case 1:
			printf("Costo %d,globalPrecio_4\n");
			printf("Horarios \n");
			printf("1)%s \n", globalNocturno[10]);
			break;
      
		case 2:
			printf("Gracias Por Usar Este Programa 7u7 \n");
			break;
		
		;
		}

	}while(selec!=2);
	return 0;
  
}
		break;

		default:
		printf("Opcion es erronea \n ");
		break;
		}
	}while(opcion !=10);
	
	return 0;
}
