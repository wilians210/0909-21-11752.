#include "iostream"  
#include <stdlib.h>

using namespace std;

main ()
{
	
	string user, contra="", r;
	int x, i1, i2, quetzal=5000, dolar=650, exit;

	cout << "Ingrese su nombre de usuario" << endl;
	cin>>user;
	
	cout << "Ingrese el pin para poder ingresar" << endl;
	cin>>contra;
	
	
	if (contra == "2021")
	{
	cout << "Pin correcto, bienvenido"<< endl;
	cout << "Willians Heriberto Navas Reyes"<< endl;
	cout << "0909-21-11752"<< endl;
	cout << "\n" << endl;
	
	
	cout << "Bienvenido escoja el tipo de moneda a utilizar"<< endl;
	cout << "1. Quetzales"<< endl;
	cout << "2. Dolares"<< endl;
	cout << "o opcion 3 para salir"<< endl;
	cout << "\n" << endl;
	
	cout << "Digite su opcion"<< endl;
	cin>>x;
	cout << "\n" << endl;
	
	switch (x)
	{
		
		case 1:
			{
			
			cout << "Si desease retirar dinero escriba si, en otro caso escriba no (TOME EN CUENTA QUE SI RETIRA DINERO SOLO PODRA SALIR HASTA QUE SE QUEDE SIN SALDO)"<<endl;
			cin>>r;
			cout << "\n" << endl;
			
			if (r=="si"){
			cout << "Su saldo actual es de: Q"<<quetzal<<endl;
			cout << "\n" << endl;
			
			do{	
			cout << "Ingrese el monto a retirar"<<endl;
			cin>>i1;	
			cout << "\n" << endl;
			quetzal=quetzal-i1;
			cout << "Su saldo restante es de: Q"<< quetzal <<endl;
			}while (quetzal>=0);
			
			cout << "SALDO INSUFICIENTE"<<endl;
			} 
			
			else if (r=="no"){
			cout << "Feliz dia/tarde/noche"<<endl;
			}
			break;
			}
			
		case 2:
			{
			
			cout << "Si desease retirar dinero escriba si, en otro caso escriba no (TOME EN CUENTA QUE SI RETIRA DINERO SOLO PODRA SALIR HASTA QUE SE QUEDE SIN SALDO)"<<endl;
			cin>>r;
			cout << "\n" << endl;
			
			if (r=="si"){
			cout << "Su saldo actual es de: $"<<dolar<<endl;
			cout << "\n" << endl;
			
			do{	
			cout << "Ingrese el monto a retirar"<<endl;
			cin>>i2;	
			cout << "\n" << endl;
			dolar=dolar-i2;
			cout << "Su saldo restante es de: $"<< dolar  <<endl;
			}while (dolar>=0);
			
			cout << "SALDO INSUFICIENTE"<<endl;
			} 
			
			else if (r=="no"){
			cout << "Feliz dia/tarde/noche"<<endl;
			}
			break;
			}
		
		case 3: cout << "Gracias por utilizar este programa" << "\n"; break;
			
		default:
			{
				cout << "Opcion no valida: " << "\n"; 
			}		
	}
		
	}

	else
	{
    cout << "Pin incorrecto, VUELVA A EJECUTAR e ingrese el pin asignado";
    }
	
	
	system("pause");
}