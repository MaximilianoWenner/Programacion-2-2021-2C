#include <iostream>

using namespace std;

#include "funciones.h"

int main(){
    int opc;
    ///para las materias
    int vNumeroMaterias[20], vCantidadAlumnos[20], vCantidadProfes[20];
    char nombresMaterias[20][42];
    ///para el punto a
    int vAccesoMaterias[20]={0};
    while(true){
        system("cls");
        cout << "1. CARGAR DATOS MATERIAS" << endl;
        cout << "2. MOSTRAR DATOS MATERIAS" << endl;
        cout << "3. CARGAR ACCESOS" << endl;
        cout << "4. MATERIAS SIN ACCESOS" << endl;
        cout << "5. MATERIA CON MAS HORAS DE ACCESO" << endl;
        cout << "6. ACCESOS MARZO" << endl;
        cout << "0. SALIR DEL PROGRAMA" << endl;
        cout << "**************************" << endl;
        cout << "SELECCIONE UNA OPCION: " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarDatosMaterias(vNumeroMaterias, vCantidadAlumnos, vCantidadProfes, nombresMaterias,6);
                    break;
            case 2: mostrarDatosMaterias(vNumeroMaterias, vCantidadAlumnos, vCantidadProfes, nombresMaterias,6);
                    break;
            case 3: cargarAccesos(vAccesoMaterias);
                    break;
            case 4: puntoA(vAccesoMaterias);
                    break;
            case 5:
                    break;
            case 6:
                    break;
            case 0: return 0;
                    break;
            default: cout<<"OPCION INCORRECTA. VUELVA A INGRESAR"<<endl;
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
5
INGLES
115
2


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
0*/
