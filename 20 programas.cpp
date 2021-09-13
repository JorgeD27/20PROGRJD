#include<iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iomanip>
#include<windows.h>
#include <math.h>

using namespace std;
/*code by Jorge Duarte
carnet 3590-20-11844*/
	int asa,x;
string e,f;
	int asa1,asa2;
	float hl;
	//Funciones
const float presuper = 30.50, preregular = 35.50, prediesel = 40.50, comprasu=25.50, comprare=30.5, compradi=35.5; 
int regs=0, regr=0, regd=0, totsup=0, totreg=0, totdie=0;
float  tots, totr, totd;
//Estructuras
struct Gasolinera
	{
	float gsuper, gregular, gdiesel, ventatotal, comprasuper, compraregular, compradiesel,compratotal;
	}Cliente[1000000];
	
	void ventas()
	{
    int tipo;
    float total;
    system("cls");
    printf("Venta de Gasolina\n\n");
    printf("1 - Super\n");
    printf("2 - Regular\n");
    printf("3 - Diesel\n\n");
    printf("Ingrese el Tipo de Gasolina: ");
    scanf("%d", &tipo);
    switch(tipo)
    	{
            case 1:    
            printf("\nIngrese Numero de Galones: ");
            scanf("%f", &Cliente[regs].gsuper);
            Cliente[regs].ventatotal = Cliente[regs].gsuper*presuper;
            printf("\nPrecio por Galon Super: Q %.2f\n", presuper);
            printf("\nPrecio Total: Q %.2f", Cliente[regs].ventatotal);
            regs++;
            break;
            case 2: 
            printf("\nIngrese Numero de Galones: ");
            scanf("%f", &Cliente[regr].gregular);
            Cliente[regr].ventatotal = Cliente[regr].gregular*preregular;
            printf("\nPrecio por Galon Regular: Q %.2f\n", preregular);
            printf("\nPrecio Total: Q %.2f", Cliente[regr].ventatotal);
            regr++;
            break;
            case 3: 
            printf("\nIngrese Numero de Galones: ");
            scanf("%f", &Cliente[regd].gdiesel);
            Cliente[regd].ventatotal = Cliente[regd].gdiesel*prediesel;
			printf("\nPrecio por Galon Diesel: Q %.2f\n", prediesel);
			printf("\nPrecio Total: Q %.2f", Cliente[regd].ventatotal);
            regd++;
            break;
    	}
    getch();
	}
//Registro de Compras
void compras(void)
	{
    int tipo;
    system("cls");
    printf("Compra de Gasolina\n\n");
    printf("1 - Super\n");
    printf("2 - Regular\n");
    printf("3 - Diesel\n\n");
    printf("Ingrese el Tipo de Gasolina: ");
    scanf("%d", &tipo);
    switch(tipo)
    	{
		case 1:    
        printf("\nIngrese Numero de Galones de Super que se Compraron: ");
        scanf("%f", &Cliente[totsup].comprasuper);
        Cliente[totsup].compratotal = Cliente[totsup].comprasuper*comprasu;
        printf("\nPrecio por Galon Super: Q %.2f\n", comprasu);
        printf("\nPrecio Total: Q %.2f", Cliente[totsup].compratotal);
        totsup++;
        break;
        case 2: 
        printf("\nIngrese Numero de Galones de Regular que se Compraron: ");
        scanf("%f", &Cliente[totreg].compraregular);
        Cliente[totreg].compratotal = Cliente[totreg].compraregular*comprare;
        printf("\nPrecio por Galon Super: Q %.2f\n", comprare);
        printf("\nPrecio Total: Q %.2f", Cliente[totreg].compratotal);
        totreg++;
        break;
        case 3: 
        printf("\nIngrese Numero de Galones de Diesel que se Compraron: ");
        scanf("%f", &Cliente[totdie].compradiesel);
        Cliente[totdie].compratotal = Cliente[totdie].compradiesel*compradi;
        printf("\nPrecio por Galon Super: Q %.2f\n", compradi);
        printf("\nPrecio Total: Q %.2f", Cliente[totdie].compratotal);
        totdie++;
        break;
    	}
    getch();
	}
//Registro Reporte de Ventas
void reporteventas(void)
{
    int tipo;
    float total;
    system("cls");
    printf("Ventas de Gasolina\n\n");
    printf("1 - Super\n");
    printf("2 - Regular\n");
    printf("3 - Diesel\n\n");
    printf("Ingrese el Tipo de Gasolina: ");
	scanf("%d", &tipo);
    switch(tipo)
    	{
        case 1: 
        for(int i=0; i<regs;i++)
        	{   
            printf("\nGalones de Super Vendidos: %.2f", Cliente[i].gsuper);
            printf("\nPrecio por Galon: Q %.2f\n", presuper);
            printf("\nTotal Vendido: Q %.2f\n", Cliente[i].ventatotal);
            }
        break;
        case 2:
        for(int i=0; i<regr;i++)
            {  
            printf("\nGalones de Regular Vendidos: %.2f\n", Cliente[i].gregular);
            printf("\nPrecio por Galon: Q %.2f\n", preregular);
            printf("\nTotal Vendido: Q %.2f", Cliente[i].ventatotal);
            }
        break;
        case 3: 
        for(int i=0; i<regd;i++)
            { 
            printf("\nGalones de Diesel Vendidos: %.2f\n", Cliente[i].gdiesel);
            printf("\nPrecio por Galon: Q%.2f\n", prediesel);
            printf("\nTotal Vendido: Q %.2f", Cliente[i].ventatotal);
            }
        break;
    	}
    getch();
	}
//Registro Reporte de Compras
void reportecompras(void)
{
    int tipo;
    float total;
    system("cls");
    printf("Compras de Gasolina\n\n");
    printf("1 - Super\n");
    printf("2 - Regular\n");
    printf("3 - Diesel\n\n");
    printf("Ingrese el Tipo de Gasolina: ");
    scanf("%d", &tipo);
    switch(tipo)
    	{
        case 1:    
        for(int i=0; i<totsup;i++)
            {   
            tots+=Cliente[i].comprasuper;
            }
        printf("\nTotal de Galones de Super Comprados: %5.2f", tots);
        printf("\nPrecio por Galon: Q%.2f\n", comprasu);
        printf("\nTotal Vendido: Q %.2f", tots*comprasu);
        break;
        case 2:
        for(int i=0; i<totreg;i++)
            {     
            totr+=Cliente[i].compraregular;
            }
        printf("\nTotal de Galones de Regular Comprados: %5.2f", totr);
        printf("\nPrecio por Galon: Q%.2f\n", comprare);
        printf("\nTotal Vendido: Q %.2f", totr*comprare);
        break;
        case 3: 
        for(int i=0; i<totdie;i++)
        	{     
            totd+=Cliente[i].compradiesel;
            }
            printf("\nTotal de Galones de Diesel Comprados: %5.2f", totd);
            printf("\nPrecio por Galon: Q%.2f\n", compradi);
        printf("\nTotal Vendido: Q %.2f", totd*compradi);
            break;
    	}
    	tots=0, totr=0, totd=0;
        getch();
	}
	
	
int pro7(int jmsm){
	//Obtención de decimales :v 
	x=jmsm;

	
}
int Pro7v2(int Jed){

//asa1= Jed%10;
//asa2=(Jed/10)%10;
asa1=Jed%100;	
}
int main(){
    int Menu, conversiones, geometricas,cajero;
 
//condicion para que se repita si no se cumple la funcion do while
	char ress;
do{
  	float n1,n2,suma,resta,multi, divi;
  	//variable declarada para par o impar
  	int n;
  	int a2 = 1;
  		int x,y=0,z=0;
  	int numer;
	string bina = "";
		
  	int tabla = 1,multiplicar=0;
	string texto;
	int aux = 0, igual = 0;
	int digitohex[20];
    int decimal, residuo, resultado, i1 = 0;
	float cat1,cat2,catc;
    float total;
       int cajero,menu1,menu2;
	   	int tipoCuenta,mone=1,ahorro=2;
    	char res15;
    	int tar,tarjeta1=1234,tarjeta2=1111,tarjeta3=1010,Juan=500, Pedro=1200, Cindy=3000,tot; 
  	int retiro;
    //declaracion de menu interactivo
    //utilizamos printf es mas versatil y facil de manipular que el cout
    system("cls");
    printf("*BIENVENIDO AL PROGRAMA DE JORGE DUARTE*\n");
    printf("*CARNET 3590-20-11844*\n");
    printf("1 - operaciones matematicas, +,-*,/ \n");
    printf("2 - Determinar Numeros pares o impares\n");
    printf("3 - convertidor de unidades\n");
    printf("4 - Determinar si la palabra es palindroma\n");
    printf("5 - Numeros arabicos a romanos\n");
    printf("6 - Numeros enteros a letras\n");
    printf("7 - Numeros enteros con decimal a letras\n");
    printf("8 - Tabla de multiplicar\n");
    printf("9 - Tablas de multiplicar del 1 al 10\n");
    printf("10 - Multiplicacion manual\n");
    printf("11 - Decimales a binario\n");
    printf("12 - Decimales a Hecadecimales\n");
    printf("13 - Figuras geometricas\n");
    printf("14 - punto en toda la pantalla\n");
    printf("15 - cajero automatico\n");
    printf("16 - calculo de hipotenusa\n");
    printf("17 - factorial\n");
    printf("18 - numero final \n");
    printf("19 - Dias de un mes\n");
    printf("20 - Gasolinera\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &Menu);
   
    //scanf para guardar la info del menu
    //condicional para menu
    
   switch(Menu)
    	{
		case 1: //operaciones matematicas
		system("cls");
		char res1;
		do{
		cout<<"*******Operaciones matematicas*********"<<endl;
		cout<<"ingrese el numero 1: "<<endl;
		cin>>n1;
		cout<<"ingrese el numero 2: "<<endl;
        cin>>n2;
		//formulas
        suma=n1 + n2;
        resta= n1-n2;
		multi= n1*n2;
		divi=n1/n2;
        //Muestra de resultados
        cout<<"La suma de los valores es :"<<suma<<endl;
        cout<<"La resta de los valores es :"<<resta<<endl;
        cout<<"La division de los valores es :"<<divi<<endl;
        cout<<"La multiplicacion de los valores es :"<<multi<<endl;
       	//terminamos el la condicion 1 del menu
    			cout<<"¿Desea Ingresar otro valor al menu 1?..(s/n):";
				cin>>res1;
					}while (res1=='s'); 
        break;
    
		case 2: //numero par o impar
		system("cls");
			char res2;
		do{
		cout<<"*******numeros pares o impares*********"<<endl;
     	cout<<"ingrese el valor: "<<endl;
		cin>>n;
		if(n % 2 ==0){
		cout<<"El numero es par ="<<n<<endl;
		
		}
		else{
		cout<<"El numero es impar ="<<n<<endl;
		}
		cout<<"¿Desea Ingresar otro valor al menu 1?..(s/n):";
				cin>>res1;
					}while (res2=='s'); 
		
        break;
    	
    	case 3: //Conversiones 
    	  system("cls");
 
    	float  k,millas,mts,pul,lib,kilo,r1;
    	char res3;
		do{
		cout<<"*******Conversiones*********"<<endl;

		printf("1 - kilometros a millas \n");
	    printf("2 - metros a pulgadas\n");
	    printf("3 - libras a kilos\n");
	    printf("4 - millas a kilometros\n");
	    printf("5 - pulgadas a metros\n");
	    printf("6 - kilos a libras\n");
	    cout<<"Seleccione el tipo de conversion que necesites :)   :";
	    scanf("%d", &conversiones);
	    

			     switch(conversiones){
					case 1:
					cout<<"Ingrese cantidad en kilometros: ";
					cin>>k;
					//formula
					r1= k/1.609;
					cout<<"La conversion de kilometros a milla es: "<<r1<<"millas"<<endl;
					break;
					
					case 2:
					cout<<"Ingrese cantidad en metros: ";
					cin>>mts;
					//formula
					r1= mts*39.370;
					cout<<"La conversion de metros a pulgadas es: "<<r1<<"pulgadas"<<endl;
					break;
					
					case 3:
					cout<<"Ingrese cantidad en libras: ";
					cin>>lib;
					//formula
					r1= lib/2.205;
					cout<<"La conversion de Libras a kilos: "<<r1<<"kilos"<<endl;
					
					case 4:
					cout<<"Ingrese cantidad en millas: ";
					cin>>millas;
					//formula
					r1= millas*1.609;
					cout<<"La conversion de millas a kilometros es: "<<r1<<"kilometros"<<endl;
					break;
					
					case 5:
					cout<<"Ingrese cantidad en pulgadas: ";
					cin>>pul;
					//formula
					r1= pul/39.37;
					cout<<"La conversion de pulgadas a metros es: "<<r1<<"metros"<<endl;
					break;
					
					case 6:
					cout<<"Ingrese cantidad en kilos: ";
					cin>>kilo;
					//formula
					r1= kilo*2.205;
					cout<<"La conversion de kilos a libras: "<<r1<<"libras"<<endl;
					break;
					
				 }	cout<<"¿Desea Ingresar otro valor al menu 3?..(s/n):";
					cin>>res3;
					}while (res3=='s');    
			    
		    
    		
		case 4: //Palabras palindromas
        system("cls");
  		char res4;
		do{
		cout<<"*******Palabras palindromas*********"<<endl;
		
		cout << "Ingrese la palabra a evaluar: ";
		getline(cin >> ws, texto);
		    
		    for(int ind = texto.length() - 1; ind >= 0; ind--) {
		        if(texto[ind] == texto[aux]) {
		            igual++;
		        }
		        aux++;
		    }
		    
		    if(texto.length() == igual) {
		        cout << "La palabra ingresada es palindromo!! :D" << endl;
		    } else {
		        cout << "La palabra ingresada no es palindromo!! :D" << endl;
		    }
		    cout<<"¿Desea Ingresar otro valor al menu 4?.. (s/n):";
					cin>>res4;
					}while (res4=='s');  
		   		
  		
				
		
			break;
   
  
    	case 5: //area y perimetro de un rombo
    	system("cls");
    	int a1,num;
  		char res5;
		do{
        cout << "***numero arabigos a romanos***" << endl;
		cout << "Escribe el numero a convertir, que sea >= a 1 y menor o igual a 3999: " << endl;
		cin >> a1;
		num=a1;
			while(num!=0)
			{
			
			if (num<= 3999 && num>= 1000)
			{
			cout << "M";
			num = num -1000;
			}
			else if(num <1000 && num>=900)
			{
			cout << "CM";
			num = num - 900;
			}
			else if(num < 900 && num>500)
			{
			cout << "D";
			num = num - 500;
			}
			else if (num == 500)
			{
			cout << "D";
			num = num -500;
			}
			else if (num<500 && num>= 400)
			{
			cout << "CD";
			num = num - 400;
			}
			else if (num<400 && num >99)
			{
			cout << "C";
			num = num -100;
			}
			else if (num< 100 && num>89)
			{
			cout << "XC";
			num = num - 90;
			}
			else if (num< 90 && num>59)
			{
			cout << "L";
			num = num - 50;
			}
			else if(num<60 && num >50)
			{
			cout << "L";
			num = num - 50;
			}
			else if (num ==50)
			{
			cout << "L";
			num = num -50;
			}
			else if(num<50 && num>39)
			{
			cout << "XL";
			num = num - 40;
			}
			else if(num< 40 && num> 10)
			{
			cout << "X";
			num = num - 10;
			}
			else if(num == 10)
			{
			cout << "X";
			num = num -10;
			}
			else if(num==9)
			{
			cout << "IX";
			num = num - 9;
			}
			else if(num<=8 && num>=6)
			{
			cout << "V";
			num = num - 5;
			}
			else if (num == 5)
			{
			cout << "V";
			num = num - 5;
			}
			else if (num == 4)
			{
			cout << "IV";
			num = num - 4;
			}
			else if (num<= 3 && num>=1)
			{
		cout << "I";
		num = num - 1;
		}
		}
	
		return 0;

       	cout<<"¿Desea Ingresar otro valor al menu 5?.. (s/n):";
					cin>>res5;
					}while (res5=='s');  
        break;
        
        
       	case 6: //numeros a letras
   
       		system("cls");
       		char res6;
       	
		do{
		    cout<<"****INGRESA UN NUMERO DEL 1 AL 999****\n";
		    cout<<"ingrese un numero: ";
		    cin>>x;
		if((x<1)||(x>999)) ;
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
    cout<<endl;

cout<<"Desea Ingresar otro valor al menu 6?.. (s/n):";
					cin>>res6;
					}while (res6=='s');
			  
        break;
        
        
        	case 7: //area y perimetro de un trapecio
        	
       system("cls");
       		char res7;
       	

		do{
		    cout<<"****INGRESA UN NUMERO DEL 1 AL 999****\n";
		    cout<<"ingrese un numero: ";
		    cin>>hl;
		    pro7(hl);
		    Pro7v2(hl*100);
		if((x<1)||(x>999)) ;
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
        if(x>90) {cout<<"NOVENTA PUNTO "   ;x=x-90.00; }
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
       
       
    cout<<" PUNTO ";
   
       
       
        if(asa1>90) {cout<<"NOVENTA PUNTO "   ;asa1=asa1-90.00; }
            if(asa1==90)   {cout<<"NOVENTA"  ;asa1=asa1-90; }  
            if(asa1>80) {cout<<"OCHENTA Y "   ;asa1=asa1-80; }
            if(asa1==80)   {cout<<"OCHENTA"  ;asa1=asa1-80; }
            if(asa1>70) {cout<<"SETENTA Y "   ;asa1=asa1-70; }
            if(asa1==70)   {cout<<"SETENTA"  ;asa1=asa1-70; }
            if(asa1>60) {cout<<"SESENTA Y "   ;asa1=asa1-60; }
            if(asa1==60)   {cout<<"SESENTA"  ;asa1=asa1-60; }
            if(asa1>50) {cout<<"CINCUENTA Y " ;asa1=asa1-50; }
            if(asa1==50)   {cout<<"CINCUENTA"    ;asa1=asa1-50; }
            if(asa1>40) {cout<<"CUARENTA Y "  ;asa1=asa1-40; }
            if(asa1==40)   {cout<<"CUARENTA" ;asa1=asa1-40; }
            if(asa1>30) {cout<<"TREINTA Y "   ;asa1=asa1-30; }
            if(asa1==30)   {cout<<"TREINTA"  ;asa1=asa1-30; }
            if(asa1>20) {cout<<"VEINTI"       ;asa1=asa1-20; }
            if(asa1==20)   {cout<<"VEINTE"       ;asa1=asa1-20; }
        if(asa1>=16)    {cout<<"DIECI"        ;asa1=asa1-10; }
       else if(asa1==15)   {cout<<"QUINCE"       ;asa1=asa1-15; }
       else if(asa1==14)   {cout<<"CATORCE"  ;asa1=asa1-14; }
       else if(asa1==13)   {cout<<"TRECE"        ;asa1=asa1-13; } 
       else if(asa1==12)   {cout<<"DOCE"     ;asa1=asa1-12; }
       else if(asa1==11)   {cout<<"ONCE"     ;asa1=asa1-11; }
       else if(asa1==10)   {cout<<"DIEZ"     ;x=x-10; } 
       if(asa1==9)    {cout<<"NUEVE "        ;x=x-9;  }
        if(asa1==8)    {cout<<"OCHO "     ;x=x-8;  }
        if(asa1==7)    {cout<<"SIETE "        ;x=x-7;  }
            if(asa1==6)    {cout<<"SEIS "     ;x=x-6;  }
       else if(asa1==5)    {cout<<"CINCO "        ;x=x-5;  }
       else if(asa1==4)    {cout<<"CUATRO "       ;x=x-4;  }
       else if(asa1==3)    {cout<<"TRES "     ;x=x-3;  }
       else if(asa1==2)    {cout<<"DOS "      ;x=x-2;  }
       else if(asa1==1)    {cout<<"UNO "      ;x=x-1;  }
       else if(asa1==0)    {cout<<"CERO "      ;x=x-0;  }
       
    
   }
    cout<<endl;

cout<<"Desea Ingresar otro valor al menu 7?.. (s/n):";
					cin>>res7;
					}while (res7=='s');
					  
        break;
      
        	case 8: 
			char res8;//area y perimetro de un circulo
    do{
	cout<<"Ingrese Tabla:";
	cin>>tabla;
	 for (int i=1;i<=10;i++){
	 	multiplicar = tabla * i;
	 	cout<<tabla<<" X "<<i<<" = "<<multiplicar<<endl;
	 }
	 
cout<<"Desea Ingresar otro valor al menu 8?.. (s/n):";
					cin>>res8;
					}while (res8=='s');
					  
        break;
        
 		case 9:
 		char res9;//area y perimetro de un circulo
    do{
 				for (int i=1;i<=10;i++){
		for (int ii=1;ii<=10;ii++){
		 multiplicar = i*ii;
		 cout<<i<<" X "<<ii<<" = "<<multiplicar<<endl;
		}
		cout<<"__________________"<<endl;
	}
	cout<<"Desea Ingresar otro valor al menu 9?.. (s/n):";
					cin>>res9;
					}while (res9=='s');
					system("pause");
		break; 
		system("pause");
		
		//programa 10
		
 		case 10: 
 		system("cls");
 		cout<<"***MULTIPLICACION GRAFICA***"<<endl;
    	char res10;
    	
  
    	int nume1,nume2,*mult, lado1, lado2;
    	
    	mult = new int [1];
    	cout<<"ingresa una multiplicacion de 2 * 2"<<endl;
    	
    	if(nume1 <=99 && nume2<=99){
    		cout<<"Ingresa el primer numero"<<endl;
    		cin>>nume1;
    		cout<<"Ingresa el 2 numero"<<endl;
    		cin>>nume2;
   		
		} 
	else if(nume1>=100 || nume2>=100)
		{
			cout<<"numero no valido"<<endl;
		}
		else{
			cout<<"numero no valido"<<endl;
		}
		system("cls");
	cout<<"--------Multiplicación de forma grafica--------\n\nEl resultado es: "<<endl;;
	if(nume1>=10){
		e = "    ";
	}else{
		e = "     ";
	}

	cout<<e<<nume1<<endl;
	
	if(nume2>=10){
		e = "  ";
	}else{
		e = "   ";
	}
	
	cout<<e<<"x "<<nume2<<endl;
	
	if(nume1>=10 && nume2>=10){
		mult[0] = nume2/10;
		mult[1] = nume2%10;
		lado1 = mult[1]*nume1;
		lado2 = mult[0]*nume1;
		
		cout<<"------------"<<endl;	
		
		if(lado1>=100){
			e = "   ";
		}else if(lado1>=10){
			e = "    ";
		}else{
			e = "     ";
		}
		if(lado2>=100){
			f = "+ ";
		}else if(lado2>=10){
			f = "+  ";
		}else {
			f = "+   ";
		}
		
		cout<<e<<lado1<<endl;
		cout<<f<<lado2<<endl;
	}

	lado1 = nume1*nume2;
	
	if(lado1>=1000){
		e = "  ";
	}else if(lado1>=100){
		e = "   ";
	}else if(lado1>=10){
		e = "    ";
	}else{
		e = "     ";
	}
	
	cout<<"------------"<<endl;
	cout<<e<<lado1<<endl;

	
	delete[] mult;

    	
        break;
    
		case 11: 
		char res11;//area y perimetro de un circulo
    do{
       	cout<<"Ingrese un numero entero positivo: "<<endl;
       	cin>>numer;
       	if(numer >0){
       		while (numer >0){	
		
       		if (numer%2 ==0){
       			bina ="0"+bina;
			   }
			   else{
			   	bina ="1"+bina;
			   }
		  
		   numer= (int)numer/2;
		    }
		   }
    	else if(numer==0){
    		bina ="0";
		}else{
			bina="No se puede realizar conversion. ingrese numeros positivos";
		}
		cout<<"El resultado de la conversion es: "<<bina<<endl;


    	cout<<"Desea Ingresar otro valor al menu 9?.. (s/n):";
					cin>>res11;
					}while (res11=='s');
        break;
    	
    	case 12: 
		

    cout << "Introduce el numero decimal a convertir: " << endl;
    cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitohex[i1] = residuo;
        decimal = resultado;
        i1++;
    } while (resultado > 15);

    digitohex[i1] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i1; j >= 0; j--)
    {
        if (digitohex[j] == 10)
        {
            cout << "A";
        }
        else if (digitohex[j] == 11)
        {
            cout << "B";
        }
        else if (digitohex[j] == 12)
        {
            cout << "C";
        }
        else if (digitohex[j] == 13)
        {
            cout << "D";
        }
        else if (digitohex[j] == 14)
        {
            cout << "E";
        }
        else if (digitohex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitohex[j];
        }   
    }
    cout << endl;
    system("PAUSE");
        break;
    
    
		case 13: //area y perimetro de un cuadrado 

    	char res13;
		do{
		cout<<"*******Figuras*********"<<endl;

		printf("1 - cuadrado \n");
	    printf("2 - Rectangulo\n");
	    printf("3 - rombo\n");
	    printf("4 - circulo\n");
	    cout<<"Seleccione el tipo de figura que necesites visualizar :)   :";
	    scanf("%d", &geometricas);
	    

			     switch(geometricas){
			     		cout<<"Ingrese cantidad en kilometros: ";
					case 1:
				
					cout<<"***********   ";
					cout<<"***********   ";
					cout<<"***********   ";
					cout<<"***********   ";
					cout<<"***********   ";
					cout<<"***********   ";
					break;
					
					case 2:
					cout<<"     *   ";
					cout<<"    ***   ";
					cout<<"   *****   ";
					cout<<"  *******   ";
					cout<<" *********   ";
					cout<<"***********   ";
					break;
					
					case 3:
					cout<<"      **   ";
					cout<<"     ****   ";
					cout<<"    ******   ";
					cout<<"   ********   ";
					cout<<"  **********   ";
					cout<<"   ********  ";
					cout<<"    ******   ";
					cout<<"     ****   ";
					cout<<"      **   ";
					break;
					
					case 4:
			
					cout<<"    ******   ";
					cout<<"   ********   ";
					cout<<"   ********   ";
					cout<<"   ********  ";
					cout<<"    ******   ";
				
					break;
					
				}
					cout<<"Desea Ingresar otro valor al menu 13?.. (s/n):";
					cin>>res13;
					}while (res13=='s');
 

        break;
    	
    	case 14: 
    	   char punt[100];
	a2=1;
	for(int i=0; i<100; i++){
		punt [i] = ' ';
	}
	
	while(a2!=0){
		a2+=1;
		for(int i=1; i<100; i++){
			punt [i] = '*';
			punt [i-1] = ' ';
			for(int ii=0; ii<100; ii++){
				cout<<punt[ii];
			}
			system("cls");
			for(int sal=0; sal<=a2;sal++){
				cout<<endl;
			}
		Sleep(200);
		}
		
		for(int i=99; i>0; i--){
			punt [i] = '*';
			punt [i+1] = ' ';
			for(int ii=0; ii<100; ii++){
				cout<<punt[ii];
			}
			system("cls");
			for(int sal=0; sal<=(a2+1);sal++){
				cout<<endl;
			}
			Sleep(200);
		}
	}
system("pause>nul");
            return 0;
        break;
        
       	case 15: 
        system("cls");
 	   
do{
   
     

		cout<<"*******BIENVENIDO AL CAJERO AUTOMATICO*********"<<endl;
		cout<<"*******QUE TRANSACCION DESEAS REALIZAR EL DIA DE HOY?*********"<<endl;
		printf("1 - Transacciones con tarjeta \n");

	    
	    cout<<"Seleccione el tipo de transaccion que necesites :)   :";
	    scanf("%d", &cajero);
	    

			     switch(cajero){
			     	int lop;
					case 1:
					cout<<"Ingrese el numero de tarjeta por favor: ";
					cin>>tar;
						
					if(tar==tarjeta1 || tar==tarjeta2||tar==tarjeta3) {
						cout<<"Bienvenido "<<endl;
						
						cout<<"*******SELECCIONE EL TIPO DE CUENTA*********"<<endl;
				
						printf("1 - MONETARIA\n");
					    printf("2 -  AHORRO\n");
					   
					    	cout<<"Seleccione el tipo de cuenta  :)   :";
						
					    	
					     scanf("%d", &menu1);
						
					   
						switch(menu1){
					
							case 1:
							cout<<"haz seleccionado el tipo de cuenta monetaria :)  "<<endl;
						
													
						if(tipoCuenta==mone) {
							
						cout<<"Que transaccion deseas realizar? "<<mone<<endl;
						cin>>mone;
						
						}
					
						printf("1 - retiro\n");
				
					   
					    	cout<<"Seleccione cuanto desea retirar  :)   :"<<endl;
						
					    	
					     scanf("%d", &menu2);
						
				
						switch(menu2){
					   	system("cls");
							case 1:
									
							cout<<"Cuanto deseas retirar? ";
							cin>>retiro;
						 if(retiro==tarjeta1 ){
								cout<<"transaccion realizada exitosamente "<<retiro<<endl;
								cin>>retiro;
								tot=retiro-Juan;
									cin>>tot;
							}
							else if(retiro<=tarjeta2){
									cout<<"transaccion realizada exitosamente "<<retiro<<endl;
										cin>>retiro;
								tot=retiro-Pedro;
									cin>>tot;
							}
								else if(retiro>=tarjeta3){
									cout<<"transaccion realizada exitosamente "<<retiro<<endl;
										cin>>retiro;
								tot=retiro-Cindy;
								cin>>tot;
							}
							else{
					cout<<"El numero no es valido"<<endl;	
					}
					break;
				
				
					case 2:
							cout<<"haz seleccionado el tipo de cuenta ahorro :) ";
							cin>>ahorro;
						if( ahorro==tarjeta1 ){
								cout<<"transaccion realizada exitosamente "<<retiro<<endl;
								cin>>ahorro;
								tot=ahorro-Juan;
									cin>>tot;
							}
							else if(ahorro<=tarjeta2){
									cout<<"transaccion realizada exitosamente "<<ahorro<<endl;
										cin>>ahorro;
								tot=ahorro-Pedro;
									cin>>tot;
							}
								else if(ahorro>=tarjeta3){
									cout<<"transaccion realizada exitosamente "<<ahorro<<endl;
										cin>>ahorro;
								tot=ahorro-Cindy;
									cin>>tot;
							}else{
					cout<<"El numero no es valido"<<endl;
								
					}
						break;
						}
				
			
				break;
						}
		
					}else{
					cout<<"El numero no es valido"<<endl;
				}
				}
				}while (res15=='s');    
					cout<<"Desea regresar?.. (s/n):";
					cin>>res15;
		
    	
        break;
        
        case 16:
        float hipo;
        cout<<"Ingrese el cateto a: "<<endl;
        cin>>cat1;
        cout<<"Ingrese el cateto b: "<<endl;
        cin>>cat2;
        //formula
        catc=(cat1*cat1)+(cat2*cat2);
		hipo=sqrt(catc);
        cout<<"La hipotenusa del triangulo por cateto a y b es: "<<hipo<<endl;
        break;
        
        
        
        case 17:
        	system("cls");
        	int nums[14];
	cout << "Ingresa 15 numeros por favor:\n";
	for (int i=0;i<15;i++){
		cout << "#" << i+1 << ": ";
		cin >> nums[i];
	};
	
	//Se hacen 225 comparaciones, para ordenar los numeros de mayor a menor

	do{
		for (int i=0;i<15;i++){
			if(nums[i]<nums[i+1]){
				x = nums[i];
				nums[i] = nums[i+1];
				nums[i+1] = x;	
			};
		};
		y++;
	}while(y<15);
        break;
        
        case 18:
        		system("cls");
        int c;
	int NumeroFin;
	 cout<<"Ingrese un numero final: ";
	 cin>>NumeroFin;
	for(c=1; c<=NumeroFin;c++){
		cout<<c<<" , ";
	}
	printf("\n\n%c", 169);
        break;
        
        case 19:
			        int mes,dias,a;
			    cout<<"ingrese el mes y el a"<<char(164)<<"o"<<"(mes/a"<<char(164)<<"o)"<<endl;
			    cin>>mes>>a;
			 
			switch (mes)
			{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			dias = 31;
			break;
			case 4: case 6: case 9: case 11:
			dias = 30;
			break;
			case 2:if(a%4==0)
			dias = 28;
			    else
			dias=29;
			break;
			default:
			printf("El mes no es válido\n");
			break;
			}
			cout<<"El mes tiene :"<<dias<<" dias"<<endl;
			cin.ignore();return 0;

 
        break;
        
        case 20: 

	system("color F0");
	system("title Prueba Final - Gasolinera");
    int lista;
    do
    	{
   		system("cls");
    	printf("Menu - Gasolinera\n\n");
    	printf("1 - Ventas\n");
    	printf("2 - Compras\n");
    	printf("3 - Reportes de Ventas\n");
    	printf("4 - Reportes de Compras\n");
    	printf("5 - Salir\n\n");
    	printf("Escriba una Opcion: ");
    	scanf("%d", &lista);
    	switch(lista)
    		{
            case 1: ventas(); 
			break;
            case 2: compras(); 
			break;
            case 3: reporteventas(); 
			break;
            case 4: reportecompras(); 
			break;
    		}
		}
    while(lista!=5);

        break;
}

    	cout<<"Desea Ingresar regresar al menu principal?.. (s/n):";
			cin>>ress;
			}while (ress=='s');
 
	
	system("pause");
	
    return main();
}
  

