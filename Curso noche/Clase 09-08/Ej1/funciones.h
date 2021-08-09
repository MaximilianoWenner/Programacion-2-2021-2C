#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///PROTOTIPOS
void cargarDatosMaterias(int *nMat,int *cantAlu,int *cantDoc, char nombres[][40], int tam);
void mostrarDatosMaterias(int *nMat,int *cantAlu,int *cantDoc, char nombres[][40], int tam);
void cargarDatosAccesos(int *cantAccesos);
void puntoA(int *cantAccesos, int tam);
void puntoB(){}
void puntoC(){}



///DESARROLLO FUNCIONES
void cargarDatosMaterias(int *nMat,int *cantAlu,int *cantDoc, char nombres[][40], int tam){
    int i;
    cout<<"CARGA DE MATERIAS"<<endl;
    for(i=0;i<tam;i++){
        cout<<"NUMERO DE MATERIA: ";
        cin>>nMat[i];
        cout<<"NOMBRE DE MATERIA: ";
        cin>>nombres[i];
        cout<<"CANTIDAD DE ALUMNOS: ";
        cin>>cantAlu[i];
        cout<<"CANTIDAD DE DOCENTES: ";
        cin>>cantDoc[i];
    }
}

void mostrarDatosMaterias(int *nMat,int *cantAlu,int *cantDoc, char nombres[][40], int tam){
    int i;
    cout<<"CARGA DE MATERIAS"<<endl;
    for(i=0;i<tam;i++){
        cout<<"NUMERO DE MATERIA: "<<nMat[i]<<endl;
        cout<<"NOMBRE DE MATERIA: "<<nombres[i]<<endl;
        cout<<"CANTIDAD DE ALUMNOS: "<<cantAlu[i]<<endl;
        cout<<"CANTIDAD DE DOCENTES: "<<cantDoc[i]<<endl<<endl;
    }
}

void cargarDatosAccesos(int *cantAccesos){
    int legajo, dia, mes, nroMateria;
    float horas;
    cout<<"INGRESE EL LEGAJO: ";
    cin>>legajo;
    while(legajo!=0){
        cout<<"INGRESE EL DIA: ";
        cin>>dia;
        cout<<"INGRESE EL MES: ";
        cin>>mes;
        cout<<"INGRESE MATERIA: ";
        cin>>nroMateria;
        cout<<"INGRESE EL TIEMPO: ";
        cin>>horas;
        cout<<"INGRESE EL LEGAJO: ";
        cin>>legajo;

        ///para el punto a
        cantAccesos[nroMateria-1]++;
    }

}

void puntoA(int *cantAccesos, int tam){
    int i;
    cout<<"MATERIAS SIN ACCESOS"<<endl;
    for(i=0;i<tam;i++){
        if(cantAccesos[i]==0) cout<<i+1<<endl;
    }
}

#endif // FUNCIONES_H_INCLUDED
