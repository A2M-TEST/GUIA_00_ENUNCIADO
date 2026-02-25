#ifndef DICCIONARIO_H
#define DICCIONARIO_H

typedef struct diccionario diccionario_t;

diccionario_t* diccionario_crear();
int diccionario_insertar(diccionario_t* d, char* clave, void* valor);
void* diccionario_buscar(diccionario_t* d, char* clave);
void diccionario_eliminar(diccionario_t* d);

#endif