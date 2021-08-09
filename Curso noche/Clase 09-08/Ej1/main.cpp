#include <iostream>
#include <cstring>


using namespace std;

#include "funciones.h"


int main(){
    int opc;
    ///PARA LAS MATERIAS
    int nMaterias[20], cantAlumnos[20], cantDocentes[20];
    char nombresMaterias[20][40];
    ///
    ///PARA LA RESOLUCIÓN DE LOS PUNTOS
    int cantAccesos[20]={0};///para el punto a
    while(true){
        system("cls");
        cout << "1. CARGAR DATOS MATERIAS" << endl;
        cout << "2. MOSTRAR DATOS MATERIAS" << endl;
        cout << "3. CARGAR DATOS ACCESOS" << endl;
        cout << "4. MATERIAS SIN ACCESO" << endl;
        cout << "5. MATERIA MAS ACCESOS" << endl;
        cout << "6. CURSOS MARZO" << endl;
        cout << "0. FIN DEL PROGRAMA" << endl;
        cout << "----------------" << endl;
        cout<<"SELECCIONE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarDatosMaterias(nMaterias, cantAlumnos, cantDocentes, nombresMaterias, 6);
                    break;
            case 2: mostrarDatosMaterias(nMaterias, cantAlumnos, cantDocentes, nombresMaterias, 6);
                    break;
            case 3: cargarDatosAccesos(cantAccesos);
                    break;
            case 4: puntoA(cantAccesos, 6);
                    break;
            case 5: puntoB();
                    break;
            case 6: puntoC();
                    break;
            case 0: return 0;
                    break;
            default:cout<<"OPCION INCORRECTA. INGRESE NUEVAMENTE"<<endl;
                    break;

        }
        system("pause");
    }
    return 0;
}

/*
4
Lab1
100
5
3
PR1
120
4
1
Lab2
90
6
2
PR2
95
4
6
ARSO
130
3
5INGLES
115
2


Accesos
12114
2
1
5
3.5
4563
6
3
4
2
11234
5
3
2
1
145678
4
3
6
1.3
0
*/
