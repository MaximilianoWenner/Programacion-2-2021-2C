#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///PROTOTIPOS

void cargarDatosMaterias(int vNroMat[], int *vCantAlu, int *vCantProf, char nomMat[20][42], int tam);
void mostrarDatosMaterias(int vNroMat[], int *vCantAlu, int *vCantProf, char nomMat[][42], int tam);
void cargarAccesos(int *accesoMaterias);
void puntoA(int *accesoMaterias);

///DESARROLLO DE FUNCIONES

void cargarDatosMaterias(int vNroMat[], int *vCantAlu, int *vCantProf, char (*nomMat)[42],int tam){
    int nroMateria, i;
    for(i=0;i<tam;i++){
        cout<<"NUMERO DE MATERIA: ";
        cin>>nroMateria;
        vNroMat[nroMateria-1]=nroMateria;
        cout<<"NOMBRE DE MATERIA: ";
        cin>>nomMat[nroMateria-1];
        cout<<"CANTIDAD DE ALUMNOS: ";
        cin>>vCantAlu[nroMateria-1];
        cout<<"CANTIDAD DE PROFESORES: ";
        cin>>vCantProf[nroMateria-1];
    }
}


void mostrarDatosMaterias(int vNroMat[], int *vCantAlu, int *vCantProf, char nomMat[][42],int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"NUMERO DE MATERIA: "<<vNroMat[i]<<"\t"<<"\t";
        cout<<"NOMBRE DE MATERIA: "<<nomMat[i]<<endl;
        cout<<"CANTIDAD DE ALUMNOS: "<<vCantAlu[i]<<"\t"<<"\t";
        cout<<"CANTIDAD DE PROFESORES: "<<vCantProf[i]<<endl;
        cout<<endl;
    }
}

void cargarAccesos(int *accesoMaterias){
    int legajo, dia, mes, nroMateria;
    float horas;
    cout<<"INGRESE EL LEGAJO: ";
    cin>>legajo;
    while(legajo!=0){
        cout<<"DIA: ";
        cin>>dia;
        cout<<"MES: ";
        cin>>mes;
        cout<<"MATERIA: ";
        cin>>nroMateria;
        cout<<"TIEMPO: ";
        cin>>horas;
        cout<<"INGRESE EL LEGAJO: ";
        cin>>legajo;

        ///para el punto a
        accesoMaterias[nroMateria-1]++;
    }

}

void puntoA(int *accesoMaterias){
    int i, tam=20;///tam es para el lote de pruebas que es de 6 materias
                /// ¡¡¡¡¡¡OJO!!! CAMBIAR A 20!!!!!!!!!!!!!!!!!!!!!!!!!!!
    cout<<"MATERIAS SIN ACCESO: "<<endl;
    for(i=0;i<tam;i++){
        if(accesoMaterias[i]==0){
            cout<<i+1<<endl;
        }
    }
}

#endif // FUNCIONES_H_INCLUDED
