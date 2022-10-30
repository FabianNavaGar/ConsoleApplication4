#include <iostream>
#include<string>
#include <windows.h>  
#include <stdlib.h>

using namespace std;

class Person {
private:
	int Opc;
	int Resp;
	int Terr;
	int Puntaje;
public:
	Person(int opc, int resp, int terr, int punt) {
		Opc = opc;
		Resp = resp;
		Terr = terr;
		Puntaje = punt;
	}

	void Carlos() {
		int opc, resp;
		int terr, punt = 0;

		system("cls");

		terr = 0;

		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Carlos Alberto Huerta Torres" << endl << "Sexo:Masculino" << endl << "Edad: 24" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 335511331577" << endl;
		cout << "Duracion de Estancia: 4 semanas" << endl;
		cout << "---------------------------------------" << endl;

		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Carlos Alberto Huerta Torres" << endl << "Sexo:Masculino" << endl << "Edad: 24" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 335511241577" << endl;
		cout << "-------------------------------------------" << endl;

		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Carlos Alberto Huerta Torres" << endl << "Sexo:Masculino" << endl << "Edad: 24" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 335511331577" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "---------Revise la documentacion-----------" << endl;

		cout << "Existe algun dato que sea diferente" << endl << endl;
		cout << "1-Si" << endl << "2-No" << endl << endl;
		cout << ":";
		cin >> resp;
		cout << endl;
		switch (resp) {
		case 1:
			cout << "Que dato no corresponde: " << endl;
			cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl << endl;
			cout << ":";
			cin >> resp;
			system("cls");
			if (resp == 1) {
				cout << "Tu-Senior Carlos su documento tiene el Nombre Mal" << endl;
				system("pause");
				cout << "Carlos- Pero como, si sabe leer senior, solo me esta poniendo pretextos" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
			else if (resp == 2) {
				cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
				system("pause");
				cout << "Carlos----Pero si la edad es la misma yo mismo la revise" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 3) {
				cout << "Su Sexo esta mal" << endl;
				cout << "Carlos----Pero COMOOOOOO" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 2;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 4) {
				cout << "Mr.Carlos su Numero de Ide no coincide en los documentos" << endl;
				cout << "Carlos---Vaya que mala pata" << endl << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl << endl;
				cout << ":";
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					system("cls");
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 5) {
				cout << "Carlos su Nacionalidad es incosistente en ambos Documentos" << endl;
				cout << "Carlos------ Ah caray pero si soy Mexicano, que no me ve" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}

			else if (resp == 6) {
				cout << "Su duracion en nuestro pais es diferente en cada Documento" << endl;
				cout << "Carlos---Achis como si me voy a quedar 4 semanas ahi dice" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			break;
		case 2:
			cout << "Permitir Entrar a Carlos" << endl << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			if (resp == 1) {
				cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
				punt = punt - 2;
				cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
				cout << "Tu puntaje es: " << punt << endl;
			}
			else if (resp == 2) {
				cout << "Su acceso a sido denegado" << endl;
				punt = punt + 1;
				cout << "Tu decision fue correcta" << endl;
				cout << "Tu puntaje es de: " << punt << endl;
			}
			break;
		}
		system("pause");
		system("cls");
	}

	void Maria() {
		int opc, resp;
		int terr, punt;
		terr = 0;

		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Maria Galilea Perez Cornejo" << endl << "Sexo:Femenino" << endl << "Edad: 35" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 445512184745" << endl;
		cout << "Duracion de Estancia: 6 Meses" << endl;
		cout << "---------------------------------------" << endl;
		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Maria Galilea Perez Cornejo" << endl << "Sexo:Femenino" << endl << "Edad: 35" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 445512184745" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Maria Galilea Perez Cornejo" << endl << "Sexo:Femenino" << endl << "Edad: 35" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 445512184745" << endl;
		cout << "-------------------------------------------" << endl;

		cout << "---------Revise la documentacion-----------" << endl;
		cout << "Existe algun dato que sea diferente" << endl;
		cout << "1-Si" << endl << "2-No" << endl;
		cin >> resp;

		switch (resp) {
		case 1:
			cout << "Que dato no corresponde: " << endl;
			cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
			cin >> resp;
			if (resp == 1) {
				cout << "Tu-Maria su documento tiene el Nombre Mal" << endl;
				system("pause");
				cout << "Maria-Solo me esta poniendo pretextos" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
			else if (resp == 2) {
				cout << "Disculpe seniorita la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
				system("pause");
				cout << "Maria----Pero si la edad esa es mi edad" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 3) {
				cout << "Su Sexo esta mal" << endl;
				cout << "Maria----Pero COMOOOOOO si soy MUJER" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 4) {
				cout << "Ms.Maria su Numero de Ide no coincide en los documentos" << endl;
				cout << "Maria---Comprese lentes porque no ve bien, CIEGO" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 5) {
				cout << "Maria su Nacionalidad es incosistente en ambos Documentos" << endl;
				cout << "Maria------ Puros pretextos, mejor ya diga que no y nos dejamos de rodeos" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}

			else if (resp == 6) {
				cout << "Su duracion en nuestro pais es diferente en cada Documento" << endl;
				cout << "Maria---Pero si no menti" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			break;
		case 2:
			cout << "Permitir Entrar a Maria" << endl << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			if (resp == 1) {
				cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
				punt = punt + 2;
				cout << "Tu puntaje es: " << punt << endl;
			}
			else if (resp == 2) {
				cout << "Su acceso a sido denegado" << endl;
				punt = punt - 2;
				cout << "Tu decision fue incorrecta" << endl;
				cout << "Tu puntaje es de: " << punt << endl;
			}
			break;
		}
		system("pause");
	}

	void Jose() {
		int opc, resp;
		int terr, punt = 0;
		terr = 1;
		system("cls");
		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Jose Alfredo Jimenez Solis " << endl << "Sexo:Masculino" << endl << "Edad: 27" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 758**941235641" << endl;
		cout << "Duracion de Estancia: 2 Meses" << endl;
		cout << "---------------------------------------" << endl;
		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Jose Alfredo Jimenez Solis " << endl << "Sexo:Masculino" << endl << "Edad: 27" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 758**941235641" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Jose Alfredo Jimenez Solis " << endl << "Sexo:Masculino" << endl << "Edad: 37" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 758**941235641" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------------------Para Activar el escaner presione 1------------------" << endl;
		cout << "------------------------Para Revision de documentos presione 2------------------" << endl;
		cin >> opc;
		if (opc == 1) {
			if (terr == 1) {
				cout << "Es Terrorista" << endl;
				cout << "Para detener al terrorista presione 1" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Jose ha sido Detenido por Terrorismo" << endl;
					cout << "Jose-----Me han descubierto" << endl;
					punt = punt + 3;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (terr == 0) {
				cout << "No es Terrorista" << endl;
				cout << "---------Revision de la documentacion-----------" << endl;
				cout << "Existe algun dato que sea diferente" << endl;
				cout << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				switch (resp) {
				case 1:
					cout << "Que dato no corresponde: " << endl;
					cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Tu-Senior Jose su documento tiene el Nombre Mal" << endl;
						system("pause");
						cout << "Jose- Revise de una vez mas" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
						break;
					}
					else if (resp == 2) {
						cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
						system("pause");
						cout << "Jose----Diablos como esto pudo afectar el plan" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 3) {
						cout << "Su Sexo esta mal" << endl;
						cout << "Jose----Pero soy hombre " << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 4) {
						cout << "Mr.Jose su Numero de Ide no coincide en los documentos" << endl;
						cout << "Jose---No diga Mentiras" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con la Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 5) {
						cout << "Jose su Nacionalidad es incosistente en ambos Documentos" << endl;
						cout << "Jose------ Soy la representacion andante de Mexicano, No me diga a mi esas fregaderas" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}

					else if (resp == 6) {
						cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
						cout << "Jose---Esta usted tonto, o lo tiraron de niño" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					break;
				case 2:
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
			}
		}
		else
		{
			cout << "---------Revision de la documentacion-----------" << endl;
			cout << "Existe algun dato que sea diferente" << endl;
			cout << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			switch (resp) {
			case 1:
				cout << "Que dato no corresponde: " << endl;
				cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Tu-Senior Jose su documento tiene el Nombre Mal" << endl;
					system("pause");
					cout << "Jose- Revise de una vez mas" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
				else if (resp == 2) {
					cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
					system("pause");
					cout << "Jose----Diablos como esto pudo afectar el plan" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 3) {
					cout << "Su Sexo esta mal" << endl;
					cout << "Jose----Pero soy hombre " << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 4) {
					cout << "Mr.Jose su Numero de Ide no coincide en los documentos" << endl;
					cout << "Jose---No diga Mentiras" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 5) {
					cout << "Jose su Nacionalidad es incosistente en ambos Documentos" << endl;
					cout << "Jose------ Soy la representacion andante de Mexicano, No me diga a mi esas fregaderas" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}

				else if (resp == 6) {
					cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
					cout << "Jose---Esta usted tonto, o lo tiraron de niño" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				break;
			case 2:
				cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 3;
					cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
		}
		system("pause");

	}
};

int main(int argc, char** argv) {

	int opc, resp;
	int terr, punt = punt;
	do {
		system("cls");
		Person sqr = Person(opc, resp, terr, punt);

		cout << "--------------------Paper´s Please-----------------------" << endl;

		cout << "1-Comenzar" << endl << "2.Salir del Juego" << endl;
		cout << ":";

		cin >> opc;
		switch (opc) {

		case 1:
			sqr.Carlos();
			sqr.Maria();
			system("cls");
			cout << "Dia Finalizado" << endl;
			system("pause");
			system("cls");
			cout << "-----------------------------Ultimas Noticias--------------------" << endl;
			cout << "Cuidado se han infiltrado algunos terroristas que buscan cruzar la frontera, para identificarlos Busca '*' en la pantalla" << endl;
			cout << "-----------------------------------------------------------------" << endl;
			system("Pause");
			sqr.Jose();
			system("cls");
			cout << "Tu puntaje final es de: " << punt << endl;
			break;
		case 2:
			system("cls");
			cout << "Gracias por jugar" << endl;
			exit(0);

			break;
		default:
			cout << "Esa opcion NO EXISTE" << endl;
			break;

		}
		cout << "Para volver al menu principal presione 1" << endl;
		cin >> opc;
	} while (opc == 1);
}