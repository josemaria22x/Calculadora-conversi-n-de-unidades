/*
Proyecto final Física

Diseño y creación de una calculadora para física,
deberá efectuar cálculos, como mínimo para:

Conversión de unidades
Movimiento en dos dimensiones (cinemática)
Componentes vectoriales
Las leyes de newton (fuerza, fricción, aceleración, etc.)
*/
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265

using namespace std;

int opcion;
void gotoxy();
void menu();
void conversiones();
void movimiento();
void componentes_vectoriales();
void leyes_de_newton_();
void direccion(int posY); 
void img1(int h, int hmax);
void img2(int hmax);
void img3(int hmax);
void img4(int h, int hmax);
void img5(int hmax);
void img6(int hmax);
void calculo();
void calculo2();
void segunda_ley_de_newton();
void friccion();


int main()
{
	menu();
	system("pause>NULL");
	return 0;
}

void gotoxy(int x, int y)
{
	HANDLE hCon;//identificador
	hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon,dwPos);
}

void menu()
{
	system("cls");
	cout<<"***CALCULADORA PARA F"; printf("%c",214); cout<<"SICA***\n\n";
	cout<<"(1)\tConversi"; printf("%c",162); cout<<"n de unidades\n";
	cout<<"(2)\tMovimiento en dos dimensiones\n";
	cout<<"(3)\tComponentes vectoriales\n";
	cout<<"(4)\tLas leyes de newton\n";
	cout<<"(5)\tSalir\n";
	cout<<"\nIngrese opcion: ";
	cin>>opcion;

	switch(opcion)
	{
		case 1: conversiones(); break;
		case 2: movimiento(); break;
		case 3: componentes_vectoriales(); break;
		case 4: leyes_de_newton_(); break;
		case 5:
			system("cls");
			cout<<"Gracias por usar el programa\n\n \tPROGRAMADORES: BERNABE, MARTIN, NATHAN, JOSE";
			exit(1);
			
			break;
		default:
			system("cls");
			cout<<"Opcion invalida\n";
			getch();
			menu();
			break;
	}
}

void conversiones()
{
	system("cls");
	float entrada, salida;
	cout<<"CONVERSI"; printf("%c",224); cout<<"N DE UNIDADES\n\n";
	cout<<"(1)\tKil"; printf("%c",162); cout<<"metros a Millas\n";
	cout<<"(2)\tMillas a Kil"; printf("%c",162); cout<<"metros\n";
	cout<<"(3)\tCent"; printf("%c",161); cout<<"grados a Fahrenheit\n";
	cout<<"(4)\tFahrenheit a cent"; printf("%c",161); cout<<"grados\n";
	cout<<"(5)\tKilogramos a Libras\n";
	cout<<"(6)\tLibras a Kilogramos\n";
	cout<<"(7)\tKilogramos a Piedras\n";
	cout<<"(8)\tPiedras a Kilogramos\n";
	cout<<"(9)\tMetros a Pies\n";
	cout<<"(10)\tPies a Metros\n";
	cout<<"(11)\tPulgadas a Cent"; printf("%c",161); cout<<"metros\n";
	cout<<"(12)\tCent"; printf("%c",161); cout<<"metros a Pulgadas\n";
	cout<<"(13)\tMil"; printf("%c",161); cout<<"metros a Pulgadas\n";
	cout<<"(14)\tPulgadas a Mil"; printf("%c",161); cout<<"metros\n";
	cout<<"(15)\tPulgadas a Pies\n";
	cout<<"(16)\tPies a Pulgadas\n";
	cout<<"(17)\tmillas por hora a kil"; printf("%c",162); cout<<"metros por hora\n";
	cout<<"(18)\tkil"; printf("%c",162); cout<<"metros por hora a millas por hora\n";
	cout<<"(19)\tkil"; printf("%c",162); cout<<"metros por hora a Metros por segundo\n";
	cout<<"(20)\tMetros por segundo a kil"; printf("%c",162); cout<<"metros por hora\n";
	cout<<"(21)\tREGRESAR A MEN"; printf("%c",233); cout<<"\n";
	cout<<"\nIngrese opcion: ";
	cin>>opcion;

	switch (opcion)
	{
		case 1:{
			system("cls"); cout<<"KIL"; printf("%c",224); cout<<"METROS A MILLAS\n";
			cout<<"Digite los Kil"; printf("%c",162); cout<<"metros: "; cin>>entrada;
			salida = entrada / 1.609344;
			cout<<"Son: "<<salida<<" Millas"<<endl;
			getch(); conversiones();
			break;
		}
		case 2:{
			system("cls"); cout<<"MILLAS A KIL"; printf("%c",224); cout<<"METROS\n";
			cout<<"Digite las Millas: "; cin>>entrada;
			salida = entrada * 1.609344;
			cout<<"Son: "<<salida<<" Kil"; printf("%c",162); cout<<"metros"<<endl;
			getch(); conversiones();
			break;
		}
		case 3:{
			system("cls"); cout<<"CENT"; printf("%c",214); cout<<"GRADOS A FAHRENHEIT\n";
			cout<<"Digite los grados Cent"; printf("%c",161); cout<<"grados: "; cin>>entrada;
			salida = (entrada*1.8)+32;
			cout<<"Son: "<<salida<<" grados Fahrenheit";
			getch(); conversiones();
			break;
		}
		case 4:{
			system("cls"); cout<<"FAHRENHEIT A CENT"; printf("%c",214); cout<<"GRADOS\n";
			cout<<"Digite los grados Fahrenheit: "; cin>>entrada;
			salida = (entrada - 32)/1.8;
			cout<<"Son: "<<salida<<" grados Cent"; printf("%c",161); cout<<"grados"<<endl;
			getch(); conversiones();
			break;
		}
		case 5:{
			system("cls"); cout<<"KILOGRAMOS A LIBRAS\n";
			cout<<"Digite los Kilogramos: "; cin>>entrada;
			salida = entrada * 2.204623;
			cout<<"Son: "<<salida<<" libras"<<endl;
			getch(); conversiones();
			break;
		}
		case 6:{
			system("cls"); cout<<"LIBRAS A KILOGRAMOS\n";
			cout<<"Digite las libras: "; cin>>entrada;
			salida = entrada / 2.204623;
			cout<<"Son: "<<salida<<" Kilogramos"<<endl;
			getch(); conversiones();
			break;
		}
		case 7:{
			system("cls"); cout<<"KILOGRAMOS A PIEDRAS\n";
			cout<<"Digite los Kilogramos: "; cin>>entrada;
			salida = entrada / 6.350293;
			cout<<"Son: "<<salida<<" ST"<<endl;
			getch(); conversiones();
			break;
		}
		case 8:{
			system("cls"); cout<<"PIEDRAS A KILOGRAMOS\n";
			cout<<"Digite las ST: "; cin>>entrada;
			salida = entrada * 6.350293;
			cout<<"Son: "<<salida<<" Kilogramos"<<endl;
			getch(); conversiones();
			break;
		}
		case 9:{
			system("cls"); cout<<"METROS A PIES\n";
			cout<<"Digite los metros: "; cin>>entrada;
			salida = entrada * 3.28084;
			cout<<"Son: "<<salida<<" Pies"<<endl;
			getch(); conversiones();
			break;
		}
		case 10:{
			system("cls"); cout<<"PIES A METROS\n";
			cout<<"Digite los Pies: "; cin>>entrada;
			salida = entrada / 3.28084;
			cout<<"Son: "<<salida<<" Metros"<<endl;
			getch(); conversiones();
			break;
		}
		case 11:{
			system("cls"); cout<<"PULGADAS A CENT"; printf("%c",214); cout<<"METROS\n";
			cout<<"Digite las Pulgadas: "; cin>>entrada;
			salida = entrada * 2.54;
			cout<<"Son: "<<salida<<" Cent"; printf("%c",161); cout<<"metros"<<endl;
			getch(); conversiones();
			break;
		}
		case 12:{
			system("cls"); cout<<"CENT"; printf("%c",214); cout<<"METROS A PULGADAS\n";
			cout<<"Digite los Cent"; printf("%c",161); cout<<"metros: "; cin>>entrada;
			salida = entrada / 2.54;
			cout<<"Son: "<<salida<<" Pulgadas"<<endl;
			getch(); conversiones();
			break;
		}
		case 13:{
			system("cls"); cout<<"MIL"; printf("%c",214); cout<<"METROS A PULGADAS\n";
			cout<<"Digite los Mil"; printf("%c",161); cout<<"metros: "; cin>>entrada;
			salida = entrada / 25.4;
			cout<<"Son: "<<salida<<" Pulgadas"<<endl;
			getch(); conversiones();
			break;
		}
		case 14:{
			system("cls"); cout<<"PULGADAS A MIL"; printf("%c",214); cout<<"METROS\n";
			cout<<"Digite las Pulgadas: "; cin>>entrada;
			salida = entrada * 25.4;
			cout<<"Son: "<<salida<<" Mil"; printf("%c",161); cout<<"metros"<<endl;
			getch(); conversiones();
			break;
		}
		case 15:{
			system("cls"); cout<<"PULGADAS A PIES\n";
			cout<<"Digite las Pulgadas: "; cin>>entrada;
			salida = entrada / 12;
			cout<<"Son: "<<salida<<" Pies"<<endl;
			getch(); conversiones();
			break;
		}
		case 16:{
			system("cls"); cout<<"PIES A PULGADAS\n";
			cout<<"Digite los Pies: "; cin>>entrada;
			salida = entrada * 12;
			cout<<"Son: "<<salida<<" Pulgadas"<<endl;
			getch(); conversiones();
			break;
		}
		case 17:{
			system("cls"); cout<<"MILLAS POR HORA A KIL"; printf("%c",224); cout<<"METROS POR HORA\n";
			cout<<"Digite las Millas por hora: "; cin>>entrada;
			salida = entrada * 1.609344;
			cout<<"Son: "<<salida<<" Kil"; printf("%c",162); cout<<"metros por hora"<<endl;
			getch(); conversiones();
			break;
		}
		case 18:{
			system("cls"); cout<<"KIl"; printf("%c",224); cout<<"METROS POR HORA A MILLAS POR HORA\n";
			cout<<"Digite los Kil"; printf("%c",162); cout<<"metros por hora: "; cin>>entrada;
			salida = entrada / 1.609344;
			cout<<"Son: "<<salida<<" Millas por hora"<<endl;
			getch(); conversiones();
			break;
		}
		case 19:{
			system("cls"); cout<<"KIL"; printf("%c",224); cout<<"METROS POR HORA A METROS POR SEGUNDO\n";
			cout<<"Digite los Kil"; printf("%c",162); cout<<"metros por hora: "; cin>>entrada;
			salida = (entrada*1000)/3600;
			cout<<"Son: "<<salida<<" metros por segundo"<<endl;
			getch(); conversiones();
			break;
		}
		case 20:{
			system("cls"); cout<<"METROS POR SEGUNDO A KIL"; printf("%c",224); cout<<"METROS POR HORA\n";
			cout<<"Digite los Metros por segundo: "; cin>>entrada;
			salida = (entrada/1000)*3600;
			cout<<"Son: "<<salida<<" Kil"; printf("%c",162); cout<<"metros por hora"<<endl;
			getch(); conversiones();
			break;
		}
		case 21:{
			system("cls"); menu();
			break;
		}
		default:{
			system("cls"); cout<<"Opcion invalida\n"; getch(); conversiones();
			break;
		}
	}
}

void movimiento()
{
	system("cls");
	//Movimiento en dos dimensiones (cinemática)
	cout<<"MOVIMIENTO EN DOS DIMENSIONES\n\n";
	
	cout<<"(1)\tTiro vertical y/o caida libre\n";
	cout<<"(2)\tTiro parabolico\n";
	cout<<"(3)\tREGRESAR A MEN"; printf("%c",233); cout<<"\n";
	cout<<"\nIngrese opcion: ";
	cin>>opcion;
	
	switch(opcion)
	{
		case 1:{
			calculo();
			getch(); movimiento();
			break;
		}
		case 2:{
			calculo2();
			getch(); movimiento();
			break;
		}
		case 3:{
			system("cls"); menu();
			break;
		}
		default:{
			system("cls"); cout<<"Opcion invalida\n"; getch(); movimiento();
			break;
		}
	}	
}

void componentes_vectoriales()
{
	/*
	Mediante el ingreso de n vectores, en los cuales solo se necesitara, la dirección y magnitud de cada vector. 
	Se tendrá que hallar las  componentes en X y Y por cada vector y al final las componentes resultantes
	
	NOTA:
	las direcciones tendrán un formato:
	
	N 35 E = 1		+X+Y
	E 35 N = 2
	
	N 35 O = 3		-X+Y
	O 35 N = 4
	
	O 35 S = 5		-X-Y
	S 35 O = 6
	
	S 35 E = 7		+X-Y
	E 35 S = 8
		
	SI ES POSIBLE TRASAR CADA VECTOR
	*/
	system("cls");
	cout<<"COMPONENTES VECTORIALES\n\n";
	
	float x, y, X_resultante = 0, Y_resultante = 0, Vector_R;
	int matriz[10][5], n=0, i=0;
	int posY = 7;
	//LIMPIAMOS LA MATRIZ
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<5; j++)
		{
			matriz[i][j] = 0;
		}
	}

	cout<<"Ingrese la cantidad de vectores: "; cin>>n;
	cout<<"______________________________________"<<endl;
	
	for(int i=0; i<n; i++)
	{
		gotoxy(0,posY-3); cout<<"\nDigite la magnitud del vector "<<i+1<<": "; cin>>matriz[i][0];
		cout<<"Digite los grados: "; cin>>matriz[i][1];
		
		if(matriz[i][1] == 0 || matriz[i][1] == 90 || matriz[i][1] == 180 || matriz[i][1] == 270)
		{
			posY = posY + 6;
			switch(matriz[i][1])
			{
				case 90:  matriz[i][2] = 1; break;
				case 270:  matriz[i][2] = 2; break;
				case 0:  matriz[i][2] = 3; break;
				case 180:  matriz[i][2] = 4; break;
			}	
			switch(matriz[i][2])
			{
				case 1: matriz[i][4] = matriz[i][0]; break;		//NORTE
				case 2: matriz[i][4] = matriz[i][0] * -1; break;		//SUR
				case 3: matriz[i][3] = matriz[i][0]; break;		//ESTE
				case 4: matriz[i][3] = matriz[i][0] * -1; break;		//OESTE
			}
		}
		else
		{
			direccion(posY+1);
			gotoxy(0,posY);cout<<"DIRECCI"; printf("%c",224); cout<<"N\n";
			cout<<"(1)\tN "<<matriz[i][1]<<" E "<<endl;
			cout<<"(2)\tE "<<matriz[i][1]<<" N "<<endl;
			cout<<"(3)\tN "<<matriz[i][1]<<" O "<<endl;
			cout<<"(4)\tO "<<matriz[i][1]<<" N "<<endl;
			cout<<"(5)\tO "<<matriz[i][1]<<" S "<<endl;
			cout<<"(6)\tS "<<matriz[i][1]<<" O "<<endl;
			cout<<"(7)\tS "<<matriz[i][1]<<" E "<<endl;
			cout<<"(8)\tE "<<matriz[i][1]<<" S "<<endl;
			
			cout<<"\nElija la direcci"; printf("%c",162); cout<<"n: ";
			cin>>matriz[i][2];
			
			//encontrar los valores para x y y
			x = matriz[i][0]*(cos(matriz[i][1]*PI/180));
			y = matriz[i][0]*(sin(matriz[i][1]*PI/180));
			switch(matriz[i][2])
			{
				case 1:{
					matriz[i][3] = y;
					matriz[i][4] = x;
					break;
				}
				case 2:{
					matriz[i][3] = x;
					matriz[i][4] = y;
					break;
				}
				case 3:{
					matriz[i][3] = y;
					matriz[i][4] = x;
					matriz[i][3] = matriz[i][3] * -1;
					break;
				}
				case 4:{
					matriz[i][3] = x;
					matriz[i][4] = y;
					matriz[i][3] = matriz[i][3] * -1;
					break;
				}
				case 5:{
					matriz[i][3] = x;
					matriz[i][4] = y;
					matriz[i][3] = matriz[i][3] * -1;
					matriz[i][4] = matriz[i][4] * -1;
					break;
				}
				case 6:{
					matriz[i][3] = y;
					matriz[i][4] = x;
					matriz[i][3] = matriz[i][3] * -1;
					matriz[i][4] = matriz[i][4] * -1;
					break;
				}
				case 7:{
					matriz[i][3] = y;
					matriz[i][4] = x;
					matriz[i][4] = matriz[i][4] * -1;
					break;
				}
				case 8:{
					matriz[i][3] = x;
					matriz[i][4] = y;
					matriz[i][4] = matriz[i][4] * -1;
					break;
				}
			}
			posY = posY + 17;
		}
		cout<<"Componente en X = "<<matriz[i][3]<<endl;
		cout<<"Componente en Y = "<<matriz[i][4]<<endl;
		cout<<"______________________________________"<<endl;
	}

	for(int i=0; i<n; i++)
	{
		X_resultante = X_resultante + matriz[i][3];
		Y_resultante = Y_resultante + matriz[i][4];
	}
	Vector_R = sqrt((X_resultante*X_resultante)+(Y_resultante*Y_resultante));
	cout<<"\nComponente RESULTANTE en X = "<<X_resultante<<endl;
	cout<<"Componente RESULTANTE en Y = "<<Y_resultante<<endl;
	cout<<"VECTOR RESULTANTE = "<<Vector_R<<endl;

	getch();
	menu();
}

void direccion(int posY)
{
	gotoxy(50,posY); printf("N");
	gotoxy(50,posY+1); printf("%c",179);
	gotoxy(50,posY+2); printf("%c",179);
	gotoxy(50,posY+3); printf("%c",197);
	gotoxy(50,posY+4); printf("%c",179);	
	gotoxy(50,posY+5); printf("%c",179);
	gotoxy(50,posY+6); printf("S");
	
	gotoxy(45,posY+3); printf("O");
	gotoxy(47,posY+3); printf("%c",196);
	gotoxy(48,posY+3); printf("%c",196);
	gotoxy(49,posY+3); printf("%c",196);
	gotoxy(51,posY+3); printf("%c",196);
	gotoxy(52,posY+3); printf("%c",196);
	gotoxy(53,posY+3); printf("%c",196);
	gotoxy(55,posY+3);; printf("E");
}


void calculo()
{
	float y,g,v_inicial,time_hmax=0,hmax = 0,time_fin = 0,aceleracion,v_piso;
	system("cls");
	cout<<"****RESOLUCION DE TIRO VERTICAL MEDIANTE DERIVADAS****"<<endl;
	cout<<"Digite la altura en Y: "; cin>>y;
	cout<<"Digite la gravedad: "; cin>>g;
	cout<<"Digite la velocidad inicial: "; cin>>v_inicial;
	
	system("cls");

	//***********************************CALCULO************************************
	aceleracion = -g/2;
	time_hmax = v_inicial/g;	//Cuando alcanza la altura máxima
	hmax = (-((g/2)*time_hmax*time_hmax)+(v_inicial*time_hmax)+(y));	//Cuál es la altura máxima
	time_fin = (-v_inicial-sqrt((v_inicial*v_inicial)-(4*aceleracion*y)))/(2*aceleracion);	//Cuando llega al piso
	v_piso = -(g*time_fin)+v_inicial;	//Con que velocidad llega al piso
	
	if(y==0)
	{
		img2(hmax);
	}
	else if(v_inicial==0)
	{
		img3(hmax);
	}
	else
	{
		img1(y,hmax);
	}
	
	cout<<"\n\n\nAltura en Y: "<<y<<" mt"<<endl;
	cout<<"Gravedad: "<<g<<" mt/sg"; printf("%c",253); cout<<endl;
	cout<<"Velocidad inicial: "<<v_inicial<<" mt/sg"<<endl;
	
	cout<<"\nY\t= "<<aceleracion<<"t"; printf("%c",253); cout<<" + "<<v_inicial<<"t + "<<y<<endl;
	cout<<"Y'\t= -"<<g<<"t + "<<v_inicial<<endl;//Velodicidad
	cout<<"Y''\t= -"<<g<<endl;//Aceleración

	//Lineas horizontales
	for(int x=45; x<=105; x++)
	{
		gotoxy(x,0); printf("%c",205);
		gotoxy(x,6); printf("%c",205);
		gotoxy(x,11); printf("%c",205);
		gotoxy(x,16); printf("%c",205);
		gotoxy(x,21); printf("%c",205);
		gotoxy(x,24); printf("%c",205);
	}
	//Lineas verticales
	for(int y=1; y<=5; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=7; y<=10; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=12; y<=15; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=17; y<=20; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=22; y<=23; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	//esquinas
	gotoxy(44,0); printf("%c",201); gotoxy(106,0); printf("%c",187);
	gotoxy(44,6); printf("%c",204); gotoxy(106,6); printf("%c",185);
	gotoxy(44,11); printf("%c",204); gotoxy(106,11); printf("%c",185);
	gotoxy(44,16); printf("%c",204); gotoxy(106,16); printf("%c",185);
	gotoxy(44,21); printf("%c",204); gotoxy(106,21); printf("%c",185);
	gotoxy(44,24); printf("%c",200); gotoxy(106,24); printf("%c",188);
	
	//Cuando alcanza la altura máxima
	gotoxy(45,1); cout<<"A.\tCuando alcanza la altura maxima: ";
	gotoxy(45,2); cout<<"-"<<g<<"t + "<<v_inicial<<" = 0";
	gotoxy(45,3); cout<<v_inicial<<" = "<<g<<"t";
	gotoxy(45,4); cout<<"t = "<<v_inicial<<"/"<<g;
	gotoxy(45,5); cout<<"t = "<<time_hmax<<" sg";
	//Cuál es la altura máxima
	gotoxy(45,7); cout<<"B.\tCual es la altura maxima:";
	gotoxy(45,8); cout<<"Y = "<<aceleracion<<"t"; printf("%c",253); cout<<" + "<<v_inicial<<"t + "<<y;
	gotoxy(45,9); cout<<"Y = "<<aceleracion<<"("<<time_hmax<<")"; printf("%c",253); cout<<" + "<<v_inicial<<"("<<time_hmax<<") + "<<y;
	gotoxy(45,10); cout<<"Y = "<<hmax<<" mt";
	//Cuando llega al piso
	gotoxy(45,12); cout<<"C.\tCuando llega al piso:";
	gotoxy(45,13); cout<<"0\t= "<<aceleracion<<"t"; printf("%c",253); cout<<" + "<<v_inicial<<"t + "<<y;
	gotoxy(45,14); cout<<"T = ( -"<<v_inicial; printf(" %c",241); cout<<" ("<<v_inicial<<""; printf("%c",253); cout<<" - 4 x "<<aceleracion<<" x "<<y<<")^"; printf("%c) / ",171); cout<<"("<<2<<" x "<<aceleracion<<")";
	gotoxy(45,15); cout<<"T = "<<time_fin<<" sg";
	//Con que velocidad llega al piso
	gotoxy(45,17); cout<<"D.\tCon que velocidad llega al piso:"<<endl;
	gotoxy(45,18); cout<<"Y' = -"<<g<<"t + "<<v_inicial<<endl;
	gotoxy(45,19); cout<<"Y' = -"<<g<<"("<<time_fin<<") + "<<v_inicial<<endl;
	gotoxy(45,20); cout<<"Y' = "<<v_piso<<" mt/sg";
	//Cuál es la aceleración
	gotoxy(45,22); cout<<"E.\tCual es la aceleracion:"<<endl;
	gotoxy(45,23); cout<<"Y''= -"<<g<<" mt/sg"; printf("%c",253); cout<<"";//Aceleración
}

void calculo2()
{
	system("cls");
	float y,g,v_inicial,time_hmax=0,hmax = 0,time_fin = 0,aceleracion,v_piso,distancia;
	int grados;

	cout<<"****TIRO PARABOLICO****"<<endl;
	cout<<"Digite la altura en Y: "; cin>>y;
	cout<<"Digite la gravedad: "; cin>>g;
	cout<<"Digite la velocidad inicial: "; cin>>v_inicial;
	cout<<"Digite los grados del angulo: "; cin>>grados;
	
	//encontrar los valores para las componentes X y Y
	float v0x = v_inicial*(cos(grados*PI/180));
	float v0y = v_inicial*(sin(grados*PI/180));
	
	system("cls");
	gotoxy(0,12); cout<<"\n\n\nAltura en Y: "<<y<<" mt"<<endl;
	cout<<"Gravedad: "<<g<<" mt/sg"; printf("%c",253); cout<<endl;
	cout<<"Velocidad inicial: "<<v_inicial<<" mt/sg"<<endl;
	cout<<"V0X: "<<v0x<<" mt/sg"<<endl;
	cout<<"V0Y: "<<v0y<<" mt/sg"<<endl;
	
	cout<<"\nY\t= "<<aceleracion<<"t"; printf("%c",253); cout<<" + "<<v_inicial<<"t + "<<y<<endl;
	cout<<"Y'\t= -"<<g<<"t + "<<v_inicial<<endl;//Velodicidad
	cout<<"Y''\t= -"<<g<<endl;//Aceleración
	
	//***********************************CALCULO************************************
	v_inicial = v0y;
	aceleracion = -g/2;
	time_hmax = v_inicial/g;	//Cuando alcanza la altura máxima
	hmax = (-((g/2)*time_hmax*time_hmax)+(v_inicial*time_hmax)+(y));	//Cuál es la altura máxima
	time_fin = (-v_inicial-sqrt((v_inicial*v_inicial)-(4*aceleracion*y)))/(2*aceleracion);	//Cuando llega al piso
	v_piso = sqrt(((-(g*time_fin)+v0y)*(-(g*time_fin)+v0y))+(v0x*v0x));	//Con que velocidad llega al piso
	distancia = v0x*time_fin;	//Distancia
	
	if(y==0)
	{
		img5(hmax);
	}
	else if(v_inicial==0)
	{
		img6(hmax);
	}
	else
	{
		img4(y,hmax);
	}

	//Lineas horizontales
	for(int x=45; x<=105; x++)
	{
		gotoxy(x,0); printf("%c",205);
		gotoxy(x,6); printf("%c",205);
		gotoxy(x,11); printf("%c",205);
		gotoxy(x,16); printf("%c",205);
		gotoxy(x,20); printf("%c",205);
		gotoxy(x,24); printf("%c",205);
	}
	//Lineas verticales
	for(int y=1; y<=5; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=7; y<=10; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=12; y<=15; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=17; y<=19; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	for(int y=21; y<=23; y++)
	{
		gotoxy(44,y); printf("%c",186);
		gotoxy(106,y); printf("%c",186);
	}
	//esquinas
	gotoxy(44,0); printf("%c",201); gotoxy(106,0); printf("%c",187);
	gotoxy(44,6); printf("%c",204); gotoxy(106,6); printf("%c",185);
	gotoxy(44,11); printf("%c",204); gotoxy(106,11); printf("%c",185);
	gotoxy(44,16); printf("%c",204); gotoxy(106,16); printf("%c",185);
	gotoxy(44,20); printf("%c",204); gotoxy(106,20); printf("%c",185);
	gotoxy(44,24); printf("%c",200); gotoxy(106,24); printf("%c",188);
	
	//Cuando alcanza la altura máxima
	gotoxy(45,1); cout<<"A.\tCuando alcanza la altura maxima: ";
	gotoxy(45,2); cout<<"-"<<g<<"t + "<<v_inicial<<" = 0";
	gotoxy(45,3); cout<<v_inicial<<" = "<<g<<"t";
	gotoxy(45,4); cout<<"t = "<<v_inicial<<"/"<<g;
	gotoxy(45,5); cout<<"t = "<<time_hmax<<" sg";
	//Cuál es la altura máxima
	gotoxy(45,7); cout<<"B.\tCual es la altura maxima:";
	gotoxy(45,8); cout<<"Y = "<<aceleracion<<"t"; printf("%c",253); cout<<" + "<<v_inicial<<"t + "<<y;
	gotoxy(45,9); cout<<"Y = "<<aceleracion<<"("<<time_hmax<<")"; printf("%c",253); cout<<" + "<<v_inicial<<"("<<time_hmax<<") + "<<y;
	gotoxy(45,10); cout<<"Y = "<<hmax<<" mt";
	//Cuando llega al piso
	gotoxy(45,12); cout<<"C.\tCuando llega al piso:";
	gotoxy(45,13); cout<<"0\t= "<<aceleracion<<"t"; printf("%c",253); cout<<" + "<<v_inicial<<"t + "<<y;
	gotoxy(45,14); cout<<"T = ( -"<<v_inicial; printf(" %c",241); cout<<" ("<<v_inicial<<""; printf("%c",253); cout<<" - 4 x "<<aceleracion<<" x "<<y<<")^"; printf("%c) / ",171); cout<<"("<<2<<" x "<<aceleracion<<")";
	gotoxy(45,15); cout<<"T = "<<time_fin<<" sg";
	//Con que velocidad llega al piso
	gotoxy(45,17); cout<<"D.\tCon que velocidad llega al piso:"<<endl;
	gotoxy(45,18); cout<<"("<<-g*time_fin+v0y; printf("%c + ",253); cout<<v0x; printf("%c",253); cout<<")^"; printf("%c",171);
	gotoxy(45,19); cout<<"VF = "<<v_piso<<" mt/sg";
	//Cuál es la distancia
	gotoxy(45,21); cout<<"E.\tCual es la distancia en X:"<<endl;
	gotoxy(45,22); cout<<"X = ("<<v0x<<") * ("<<time_fin<<")";
	gotoxy(45,23); cout<<"X = "<<distancia<<" mt";
}

void img1(int h, int hmax)
{
	int altura = h, altura_max = hmax;
	//Lineas horizontales
	for(int x=6; x<=15; x++)
	{
		gotoxy(x,5); printf("%c",196);
		gotoxy(x,13); printf("%c",196);
	}
	//Lineas verticales
	for(int y=6; y<=12; y++)
	{
		gotoxy(5,y); printf("%c",179);
		gotoxy(16,y); printf("%c",179);
	}
		//Altura
		for(int y=6; y<=8; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		for(int y=10; y<=12; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		//Esquinas altura
		gotoxy(2,5); printf("%c",194);
		gotoxy(0,9); cout<<altura<<" m";
		gotoxy(2,13); printf("%c",193);
		
	//Ventanas XD
	for(int i=7; i<=14; i++)
	{
		for(int j=6; j<=11; j++)
		{
			gotoxy(i,j); printf("%c",191);
		}
	}
	cout<<endl;
	//Esquinas
	gotoxy(5,5); printf("%c",218);
	gotoxy(16,5); printf("%c",191);
	gotoxy(5,13); printf("%c",192);
	gotoxy(16,13); printf("%c",217);
	//Particula
	gotoxy(17,0); cout<<"Hmax = "<<altura_max<<" mt";
	gotoxy(18,1); cout<<"*";	
	gotoxy(16,2); cout<<"*";
	gotoxy(20,2); cout<<"*";
	gotoxy(15,3); cout<<"*";
	gotoxy(21,3); cout<<"*";
	gotoxy(15,4); cout<<"*";
	for(int y=4; y<=13; y++)
	{
		gotoxy(21,y); cout<<"*";
	}
}
void img2(int hmax)
{
	float altura_max = hmax;
	gotoxy(17,0); cout<<"Hmax = "<<altura_max<<" mt";
	gotoxy(18,1); cout<<"*";	
	gotoxy(16,2); cout<<"*";
	gotoxy(20,2); cout<<"*";
	gotoxy(15,3); cout<<"*";
	gotoxy(21,3); cout<<"*";
	gotoxy(15,4); cout<<"*";
	for(int y=4; y<=12; y++)
	{
		gotoxy(21,y); cout<<"*";
		gotoxy(15,y); cout<<"*";
	}
	for(int x=11; x<=25; x++)
	{
		gotoxy(x,13); printf("%c",196);
	}
}
void img3(int hmax)
{
	int altura_max = hmax;
	//Lineas horizontales
	for(int x=6; x<=15; x++)
	{
		gotoxy(x,2); printf("%c",196);
		gotoxy(x,13); printf("%c",196);
	}
	//Lineas verticales
	for(int y=3; y<=12; y++)
	{
		gotoxy(5,y); printf("%c",179);
		gotoxy(16,y); printf("%c",179);
	}
		//Altura
		for(int y=3; y<=6; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		for(int y=8; y<=12; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		//Esquinas altura
		gotoxy(2,2); printf("%c",194);
		gotoxy(0,7); cout<<altura_max<<" m";
		gotoxy(2,13); printf("%c",193);
		
	//Ventanas XD
	for(int i=7; i<=14; i++)
	{
		for(int j=3; j<=11; j++)
		{
			gotoxy(i,j); printf("%c",191);
		}
	}
	cout<<endl;
	//Esquinas
	gotoxy(5,2); printf("%c",218);
	gotoxy(16,2); printf("%c",191);
	gotoxy(5,13); printf("%c",192);
	gotoxy(16,13); printf("%c",217);
	
	//Particula
	gotoxy(17,1); cout<<"Hmax = "<<altura_max<<" mt";
	gotoxy(18,2); cout<<"*";		
	for(int y=3; y<=13; y++)
	{
		gotoxy(19,y); cout<<"*";
	}
}

void img4(int h, int hmax)
{
	int altura = h, altura_max = hmax;
	//Lineas horizontales
	for(int x=6; x<=15; x++)
	{
		gotoxy(x,5); printf("%c",196);
		gotoxy(x,13); printf("%c",196);
	}
	//Lineas verticales
	for(int y=6; y<=12; y++)
	{
		gotoxy(5,y); printf("%c",179);
		gotoxy(16,y); printf("%c",179);
	}
		//Altura
		for(int y=6; y<=8; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		for(int y=10; y<=12; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		//Esquinas altura
		gotoxy(2,5); printf("%c",194);
		gotoxy(0,9); cout<<altura<<" m";
		gotoxy(2,13); printf("%c",193);
		
	//Ventanas XD
	for(int i=7; i<=14; i++)
	{
		for(int j=6; j<=11; j++)
		{
			gotoxy(i,j); printf("%c",191);
		}
	}
	cout<<endl;
	//Esquinas
	gotoxy(5,5); printf("%c",218);
	gotoxy(16,5); printf("%c",191);
	gotoxy(5,13); printf("%c",192);
	gotoxy(16,13); printf("%c",217);
	//Particula
	gotoxy(17,0); cout<<"Hmax = "<<altura_max<<" mt";
	gotoxy(22,1); cout<<"*";	
	gotoxy(17,2); cout<<"*";
	gotoxy(27,2); cout<<"*";
	gotoxy(15,3); cout<<"*";
	gotoxy(29,3); cout<<"*";
	gotoxy(13,4); cout<<"*";
	gotoxy(31,4); cout<<"*";
	gotoxy(33,6); cout<<"*";
	gotoxy(35,8); cout<<"*";
	gotoxy(36,10); cout<<"*";
	gotoxy(37,12); cout<<"*";
}
void img5(int hmax)
{
	float altura_max = hmax;
	gotoxy(17,0); cout<<"Hmax = "<<altura_max<<" mt";
	gotoxy(20,1); cout<<"*";	
	gotoxy(15,2); cout<<"*";
	gotoxy(25,2); cout<<"*";
	gotoxy(13,3); cout<<"*";
	gotoxy(27,3); cout<<"*";
	gotoxy(11,4); cout<<"*";
	gotoxy(29,4); cout<<"*";
	gotoxy(9,6); cout<<"*";
	gotoxy(31,6); cout<<"*";
	gotoxy(7,8); cout<<"*";
	gotoxy(33,8); cout<<"*";
	gotoxy(6,10); cout<<"*";
	gotoxy(34,10); cout<<"*";
	gotoxy(5,12); cout<<"*";
	gotoxy(35,12); cout<<"*";
	
	//Linea
	for(int x=4; x<=36; x++)
	{
		gotoxy(x,13); printf("%c",196);
	}
}
void img6(int hmax)
{
	int altura_max = hmax;
	//Lineas horizontales
	for(int x=6; x<=15; x++)
	{
		gotoxy(x,2); printf("%c",196);
		gotoxy(x,13); printf("%c",196);
	}
	//Lineas verticales
	for(int y=3; y<=12; y++)
	{
		gotoxy(5,y); printf("%c",179);
		gotoxy(16,y); printf("%c",179);
	}
		//Altura
		for(int y=3; y<=6; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		for(int y=8; y<=12; y++)
		{
			gotoxy(2,y); printf("%c",179);
		}
		//Esquinas altura
		gotoxy(2,2); printf("%c",194);
		gotoxy(0,7); cout<<altura_max<<" m";
		gotoxy(2,13); printf("%c",193);
		
	//Ventanas XD
	for(int i=7; i<=14; i++)
	{
		for(int j=3; j<=11; j++)
		{
			gotoxy(i,j); printf("%c",191);
		}
	}
	cout<<endl;
	//Esquinas
	gotoxy(5,2); printf("%c",218);
	gotoxy(16,2); printf("%c",191);
	gotoxy(5,13); printf("%c",192);
	gotoxy(16,13); printf("%c",217);
	
	//Particula
	gotoxy(17,1); cout<<"Hmax = "<<altura_max<<" mt";
	gotoxy(18,2); cout<<"*";		
	gotoxy(23,2); cout<<"*";
	gotoxy(27,3); cout<<"*";
	gotoxy(29,4); cout<<"*";
	gotoxy(31,6); cout<<"*";
	gotoxy(33,8); cout<<"*";
	gotoxy(34,10); cout<<"*";
	gotoxy(35,12); cout<<"*";	
}

void leyes_de_newton_(){
	int opcion;	
 	system("cls");	
	cout<<"LAS LEYES DE NEWTON\n\n";
	cout<<"(1)\tSegunda ley de newton del movimiento"<<endl;
	cout<<"(2)\tFriccion"<<endl;
	cout<<"(3)\tRegresar"<<endl;
	cout<<"\nIngrese opcion: ";	cin>>opcion;	
	switch(opcion){
		case 1: segunda_ley_de_newton();
			break;
		case 2: friccion();
			break;
		case 3: menu();
			break;
	}
	
}

void segunda_ley_de_newton(){
	int opc;
	system("cls");
	cout<<"SEGUNDA LEY DE NEWTON\n\n";
	cout<<"(1)\tCalcular el Peso (W=M*G): "<<endl;
	cout<<"(2)\tCalcular la Masa (M=W/G): "<<endl;
	cout<<"(3)\tDespejar para Fuerza (F=MA): "<<endl;
	cout<<"(4)\tDespejar para Aceleraci"; printf("%c",162); cout<<"n (A=F/M): "<<endl;
	cout<<"(5)\tAceleraci"; printf("%c",162); cout<<"n para dos masas en plano horizontal (A=F/(m1+m2)): "<<endl;
	cout<<"(6)\tAceleraci"; printf("%c",162); cout<<"n de una Masa con angulo (a=Fcos/m) "<<endl;
	cout<<"(7)\tfuerza del bloque en plano inclinado: "<<endl;
	cout<<"(8)\tfuerza normal del bloque plano inclinado: "<<endl;
	cout<<"(9)\tTension de una cuerda vertical (t=(m*a)+w)): "<<endl;
	cout<<"(10)\tREGRESAR"<<endl;
	cout<<"\nIngrese opcion: ";	cin>>opc;

	switch(opc){
	
		case 1: float masa,peso,grave;
		system("cls");
		cout<<"-----calcular peso:-----"<<endl;
				cout<<"ingrese la masa: ";
				cin>>masa;
				cout<<"ingrese gravedad: ";
				cin>>grave;
				peso=masa*grave;
				cout<<"el peso es: "<<peso<<" Nts";
				getch();
				segunda_ley_de_newton();
			break;
		case 2: 
			system("cls");
			cout<<"------calcular Masa------"<<endl;
			cout<<"ingrese el peso: "<<endl;
			cin>>peso;
			cout<<"ingrese la gravedad: "<<endl;
			cin>>grave;
			masa=(peso/grave);
			cout<<"el peso es: "<<masa<<" Kg "<<endl;
			getch();
			segunda_ley_de_newton();	
				break;
		case 3: system("cls");
				float aceleracion, fuerza;
			cout<<"Despejar para fuerza (F=M*A): "<<endl;
			cout<<"Ingrese la masa: "<<endl;
			cin>>masa;
			cout<<"ingrese la aceleracion: "<<endl;
			cin>>aceleracion;
			fuerza=masa*aceleracion;
			cout<<"la fuerza es: "<<fuerza<<" Nts"<<endl;
			getch();
			segunda_ley_de_newton();
				break;
		case 4: system("cls");	
			cout<<"Despejar para Aceleración (A=F/M): "<<endl;
			cout<<"ingrese la fuerza: "<<endl;
			cin>>fuerza;
			cout<<"ingrese la masa: "<<endl;
			cin>>masa;
			aceleracion=fuerza/masa;
			cout<<"la aceleracion es: "<<aceleracion<<" m/s2"<<endl;
			getch();
			segunda_ley_de_newton();
				break;
		case 5: system("cls");
					float masa1,masa2;
			cout<<"Aceleraci"; printf("%c",162); cout<<"n para dos masas en plano horizontal (A=F/(m1+m2)): "<<endl;
			cout<<"digite la fuerza: "<<endl;
			cin>>fuerza;
			cout<<"digite la masa 1: "<<endl;
			cin>>masa1;
			cout<<"digite la masa 2: "<<endl;
			cin>>masa2;
			aceleracion=fuerza/(masa1+masa2);
			cout<<"la acelaraci"; printf("%c",162); cout<<"n de ambas masas son: "<<aceleracion<<" m/s2"<<endl;
			getch();
			segunda_ley_de_newton();
				break;
		case 6: system("cls");
			float angulo;		
		cout<<"------Aceleraci"; printf("%c",162); cout<<"n de una Masa con angulo (a=Fcos/m) -------"<<endl;
		cout<<"digite la fuerza: "<<endl;
		cin>>fuerza;
		cout<<"digite el angulo: "<<endl;
		cin>>angulo;
		cout<<"digite la masa:"<<endl;
		cin>>masa;
		aceleracion= (fuerza*(cos(angulo*PI/180)))/masa;
		cout<<"la aceleraci"; printf("%c",162); cout<<"n es: "<<aceleracion<<" m/s2"<<endl;
		getch();
		segunda_ley_de_newton();
				break;
		case 7:  system("cls");
		float angulo_,f1,f2;
		cout<<"---------Fuerza de un bloque en plano inclinado:------ "<<endl;
		cout<<"digite la masa: "<<endl;
		cin>>masa;
		cout<<"digite el angulo: "<<endl;
		cin>>angulo;
		cout<<"digite la gravedad: "<<endl;
		cin>>grave;
		peso=masa*grave;
		angulo_=90-angulo;
		f1=peso*cos((angulo_)*PI/180);
		f2=cos(angulo*PI/180);
		fuerza=f1/f2;
		cout<<"la fuerza es: "<<fuerza<<" Nts"<<endl;
		getch();		
		segunda_ley_de_newton();
				break;
		case 8: system("cls");
		float normal;
		cout<<"Fuerza Normal del bloque plano inclinado: "<<endl;
		cout<<"digite la fuerza"<<endl;
		cin>>fuerza;
		cout<<"digite la masa: "<<endl;
		cin>>masa;
		cout<<"digite el angulo: "<<endl;
		cin>>angulo;
		cout<<"digite la gravedad: "<<endl;
		cin>>grave;
		peso=masa*grave;
		angulo_=90-angulo;
		normal=	(fuerza*sin(angulo*PI/180))+(peso*sin(angulo_*PI/180));	
		cout<<"la fuerza Normal ejercida por el bloque es: "<<normal<<" Nts"<<endl;
		getch();
		segunda_ley_de_newton();
					break;			
	
		case 9: system("cls");
		float tension;
		cout<<"Tension de una cuerda vertical jalando una masa: "<<endl;
		cout<<"digite la masa: "<<endl;
		cin>>masa;
		cout<<"digite la aceleracion: "<<endl;
		cin>>aceleracion;
		peso=masa*9.8;
		tension=(masa*aceleracion)+peso;
		cout<<"la tension de la cuerda es: "<<tension<<" Nts";
		getch();
		segunda_ley_de_newton();
					break;
		case 10: leyes_de_newton_();	
	}
}

void friccion(){
	system("cls");
	int opc;
	cout<<"------------FRICCION---------"<<endl;
	cout<<"(1)\tCalcular fuerza de rozamiento o friccion (fr=coeficiente*N)"<<endl;
	cout<<"(2)\tCalcular fuerza resultante"<<endl;
	cout<<"(3)\tAceleracion necesaria para mover el objeto"<<endl;
	cout<<"(4)\tFuerza de rozamiento plano inclinado"<<endl;
	cout<<"(5)\tAceleracion de una objeto aplicando una fuerza con angulo"<<endl;
	cout<<"(6)\tREGRESAR"<<endl;
	cout<<"\nIngrese opcion: ";	cin>>opc;
		float fuerza_re, normal, fuerza_roz, coeficiente_estatico;
		float fuerza, masa;
	switch(opc){
		case 1: system("cls");
		cout<<"ingrese el coeficiente de friccion: "<<endl;
		cin>>coeficiente_estatico;
		cout<<"ingrese la fuerza normal: "<<endl;
		cin>>normal;
		fuerza_roz=coeficiente_estatico*normal;
		cout<<"la fuerza de rozamiento o friccion es : "<<fuerza_roz<<" Nts"<<endl;
		getch();
		friccion();
				break;
				
		case 2: system("cls");
		cout<<"Calcular fuerza resultante\n\n";
		cout<<"ingrese la fuerza: "<<endl;
		cin>>fuerza;
		cout<<"ingrese la masa: "<<endl;
		cin>>masa;
		cout<<"ingrese el coeficiente de friccion estatico: "<<endl;
		cin>>coeficiente_estatico;
		normal=masa*9.8;
		fuerza_roz= coeficiente_estatico*normal;
		cout<<"fuerza de rozamiento: "<<fuerza_roz<<" Nts"<<endl;
		fuerza_re=fuerza-fuerza_roz;
		cout<<"la fuerza de Resultante es: "<<fuerza_re<<"Nts"<<endl;
		getch();
		friccion();
				break;
				
		case 3: system("cls");	
		float aceleracion;	
		cout<<"Aceleracion necesaria para mover el objeto\n\n";
		cout<<"ingrese la fuerza: "<<endl;
		cin>>fuerza;
		cout<<"ingrese la masa: "<<endl;
		cin>>masa;
		cout<<"ingrese el coeficiente de friccion estatico: "<<endl;
		cin>>coeficiente_estatico;
		normal=masa*9.8;
		fuerza_roz= coeficiente_estatico*normal;
		cout<<"fuerza de rozamiento: "<<fuerza_roz<<" Nts"<<endl;
		fuerza_re=fuerza-fuerza_roz;
		cout<<"la fuerza de Resultante es: "<<fuerza_re<<"Nts"<<endl;
		aceleracion=fuerza_re/masa;
		cout<<"aceleracion necesaria para mover el objeto: "<<aceleracion<<" m/s2"<<endl;			
		getch();
		friccion();
					break;

		float angulo, peso, px, py;
		case 4: system("cls");
		cout<<"Fuerza de rozamiento plano inclinado\n\n";
		cout<<"ingrese la masa: "<<endl;
		cin>>masa;
		cout<<"ingrese el coeficiente de friccion estatica: "<<endl;
		cin>>coeficiente_estatico;
		cout<<"ingrese el angulo: "<<endl;
		cin>>angulo;
		peso=masa*9.8;
		px=peso*sin(angulo*PI/180);
		py=peso*cos(angulo*PI/180);
		normal=py;
		fuerza_roz=normal*coeficiente_estatico;
		cout<<"la fuerza que ejerce hacia abajo del plano inclinado es: "<<px<<" Nts"<<endl;
		cout<<"la fuerza de friccion  o rozamiento es: "<<fuerza_roz<<" Nts "<<endl;
		if(fuerza_roz<px){
			cout<<"el objeto se desliza "<<endl;
		}else{
			cout<<"el objeto no se desliza por que la friccion es mayor que la fuerza"<<endl;
		}
		getch();
		friccion();
		break;
		
		case 5: system("cls");
		float coeficiente;
		cout<<"Aceleracion de una objeto aplicando una fuerza con angulo\n\n";
		cout<<"Ingrese la fuerza: "<<endl;
		cin>>fuerza;
		cout<<"Ingrese el angulo sobre la horizontal: "<<endl;
		cin>>angulo;
		cout<<"ingrese la masa: "<<endl;
		cin>>masa;
		cout<<"ingrese el coeficiente de friccion o rozamiento: "<<endl;
		cin>>coeficiente;
		peso=masa*9.8;
		normal=-fuerza*sin(angulo*PI/180)+peso;
		cout<<"la normal es: "<<normal<<"Nts"<<endl;
		fuerza_roz=coeficiente*normal;
		cout<<"fuerza de rozamiento: "<<fuerza_roz<<"Nts"<<endl;
		aceleracion=((fuerza*cos(angulo*PI/180))-(coeficiente*normal))/masa;
		cout<<"la aceleracion del objeto es: "<<aceleracion<<" Nts"<<endl;
		getch();
		friccion();
		break;
		case 6: system("cls");
		leyes_de_newton_();
	}	
}

