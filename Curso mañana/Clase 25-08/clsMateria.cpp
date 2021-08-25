///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
# include<cstring>

using namespace std;
///ESPECIFICADORES DE ACCESO
///private: los miembros privados de una clase sólo son accesibles de manera directa dentro de la clase
///public: los miembros públicos son accesibles tanto dentro como fuera de la clase
///protected

///ENCAPSULAMIENTO: las propiedades se definen en la parte privada de la clase.
///La clase provee un mecanismo de protección del valor de las variables de la clase.


///ABSTRACCION: permite ocultar los detalles. No hace falta pensar como hacer algo. Ese "hacer algo" ya está definido en la clase
class Materia{
    private:///propiedades
        int numeroMateria;
        char nombreMateria[42];
        int cantidadAlumnos;
        int cantidadDocentes;
    public:
        void Cargar();
        void Mostrar();
        ///gets()->para conocer fuera de la clase los valores de cada propiedad
        int getNumeroMateria(){return numeroMateria;}
        char *getNombreMateria(){return nombreMateria;}
        ///sets()->para cambiar los valores de cada propiedad
        void setNumeroMateria(const int nm){if(nm>0)nm=numeroMateria;}
        void setNombreMateria(const char* nm){strcpy(nombreMateria,nm);}

};

void Materia::Cargar(){
    cout<<"NUMERO DE MATERIA: ";
    cin>>numeroMateria;
    cout<<"NOMBRE DE MATERIA: ";
    cin>>nombreMateria;
    cout<<"CANTIDAD DE ALUMNOS: ";
    cin>>cantidadAlumnos;
    cout<<"CANTIDAD DE DOCENTES: ";
    cin>>cantidadDocentes;
}

void Materia::Mostrar(){
    cout<<"NUMERO DE MATERIA: ";
    cout<<numeroMateria<<endl;
    cout<<"NOMBRE DE MATERIA: ";
    cout<<nombreMateria<<endl;
    cout<<"CANTIDAD DE ALUMNOS: ";
    cout<<cantidadAlumnos<<endl;
    cout<<"CANTIDAD DE DOCENTES: ";
    cout<<cantidadDocentes<<endl;
}


int main(){
    Materia obj, aux, vec[5], *p;
    obj.Cargar();
    int nm;
  //  obj.Mostrar();
    cout<<obj.getNumeroMateria()<<endl;
    cout<<obj.getNombreMateria()<<endl;

    cin>>nm;
    obj.setNumeroMateria(nm);
    obj.setNombreMateria("PROGRAMACION II");

    cout<<obj.getNumeroMateria()<<endl;
    cout<<obj.getNombreMateria()<<endl;

  //  aux.Cargar();
  //  aux.Mostrar();
    /*
    int opc;
     while(true){
        system("cls");
        cout << "1. CARGAR DATOS MATERIAS" << endl;
        cout << "2. MOSTRAR DATOS MATERIAS" << endl;
        cout << "0. SALIR DEL PROGRAMA" << endl;
        cout << "**************************" << endl;
        cout << "SELECCIONE UNA OPCION: " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarDatosMaterias(vMaterias,2);
                    break;
            case 2: mostrarDatosMaterias(vMaterias,2);
                    break;
            case 3:
                    break;
            case 4:
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
    }*/
    return 0;
}
