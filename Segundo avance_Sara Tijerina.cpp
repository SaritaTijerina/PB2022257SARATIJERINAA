#include <iostream> 
#include <locale>
#include <locale.h>
#include <string>
#include <cstdlib> 
#include <ctime>

using namespace std;

struct cita {

	int Cita;
	int id;
	int ed;
	int ht;
	int put;
	int ct;
	int pu;
	int total;
	string nom;
	string nt;
	string dt;
};

int main()
{
	cita cit[3];
	int i;
	int op, edad, c, h, preciounit, cant, preuni, total;
	string n, trata, descrip;
	int s = 1;
	
system("cls");
	
	do {

		cout << " --Citas para servicios medicos dentales-- \n" << endl;
		cout << "1.- Agendar cita" << endl;
		cout << "2.- Modificar cita" << endl;
		cout << "3.- Elminar cita" << endl;
		cout << "4.- Lista de citas vigentes" << endl;
		cout << "5.- Limpiar pantalla" << endl;
		cout << "6. - Salir" << endl;

		cout << "\n Ingrese la opcion que necesite: \n" << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			while (op == 1) {
				for (i = 0; i < 3; i++) {

					cit[i].Cita = i + 1;

					cout << "\nID de paciente: " << cit[i].Cita << endl;

					cout << "\nNombre del paciente:" <<  endl;
					cin >> cit[i].nom;

					cout << "\nEdad del paciente:" << endl;
					cin >> cit[i].ed;

					cout << "\nHora de tratamiento:" << endl;
					cin >> cit[i].ht;

					cout << "\nNombre del tratamiento:" << endl;
					cin >> cit[i].nt;

					cout << "\nDescripcion sobre el tratamiento:" <<  endl;
					cin >> cit[i].dt;

					cout << "\nPrecio unitario del tratamiento:" << endl;
					cin >> cit[i].put;

					cout << "\nCantidad necesaria del tratamiento:" << endl;
					cin >> cit[i].ct;

					cout << "\nPrecio unitario: " << endl;
					cin >> cit[i].pu;

					cout << "\nTotal: " << endl;
					cin >> cit[i].total;

					system("pause>nul");
					system("cls");

					cout << "\n Desea agendar otra cita?: \n" << endl;
					cout << "1.- Si" << endl;
					cout << "2.- No" << endl;
					cin >> op;


					
				}
				}
				break;


		case 2:

			break;

		case 3:

			break;

		case 4:
			cout << "¿Desea ver las cita vigentes? " << endl;
			cout << "1.- Si" << endl;
			cout << "2.- No" << endl;
			cin >> op;

			system("cls");

			while (op == 1) {

				for (i = 0; i < 3; i++) {

					cout << "\nID de cita: " << cit[i].Cita << endl;
					cout << "\nNombre del paciente: " << cit[i].nom << endl;
					cout << "\nEdad del paciente: " << cit[i].ed << endl;
					cout << "\nHora de tratamiento: " << cit[i].ht << endl;
					cout << "\nNombre del tratamiento " << cit[i].nt << endl;
					cout << "\nDescripcion sobre el tratamiento: " << cit[i].dt << endl;
					cout << "\nPrecio unitario del tratamiento: " << cit[i].put << endl;
					cout << "\nCantidad necesaria del tratamiento: " << cit[i].ct << endl;
					cout << "\nPrecio unitario: " << cit[i].pu << endl;
					cout << "\nTotal: " << cit[i].total << endl;

				}
				op = 0;

				system("pause>nul");
				system("cls");
			}
			break;

		case 5:
			system("cls");
			op = 5;
			break;

		case 6:
			exit(1);
			break;


		default:
			cout << "Por favor ingrese una opción valida \n" << endl;
			}
			if (op != 6)
			{
				cout << "Desea volver al menu?\n" << endl;
				cout << "1.- Si" << endl;
				cout << "2.- No" << endl;
				cin >> s;
			}
		} while (s == 1);
	}
