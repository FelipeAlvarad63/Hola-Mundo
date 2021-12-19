#include <iostream>
using namespace std;

main()
{
	int opcion;
	
	cout<<" Ingrese una opcion\n";
	cout<<"  1. para espanol\n";
	cout<<"  2. para Ingles\n";
	cout<<"  3. para Frances\n";
	cout<<"  4. para Aleman\n"<<endl;
	cout<<"Ingrese la opcion: ";
	cin>>opcion;
	cout<<endl;
	
	switch (opcion)
	{
		case 1: cout<<"\tHola Mundo!";
			break;
		case 2:	cout<<"\tHello World!";
			break;
		case 3:	cout<<"\tSalut Monde!";
			break;
		case 4:	cout<<"\tHallo Welt!";
			break;
		default: cout<<"La opcion ingresada no es valida.";
			break;
	}
}
