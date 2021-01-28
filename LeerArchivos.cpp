#include "LeerAchivos.h"

QList<Plataforma*> cargarPlataformas(string nombre)
{
    QList <Plataforma*> plataformas;
    int texto[4]={0,0,0,0};
    ifstream archivo;
    string  aux;

    archivo.open(nombre);
    if (archivo.is_open()){
        while (!archivo.eof()) {
            getline(archivo,aux);

            for (int i = 0;  i<4; i++){
                texto [i]= stoi( aux.substr(0,aux.find(",")));
                aux = aux.substr(aux.find(",")+1,aux.size());
            }

            plataformas.append(new Plataforma(texto[0],texto[1],texto[2],texto[3]));

        }
        archivo.close();
    }
    else{
        cout << "Error al abrir el archivo." << endl;
        exit(1);
    }

    return plataformas;
}
