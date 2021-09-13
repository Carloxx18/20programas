#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
		int a, b,sun1,sun2,mul1,mul2,accion,resta, s=0;
		int par,i=0,j=0;
		int numero, unidades, decenas,centenas, millares;
		int x;	
		int num_mult, res_mult;	
		int mul_tabla10;
		int multi_grafi1, multi_grafi2,resu_grafi;
		float kilo;
		int num_bi;
		int digitoex[20];
   		int deci, residuo, resul_hexa, k = 0;
   		int salari=2500,reti,ops,salari_suma,total;
   		int catetoa, catetob, resu_cateto, Res_iva;
   		int num1, num2, num3, promedio ;
   		int ayu, byu,cyu;
		short binario[8];
		string palabra=" ";
		cout<<"\t\t\t\t-----------------BIENVENIDO-------------------"<<endl;
		cout<<"\t\t\t\tINGRESE EL NUMERO DE LA OPERACION QUE DESEE USAR"<<endl;
		cout<<"\t\t\t\tCreado por: Carlos Andres De Leon Andrade"<<endl<<endl;
		cout<<"1 -Suma, resta, multiplicacion y divicion."<<endl;
		cout<<"2 -Determinar si es par o impar."<<endl;
		cout<<"3 -Convertir kilometros a millas, metros a pulgadas, de libra a kilos."<<endl;
		cout<<"4 -Determinar si una palabra es palindromo."<<endl;
		cout<<"5 -Conversion de numeros arabigos a romanos."<<endl;
		cout<<"6 -Conversion de numeros enteros a romanos."<<endl;
		cout<<"7 -Conversion de numeros enteros con decimal a letras. "<<endl;
		cout<<"8 -Tabla de Multiplicar"<<endl;
		cout<<"9 -Todas las tablas de multiplicar al 10"<<endl;
		cout<<"10 -Multiplicacion de forma grafica"<<endl;
		cout<<"11 -Conversion de numeros decimales a binarios"<<endl;
		cout<<"12 -Conversion de numeros deciamles a hexadecimales"<<endl;
		cout<<"13 -Creacion de figuras geometricas"<<endl;
		cout<<"14 -Mover un punto por la pantalla"<<endl;
		cout<<"15 -Simulador de cajero automatico"<<endl;
		cout<<"16 -Calcular la hipotenusa"<<endl;
		cout<<"17 -Calcular el IVA de un producto"<<endl;
		cout<<"18 -Calcular el promedio."<<endl;
		cout<<"19 -Videojuego"<<endl;
		cout<<"20 -Determinar si un numero es perfecto o no"<<endl;
		cin>>a;
		system("cls");
		cout<<"\n";
	

		switch(a)
		{
			case 1:	
			cout<< "---------Que operacion desea realizar---------"<<endl;
			cout<<"1-Suma"<<endl;
			cout<<"2-multiplicacion"<<endl;
			cout<<"3-resta"<<endl;
			cout<<"4-divicion"<<endl;
			cin>>accion;
			system("cls");
					switch(accion){
					case 1:
					cout<<"Ingrese el primer numero"<<endl;
					cin>>sun1;
					cout<<"Ingrese el segundo numero"<<endl;
					cin>>sun2;
					cout<<"La suma de los dos numeros es: "<< sun1 + sun2<<endl<<endl;
				
					break;
					
					case 2:
					cout<<"Ingrese el primer numero"<<endl;
					cin>>mul2;
					cout<<"Ingrese el segundo numero"<<endl;
					cin>>mul1;
					cout<<"La multiplicacion de los dos numeros es: "<< mul1 * mul2 <<endl<<endl;
					
					break;

					case 3:
					cout<<"Ingrese el primer numero"<<endl;
					cin>>mul2;
					cout<<"Ingrese el segundo numero"<<endl;
					cin>>mul1;
					cout<<"La resta de los dos numeros es: "<< mul1 - mul2 <<endl<<endl;
					
					break;

					case 4:
					cout<<"Ingrese el primer numero"<<endl;
					cin>>mul2;
					cout<<"Ingrese el segundo numero"<<endl;
					cin>>mul1;
					cout<<"La divicion de los dos numeros es: "<< mul1 / mul2 <<endl<<endl;
					
					break;
					}
					break;
			case 2:
			cout<<"Ingrese su numero: "<<endl;
			cin>>par;
    		if ( par % 2 == 0 )
       		cout<<"Su numero es par"<<endl<<endl;
    		else
       		cout<<"Su numero es impar"<<endl<<endl;
       		
			break;

			case 3:
			cout<<"---------Que accion desea realizar---------"<<endl;
			cout<<"1-kilometros a millas"<<endl;
			cout<<"2-metros a pulgadas"<<endl;
			cout<<"3-libras a kilos"<<endl;
			cout<<"4-millas a kilometros"<<endl;
			cout<<"5-pulgadas a metros"<<endl;
			cout<<"6-kilos a libras"<<endl;
			cin>>accion;
			system("cls");
					switch(accion){
						case 1:
						cout<<"Ingrese los kilometros: ";
						cin>>kilo;
						cout<<"La conversion es: "<<kilo * 0.621<<endl<<endl;
						
						break;

						case 2:
						cout<<"Ingrese los metros: ";
						cin>>kilo;
						cout<<"La conversion es: "<<kilo * 0.0254<<endl<<endl;
						
						break;

						case 3:
						cout<<"Ingrese los libras: ";
						cin>>kilo;
						cout<<"La conversion es: "<<kilo * 2.20462<<endl<<endl;
						
						break;

						case 4:
						cout<<"Ingrese las millas: ";
						cin>>kilo;
						cout<<"La conversion es: "<<kilo *1.609 <<endl<<endl;
						
						break;

						case 5:
						cout<<"Ingrese las pulgadas: ";
						cin>>kilo;
						cout<<"La conversion es: "<<kilo *0.0254 <<endl<<endl;
						
						break;

						case 6:
						cout<<"Ingrese las kilos: ";
						cin>>kilo;
						cout<<"La conversion es: "<<kilo *2.204 <<endl<<endl;
						
						break;
					}
					break;
			case 4:
   		 	cout<<"Ingrese la palabra "<<endl;
   			cin >> palabra;
            if(palabra[i]==palabra[j]){
            cout<<"Es palindroma "<<endl<<endl;
            }
            else{
            cout<<"No lo es "<<endl<<endl;
            }
        	
			break;

			case 5:
			cout<< "Ingrese un numero: "<<endl;
 			cin>> numero;
			 unidades = numero % 10; numero /= 10;
			 decenas = numero % 10; numero /= 10;
			 centenas = numero % 10; numero /= 10;
			 millares = numero % 10; numero /= 10;

 			switch (millares)
			{
  			case 1: cout<<"\nEl numero romano es: "<<"M";break;
 			case 2: cout<<"\nEl numero romano es: "<<"MM"; break;
  			case 3: cout<<"\nEl numero romano es: "<<"MMM"; break;
			}
			switch(centenas){
		case 1: cout<<"El numero romano es:"<<"C";break;
		case 2: cout<<"El numero romano es: "<<"CC";break;
		case 3: cout<<"El numero romano es: "<<"CCC";break;
		case 4: cout<<"El numero romano es: "<<"CD";break;
		case 5: cout<<"El numero romano es: "<<"D";break;
		case 6: cout<<"El numero romano es: "<<"DC";break;
		case 7: cout<<"El numero romano es: "<<"DCC";break;
		case 8: cout<<"El numero romano es: "<<"DCCC";break;
		case 9: cout<<"El numero romano es: "<<"CM";break;
	
	}
		switch(decenas){
		case 1: cout<<"El numero romano es: "<<"X";break;
		case 2: cout<<"El numero romano es: "<<"XX";break;
		case 3: cout<<"El numero romano es: "<<"XXX";break;
		case 4: cout<<"El numero romano es: "<<"XL";break;
		case 5: cout<<"El numero romano es: "<<"L";break;
		case 6: cout<<"El numero romano es: "<<"LX";break;
		case 7: cout<<"El numero romano es: "<<"LXX";break;
		case 8: cout<<"El numero romano es: "<<"LXXX";break;
		case 9: cout<<"El numero romano es: "<<"XC";break;
	}
		switch(unidades){
		case 1: cout<<"El numero romano es: "<<"I";break;
		case 2: cout<<"El numero romano es: "<<"II";break;
		case 3: cout<<"El numero romano es: "<<"III";break;
		case 4: cout<<"El numero romano es: "<<"IV";break;
		case 5: cout<<"El numero romano es: "<<"V";break;
		case 6: cout<<"El numero romano es: "<<"VI";break;
		case 7: cout<<"El numero romano es: "<<"VII";break;
		case 8: cout<<"El numero romano es: "<<"VIII";break;
		case 9: cout<<"El numero romano es: "<<"IX";break;
			}
			break;

			case 6:
			cout<<"Ingrese un numero"<<endl;
   			 cin>>x;
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
			else
    		{
	        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
	       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
	       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
	       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
	       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
	       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
	       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
	       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
	       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
	       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
	        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
	        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
	       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
	       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
	       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
	       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
	       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
	       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
	        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
	        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
	        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
	       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
	       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
	       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
	       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
	       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
      
			}
			break;

			case 7:
			cout<<"No me salio"<<endl;
			break;

			case 8:
			do
			{
			cout << "Ingrese su el numero de la tabla de multiplicar: "<<"\n";
			cin >> num_mult;
			}while ((num_mult<1)|| (num_mult>10));

			for (int i = 1; i <= 10; i++)
			{
			cout<<num_mult<<" * "<< i <<" = "<<num_mult*i<<endl;
			}
			break; 

			case 9:
			for (int a = 1; a <= 10; a++)
			{
			cout<<"_____________________"<<endl;
    		for (int i = 1; i<=10; i++){
    		mul_tabla10 = a * i;
    		cout<< a<<" * "<<i<<" = "<<mul_tabla10<<endl;
    
			}
			}
			break;

			case 10:
			cout<<"Ingrese el primer numero a multiplicar."<<endl;
			cin>> multi_grafi1;
			cout<<"Ingrese el segundo numero a multiplicar."<<endl;
			cin>>multi_grafi2;
			cout<<"\n";

			resu_grafi = multi_grafi1 * multi_grafi2;

			cout<<multi_grafi1<<endl;
			cout<<multi_grafi2<<endl;
			cout<<"------------------------------"<<endl;
			cout<<resu_grafi<<endl;

			break;

			case 11:

			cout<<"Ingrese su numero a convertir"<<endl;
			cin >>num_bi;

			for (int i = 0; i < 8; i++)
			{
				binario [i] =num_bi % 2;
				num_bi /= 2; 
			}
			cout<<"El numero en binario:"<<endl;
			for (int i = 7; i >= 0; i--)
			 {
			 	cout<<binario[i];
			 } 
			 cout<<endl; 
			break;

			case 12:
			cout << "Ingrese el numero decimal a convertir: " << endl;
  			cin >> deci;

		    do
		    {
		        residuo = deci % 16;
		        resul_hexa = deci / 16;
		        digitoex[k] = residuo;
		        deci = resul_hexa;
		        k++;
		    } while (resul_hexa > 15);

		    digitoex[k] = resul_hexa;

		    cout << "El equivalente en hexadecimal es: ";

		    for (int j = i; j >= 0; j--)
		  			  {
		        if (digitoex[j] == 10)
		        {
		            cout << "A";
		        }
		        else if (digitoex[j] == 11)
		        {
		            cout << "B";
		        }
		        else if (digitoex[j] == 12)
		        {
		            cout << "C";
		        }
		        else if (digitoex[j] == 13)
		        {
		            cout << "D";
		        }
		        else if (digitoex[j] == 14)
		        {
		            cout << "E";
		        }
		        else if (digitoex[j] == 15)
		        {
		            cout << "F";
		        }
		        else
		        {
		            cout << digitoex[j];
		        }   
		    }
		    cout << endl;
			break;

			case 13:
			cout<<"no me a salido";
			break;

			case 14:
			cout<<"mover un puntero en la pantalla";
			break;

			case 15:
			cout<<"----------BIENVENIDO A BANRURARAL----------"<<endl;
			cout<<"\t\t\t\t\t\tSaldo: "<<salari<<endl;
			cout<<"1. Ingresar dinero."<<endl;
			cout<<"2. Retirar dinero."<<endl;
			cout<<"3. Adelando de salario."<<endl;
			cin>>ops;
			system("cls");
					switch(ops){
					case 1:
					cout<<"Ingrese el monto de dinero: ";
					cin>>salari_suma;
					total=salari_suma+salari;
					cout<<"El nuevo saldo de su cuenta es de: "<<total<<endl;
					cout<<"\t\t\t\t\t---------MUCHAS GRACIAS---------"<<endl;
					break;
					case 2:
					cout<<"Ingrese el monto a retirar: ";
					cin>>salari_suma;
					if (salari_suma <= salari)
					{
						total = salari - salari_suma;
						cout<<"Recoga su dinero"<<endl;
						cout<<"El saldo de su cuenta es de "<<total<<endl;
						cout<<"\t\t\t\t\t---------MUCHAS GRACIAS---------"<<endl;
					}else{
						cout<<"FONDOS INSUFICIENTES";
					}
					break;
					case 3:
					cout<<"Ingrese el monto a adelantar ";
					cin >>reti;
					cout<<"Retire el dinero del cajero"<<endl;
					cout<<"El monto a descontar de su es de: "<<reti<<endl;
					cout<<"\t\t\t\t\t---------MUCHAS GRACIAS---------"<<endl;
					break;
					}
			break;

			case 16:
			cout<<"Ingrese el cateto a"<<endl;
			cin>>catetoa;
			cout<<"Ingresar el cateto b"<<endl;
			cin>>catetob;
			resu_cateto = (catetoa * catetoa)+(catetob * catetob);
			cout<<"La hipotenusa es de: "<<resu_cateto<<endl;
			break;

			case 17:
			cout<<"--------------BIENVENIDO A LA SAT--------------"<<endl;
			cout<<"Ingrese el precio del producto: Q";
			cin>>catetob;
			resu_cateto = catetob * 100/32;
			Res_iva = catetob - resu_cateto;
			cout<<"El IVA es de: "<<resu_cateto<<endl;
			break;

			case 18:
					cout << "Ingrese el numero 1 : " ;
			cin >> num1 ;
			cout << "Ingrese el numero 2 : " ;
			cin >> num2 ;
			cout << "Ingrese el numero 3 : " ;
			cin >> num3 ;
			
			if (num1 > num2, num1 > num3) {
			cout << "El numero mayor es: " << num1 << endl << endl;
			}
			else if (num2 > num1, num2 > num3) {
			cout << "El numero mayor es: " << num2 << endl << endl;
			}
			else if (num3 > num1, num3 > num2) {
			cout << "El numero mayor es: " << num3 << endl << endl;
			}
			if (num1 < num2, num1 < num3) {
			cout << "El numero menor es: " << num1 << endl << endl;
			}
			else if (num2 < num1, num2 < num3) {
			cout << "El numero menor es: " << num2 << endl << endl;
			}
			else if (num3 < num1, num3 < num2) {
			cout << "El numero menor es: " << num3 << endl << endl;
			}	
			promedio = (num1 + num2 + num3)/3;
				printf ("El promedio es: %d", promedio);
			break;

			case 19:
				printf("\t\t\t\t\tHOLA, Bienvenido al juego de Life or Death \n\n");
	printf("Se le presentara una serie de deciciones en las cuales dependiendo de la opccion \n"
		"que escoja puede cambiar el rumbo de la historia incluso llegar a que algun personaje muera asi \n" 
		"que tenga cuidado con sus deciciones, ¡SUERTE!\n\n");
	printf("Para la toma de deiciciones, para respoder con un \"si\" es el numero 1, y para responder \"no\" es con el numero 2\n");
	printf("PRECIONE 1 PARA EMPEZAR\n");
		 scanf("%d",&cyu);
		if (cyu== 1)
		{
			system("cls");
		}

	printf("\t\t\t\t\tEPISODIO: UNA VIDA NORMAL?\n\n");
	printf("Habia una vez una dulce familia que vivia en un al sur de Florida, esta familia consistia de 5 integrantes,\n"
		"Neithan el padre, Sara la mamá y sus dulces 3 hijos Robert, Susan, William.\n Todo iba era tan feliz en su familia\n "
		"hasta que un dia Sara decicidio ver una pelicula de miedo conto a Neithan mientras que sus hijos dormia. Esa misma noche\n"
		"empezo a sonar el telefono de la casa a lo cual se le hizo muy raro a Sara que estuvieran llamando a altas horas de la noche\n"
		"asi que ella decicio....\n\n" );
	printf("¿si contestar el telefono? \n");
	printf("¿no contestar el telefono?\n");
		scanf("%d",&ayu);

		if (ayu==1)
		{
			system("cls");
	printf("\t\t\t\t\tEPISODIO: UNA VIDA NORMAL?\n\n");
	printf("\nAl contestar el telefono se dio cuenta que era una persona desconocida y ella le pregunto \"Discule con quien desea hablar\"\n"
				"a lo cual la persona desconocida contesto \"ten cuidado con tus hijos..\" Sara asustada por lo que le habia dicho, rapidamente ella\n"
				"decidio colgar la llamada y decirle a Neithan que fuera a ver a los niños, por miedo de que el desconocido llegara hacer algo a los niños.\n"
				"Neithan y Sara rapidamente subieron al segundo piso a ver sus hijos. Se dieron cuenta que Susan estaba levantada de su cama y asuatada\n"
				"a los cual Neithan le pregunta \"por que estas levantada a estas horas de la noche\" a lo cual Susan les responde\"escuche ruidos raros\n"
				"en el covertizo y habia una siluata en mi ventana vindome.\"");
		}
		else{
			system("cls");
			printf("\t\t\t\t\tEPISODIO: UNA VIDA NORMAL?\n\n");
			printf("\nSara decidio mejor no contestar el telefono ya que penso que era alguien que se habia equivocado de numero, despues de cierto tiempo\n"
				"de que sonara el telefono Neithan y Sara empezaron a esuchar ruidos raros en el covertizo asi que decidieron ver si sus hijos estan bien.\n"
				"al momento de entrar al cuarto de Susan se dieron cuenta que la venta de su cuarto estaba abierta, por lo cual Neithan le pregunto a Susan\"\n"
				"\"¿que paso por que tienes la venta abierta?\" a los cual ella respondio \"habia una siluata en la venta y abrio la venta y estoy muy asustada\"\n"
				"Neithan sustado queria ir a ver que habia en el covertizo ya que alli se esuchaban ruidos pensando que lo que abrio la ventana de Susan estuviera alli\n"
				"pero Sara le comento que seria mejor el llamar a la policia por que podia haber alguien en su casa\n");
		}
		printf("Neithan queria ver que habia en el covertizo pero Sara le dijo\"llamemos a la policia pueda ser alguien que este en nuestra casa.\" Asi que ellos\n"
			"decidieron...\n\n");
		printf("Si, entrar al covertizo y ver si hay alguien en la casa\n");
		printf("No, entrar al covertizo y llamar a la policia\n");
			scanf("%d",&ayu);
			if (ayu == 1)
			{
				system("cls");
				printf("\t\t\t\t\tEPISODIO: UNA VIDA NORMAL?\n\n");
				printf("\n Con miedo Neithan decicio entra a lo cual fue un grabe error ya que al momento de entrar al covertizo se dio cuenta que habia una silueta\n"
					"la cual estaba al fondo del covertizo, Neithan y Sara asustados buscaron objetos para defenderse ya que la silueta se le lograba apreciar que tenia\n"
					"un cuchillo en la mano. Neithan se enfrento a la silueta para ver quien o que cosa era, al momento de acercarse la silueta se le tiro encima para matarlo\n"
					"Neithan lucho con todas sus fuerzas para tratar de quitar el cuchillo que tenia la siluta que en realidad era un psicopata que los habia seguide desde\n"
					"hace semanas. Mienntras que Neithan luchaba, Sara saco a sus hijos de la casa para estara a salvo, Sara rapidamente llamo a la policia pero mientras llevan\n"
					"no sabia si ir a ayudar a Neithan o quedarse con sus hijos a cuidarlos mierntras llegaba la policia, asi que ella decicio...\n");
			}
			else
			{
				system("cls");
				printf("\t\t\t\t\tEPISODIO: UNA VIDA NORMAL?\n\n");
				printf("\nNeithan decide mejor no trar ya que puede hacer alguien peligroso en la casa, asi que mejor llamaron a la policia. Sara y Neithan fueron a buscar a los niños\n"
					"y tambien para asegurarse que estuvieran bien, pero al momento de intentar salir de casa esuchharon gritos y golpes que provenian del cobertizo, cuando se derrepente\n"
					"se esucha la puerta caer del cobertizo Neithan asustado tratando de prooteger a su familia buscar algo con el cual defenderse y tambien para proteger a su familia\n"
					"ya que venia una persna psicopata con un cuchillo en la mano, para tratar de apuñalar a Neithan, lo cual no se dejo luchando con todas su fuerzas, pero el psicopata\n"
					"le ganaba enn fuerza asi que logro apuñalar a Neithan en la pierna. Sara saco a sus hijos de la casa para estara a salvo, asuatados fuueron a buscar ayuda pero nadie\n"
					"los auxiliava y la policia tardaria unos minutos en llegar, asi que Sara no sabia si ir a ayudar a Neithan o quedarse con sus hijos a cuidarlos mierntras llegaba\n"
					"la policia, asi que ella decicio...\n" );
			}
				printf("1- ¿Ayudar a Neithan? \n");
				printf("2- ¿quedarse con los niños?\n");
				scanf("%d",&ayu);
				if (ayu==1)
				{
				system("cls");
				printf("\tMUCHAS GRACIAS POR JUGAR LA DEMO DE LIFE OR DIE\n");
				printf("\tDI DESEA JUGAR OBTENER LA VERSION COMPLETA APOYE EL CREADOR DEL JUEGO CON PUNTOS DE LA CLASE :)\n");
				printf("\tCREADO POR: Carlos Andres De Leon Andrade.\n");
				}else{
				system("cls");
				printf("\tMUCHAS GRACIAS POR JUGAR LA DEMO DE LIFE OR DIE\n");
				printf("\tDI DESEA JUGAR OBTENER LA VERSION COMPLETA APOYE EL CREADOR DEL JUEGO CON PUNTOS DE LA CLASE :)\n");
				printf("\tCREADO POR: Carlos Andres De Leon Andrade.\n");
				}
				break;

				case 20:
				printf("Ingrese su numero: \n");
				scanf("%d", &numero);

				for (int i = 1; i < numero; i++)
				{
					if (numero % i==0) s = s+i;
				}
				if (s==numero)printf("es perfecto\n");
				else printf("No es perfecto\n");
				break;
	}
	cout<<"\n";
	cout<<"--------------------------------------------"<<endl;
	cout<<"Desea hacer otra operacion?"<<endl;
			cout<<"si = 1"<<endl;
			cout<<"no= 2"<<endl;	
			cin>> b;
			if (b==1)
			{
			system("cls");
			return	main();
			}else{
				exit (-1);
			}
	
}
