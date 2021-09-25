#include "iostream"  
#include "string"
#include <stdlib.h>

using namespace std;

main ()
{
	string r;
	float pkg=2.5, pkm=0.13, paque, repu, mob, elec, dt;   
    float i;
    int x, y, largo, ancho, alto, kg1, kg2, docs=40, real, volum;


    cout << "Pesos de los productos" << "\n"; 
	cout << " 1 Peso real *MAX 35KG*" << "\n"; 
    cout << " 2 Peso volumetrico  (si no conoce el peso del articulo) *MAX 50KG*" << "\n"; 
	cout << " 3 En caso de ser documentos" << "\n"; 
	cout << "\n" << endl;
	
	cout << "Digite el numero de su opcion" << "\n"; 
	cin >> y;
    cout << "\n" << endl;
    
        switch (y)
	{
		
		case 1:
			{
				cout << "Ingrese el peso real del articulo" << "\n"; 
	            cin >> real;
	            cout << "\n" << endl;
	            
				if (real<=35){
				cout << real << "kg. Peso del articulo valido, puede continuar" << "\n";
				cout << "\n" << endl;
				}
				else {
				cout<<real << "kg. El articulo excede el peso limite" << "\n";
				exit(-1);
				}
				
				break;
				
			}
			
		case 2:
			{
				cout << "Ingrese el largo del articulo" << "\n"; 
	            cin >> largo;
	            cout << "Ingrese el ancho del articulo" << "\n"; 
	            cin >> ancho;
	            cout << "Ingrese el alto del articulo" << "\n"; 
	            cin >> alto;
	            
				volum=(largo*ancho*alto)/2272;
				
				if (volum<=50){
				cout << volum << "kg. Peso del articulo valido, puede continuar" << "\n";
				cout << "\n" << endl;
				}
				else {
				cout<<volum<< "kg El articulo excede el peso limite" << "\n";
				exit(-1);
				}
				
				break;
				
		case 3: break;
			}
    }		
		
	cout << "MENU DE MERCADERIA DISPONIBLE EN LA EMPRESA *P&P*"<< "\n";
	cout << " 1 Documentos" << "\n"; 
	cout << " 2 Paqueteria" << "\n"; 
	cout << " 3 Mobiliario" << "\n"; 
	cout << " 4 Repuestos" << "\n"; 
	cout << " 5 Art. electronicos" << "\n"; 
	cout << "\n" << endl;
	
	cout << "Digite el numero correspondiente al articulo que desea enviar" << "\n"; 
	cin >> x;
	cout << "\n" << endl; 
    
    switch (x)
	{
				case 1:
			{
			cout << "DEPARTAMENTOS,   DISTANCIAS"<< "\n";
	        cout << "Guatemala,         10KM"  << "\n"; 
	        cout << "Izabal,            300KM" << "\n";
	        cout << "Peten,             460KM" << "\n";
	        cout << "Chiquimula,        178KM" << "\n";
	        cout << "Reltalhuleu,       200KM" << "\n";
	        cout << "\n" << endl;
	        
	        cout << "Ingrese la distancia del departamento al que desea enviar su paquete" <<"\n";
	        cin >> dt;
	        
	        cout << "\n" << endl;
			cout << "Su total es de: Q" << docs<<" por la distancia de " << dt <<"km"<<"\n";
		
			}
			break;
			
			
		case 2:
			{
			cout << "DEPARTAMENTOS,   DISTANCIAS"<< "\n";
	        cout << "Guatemala,         10KM"  << "\n"; 
	        cout << "Izabal,            300KM" << "\n";
	        cout << "Peten,             460KM" << "\n";
	        cout << "Chiquimula,        178KM" << "\n";
	        cout << "Reltalhuleu,       200KM" << "\n";
	        cout << "\n" << endl;
	        
	        cout << "Ingrese la distancia del departamento al que desea enviar su paquete" <<"\n";
	        cin >> dt;
	        
	        cout <<"Si utilizo el peso real escriba *real* o si utilizara el peso volumetrico escriba *volu*"<< "\n";
	        cin >> r;
	        
	        if (r=="volu")
			{
			cout << "\n" << endl;
	        cout << "Recuerde que el peso volumetrico de su articulo es de " << volum <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			paque=(volum*pkg)+(dt*pkm);	
			}
			
	        else if (r=="real")
			{
			cout << "Recuerde que el peso real de su articulo es de " << real <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			paque=(real*pkg)+(dt*pkm);
			}
			
			cout << "Su total es de: Q" << paque<<" por la distancia de " << dt <<"km"<<"\n";
			
			break;
			
		
		case 3:
			{
			
			cout << "DEPARTAMENTOS,   DISTANCIAS"<< "\n";
	        cout << "Guatemala,         10KM"  << "\n"; 
	        cout << "Izabal,            300KM" << "\n";
	        cout << "Peten,             460KM" << "\n";
	        cout << "Chiquimula,        178KM" << "\n";
	        cout << "Reltalhuleu,       200KM" << "\n";
	        cout << "\n" << endl;
	        
	        cout << "Ingrese la distancia del departamento al que desea enviar su paquete" <<"\n";
	        cin >> dt;
	        
	        cout <<"Si utilizo el peso real escriba *real* o si utilizara el peso volumetrico escriba *volu*"<< "\n";
	        cin >> r;
	        
	        if (r=="volu")
			{
			cout << "\n" << endl;
	        cout << "Recuerde que el peso volumetrico de su articulo es de " << volum <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			mob=(volum*pkg)+(dt*pkm);	
			}
			
	        else if (r=="real")
			{
			cout << "Recuerde que el peso real de su articulo es de " << real <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			mob=(real*pkg)+(dt*pkm);
			}
			
			cout << "Su total es de: Q" << mob<<" por la distancia de " << dt <<"km"<<"\n";
			}
			break; 
			
		
		case 4:
			{
			
			cout << "DEPARTAMENTOS,   DISTANCIAS"<< "\n";
	        cout << "Guatemala,         10KM"  << "\n"; 
	        cout << "Izabal,            300KM" << "\n";
	        cout << "Peten,             460KM" << "\n";
	        cout << "Chiquimula,        178KM" << "\n";
	        cout << "Reltalhuleu,       200KM" << "\n";
	        cout << "\n" << endl;
	        
	        cout << "Ingrese la distancia del departamento al que desea enviar su paquete" <<"\n";
	        cin >> dt;
	        
	        cout <<"Si utilizo el peso real escriba *real* o si utilizara el peso volumetrico escriba *volu*"<< "\n";
	        cin >> r;
	        
	        if (r=="volu")
			{
			cout << "\n" << endl;
	        cout << "Recuerde que el peso volumetrico de su articulo es de " << volum <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			repu=(volum*pkg)+(dt*pkm);	
			}
			
	        else if (r=="real")
			{
			cout << "Recuerde que el peso real de su articulo es de " << real <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			repu=(real*pkg)+(dt*pkm);
			}
			
			cout << "Su total es de: Q" << repu<<" por la distancia de " << dt <<"km"<<"\n";
			}
			break;
		
		case 5:
			{
			cout << "DEPARTAMENTOS,   DISTANCIAS"<< "\n";
	        cout << "Guatemala,         10KM"  << "\n"; 
	        cout << "Izabal,            300KM" << "\n";
	        cout << "Peten,             460KM" << "\n";
	        cout << "Chiquimula,        178KM" << "\n";
	        cout << "Reltalhuleu,       200KM" << "\n";
			cout << "\n" << endl;
	        
	        cout << "Ingrese la distancia del departamento al que desea enviar su paquete" <<"\n";
	        cin >> dt;
	        
	        cout <<"Si utilizo el peso real escriba *real* o si utilizara el peso volumetrico escriba *volu*"<< "\n";
	        cin >> r;
	        
	        if (r=="volu")
			{
			cout << "\n" << endl;
	        cout << "Recuerde que el peso volumetrico de su articulo es de " << volum <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			elec=(volum*pkg)+(dt*pkm);	
			}
			
	        else if (r=="real")
			{
			cout << "Recuerde que el peso real de su articulo es de " << real <<"kg"<<"\n";
			cout << "Entonces" << "\n"; 
			elec=(real*pkg)+(dt*pkm);
			}
			
			cout << "Su total es de: Q" << elec<<" por la distancia de " << dt <<"km"<<"\n";
	
			}
			break;
			
			
		default:
			{
				cout << "Opcion no valida: " << "\n"; 
			}		
	}
	
	system("pause");
	}
    
    
	

}