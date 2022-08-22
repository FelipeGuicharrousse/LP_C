#include "animal.h"

/*CrearAnimal
———————–
a : Animal*
————————
crea un animal pidiendo los datos por teclado al usuario*/

void CrearAnimal(Animal* a){
    a->fuerza = NULL;
    a->velocidad = NULL;
    a->resistencia = NULL;

    printf("\n");
    printf("Entregar variables: Fuerza\n");
    printf("Ingrese el tipo de dato\n");
    printf("Si la variable fuerza sera un entero ingresar: \"e\" \n");
    printf("Si la variable fuerza sera un caracter ingresar: \"c\" \n");
    printf("Si la variable fuerza sera un flotante/decimal ingresar: \"f\" \n");
    printf("Ingresar: ");
    scanf(" %c", &a->tipo_fuerza);
    while (a->tipo_fuerza != 'e' && a->tipo_fuerza != 'f' && a->tipo_fuerza != 'c')
    {
        printf("\n");
        printf("Error al ingresar el tipo de dato. Recuerde que:\n");
        printf("Si la variable fuerza sera un entero ingresar: \"e\" \n");
        printf("Si la variable fuerza sera un caracter ingresar: \"c\" \n");
        printf("Si la variable fuerza sera un flotante/decimal ingresar: \"f\" \n");
        printf("Ingresar: ");
        scanf(" %c", &a->tipo_fuerza);
    }
    
    switch(a->tipo_fuerza){
        case 'e': /* Cuando se elija entero*/
            a->fuerza = (int*)malloc(sizeof(int));
            printf("Ingrese el valor: ");
            scanf("%i", (int*)a->fuerza);
            break;
        case 'c': /* Cuando se elija caracter*/
            a->fuerza = (char*)malloc(sizeof(char));
            printf("Ingrese el valor: ");
            scanf(" %c", (char*)a->fuerza);
            break;
        case 'f': /* Cuando se elija float*/
            a->fuerza = (float*)malloc(sizeof(float));
            printf("Ingrese el valor: ");
            scanf("%f", (float*)a->fuerza);
            break;
    }

    printf("\n");
    printf("Entregar variables: Velocidad\n");
    printf("Ingrese el tipo de dato\n");
    printf("Si la variable velocidad sera un entero ingresar: \"e\" \n");
    printf("Si la variable velocidad sera un caracter ingresar: \"c\" \n");
    printf("Si la variable velocidad sera un flotante/decimal ingresar: \"f\" \n");
    printf("Ingresar: ");
    scanf(" %c", &a->tipo_velocidad);
    while (a->tipo_velocidad != 'e' && a->tipo_velocidad != 'f' && a->tipo_velocidad != 'c')
    {
        printf("Error al ingresar el tipo de dato. Recuerde que:\n");
        printf("Si la variable velocidad sera un entero ingresar: \"e\" \n");
        printf("Si la variable velocidad sera un caracter ingresar: \"c\" \n");
        printf("Si la variable velocidad sera un flotante/decimal ingresar: \"f\" \n");
        printf("Ingresar: ");
        scanf(" %c", &a->tipo_velocidad);
    }

    switch(a->tipo_velocidad){
        case 'e':
            a->velocidad = (int*)malloc(sizeof(int));
            printf("Ingrese el valor: ");
            scanf("%i", (int*)a->velocidad);
            break;
        case 'c':
            a->velocidad = (char*)malloc(sizeof(char));
            printf("Ingrese el valor: ");
            scanf(" %c", (char*)a->velocidad);
            break;
        case 'f':
            a->velocidad = (float*)malloc(sizeof(float));
            printf("Ingrese el valor: ");
            scanf("%f", (float*)a->velocidad);
            break;
    }

    printf("\n");
    printf("Entregar variables: Resistencia\n");
    printf("Ingrese el tipo de dato\n");
    printf("Si la variable resistencia sera un entero ingresar: \"e\" \n");
    printf("Si la variable resistencia sera un caracter ingresar: \"c\" \n");
    printf("Si la variable resistencia sera un flotante/decimal ingresar: \"f\" \n");
    printf("Ingresar: ");
    scanf(" %c", &a->tipo_resistencia);
    while (a->tipo_resistencia != 'e' && a->tipo_resistencia != 'f' && a->tipo_resistencia != 'c')
    {
        printf("Error al ingresar el tipo de dato. Recuerde que:\n");
        printf("Si la variable resistencia sera un entero ingresar: \"e\" \n");
        printf("Si la variable resistencia sera un caracter ingresar: \"c\" \n");
        printf("Si la variable resistencia sera un flotante/decimal ingresar: \"f\" \n");
        printf("Ingresar: ");
        scanf(" %c", &a->tipo_resistencia);
    }

    switch(a->tipo_resistencia){
        case 'e':
            a->resistencia = (int*)malloc(sizeof(int));
            printf("Ingrese el valor: ");
            scanf("%i", (int*)a->resistencia);
            break;
        case 'c':
            a->resistencia = (char*)malloc(sizeof(char));
            printf("Ingrese el valor: ");
            scanf(" %c", (char*)a->resistencia);
            break;
        case 'f':
            a->resistencia = (float*)malloc(sizeof(float));
            printf("Ingrese el valor: ");
            scanf("%f", (float*)a->resistencia);
            break;
    }

    printf("\n");
    printf("Funciones de reproduccion:\n");
    printf("    1. ReproduccionSimple\n");
    printf("    2. ReproduccionCruzada\n");
    printf("Ingrese el numero de funcion: ");
    int funcion;
    scanf("%i", &funcion);
    while (funcion != 1 && funcion != 2)
    {
        printf("/n");
        printf("Error al ingresar el tipo de dato. Recuerde que:\n");
        printf("Funciones de reproduccion:\n");
        printf("    1. ReproduccionSimple\n");
        printf("    2. ReproduccionCruzada\n");
        printf("Ingrese el numero de funcion: ");
        scanf("%i", &funcion);
    }

    switch(funcion){
        case 1:
            a->reproduccion = ReproduccionSimple;
            break;
        case 2:
            a->reproduccion = ReproduccionCruzada;
            break;
    }
    
    printf("\n");
    printf("Funciones de comerHuir:\n");
    printf("    1. ComerSiempre\n");
    printf("    2. HuirSiempre\n");
    printf("    3. ComerAleatorio\n");
    printf("Ingrese el tipo de dato: ");
    scanf("%i", &funcion);
    while (funcion != 1 && funcion != 2 && funcion != 3)
    {
        printf("/n");
        printf("Error al ingresar el tipo de dato. Recuerde que:\n");
        printf("Funciones de comerHuir:\n");
        printf("    1. ComerSiempre\n");
        printf("    2. HuirSiempre\n");
        printf("    3. ComerAleatorio\n");
        printf("Ingrese el tipo de dato: ");
        scanf("%i", &funcion);
    }
    switch(funcion){
        case 1:
            a->comerHuir = ComerSiempre;
            break;
        case 2:
            a->comerHuir = HuirSiempre;
            break;
        case 3:
            a->comerHuir = ComerAleatorio;
            break;
    }
};


/*Borrar
———————–
a : Animal*
————————
Borra un animal colocando todos sus punteros en NULL y liberando memoria*/
void Borrar(Animal* a){
    a->tipo_fuerza = '\0';
    a->tipo_velocidad = '\0';
    a->tipo_resistencia = '\0';
    a->fuerza = NULL;
    a->velocidad = NULL;
    a->resistencia = NULL;
    a->reproduccion = NULL;
    a->comerHuir = NULL;
    free(a->fuerza);
    free(a->velocidad);
    free(a->resistencia);
    free(a->reproduccion);
    free(a->comerHuir);
};

/*MostrarAnimal
———————–
a : Animal*
————————
Muestra por pantalla a un struct en especifico*/
void MostrarAnimal(Animal* a){
    printf("\n");
    switch(a->tipo_fuerza){
        case 'e':
            printf("fuerza : %i\n", *(int*)a->fuerza);
            break;
        case 'c':
            printf("fuerza : %c\n", *(char*)a->fuerza);
            break;
        case 'f':
            printf("fuerza : %.2f\n", *(float*)a->fuerza); /* Aqui falta redondear*/
            break;
    }
    switch(a->tipo_velocidad){
        case 'e':
            printf("velocidad : %i\n", *(int*)a->velocidad);
            break;
        case 'c':
            printf("velocidad : %c\n", *(char*)a->velocidad);
            break;
        case 'f':
            printf("velocidad : %.2f\n", *(float*)a->velocidad); /* Aqui falta redondear*/
            break;
    }
    switch(a->tipo_resistencia){
        case 'e':
            printf("resistencia : %i\n", *(int*)a->resistencia);
            break;
        case 'c':
            printf("resistencia : %c\n", *(char*)a->resistencia);
            break;
        case 'f':
            printf("resistencia : %.2f\n", *(float*)a->resistencia); /* Aqui falta redondear*/
            break;
    }
};

/*Reproducir
———————–
a1 : Animal*
a2 : Animal*
hijo : Animal*
————————
Elige al azar uno de los dos animales y va hacia la funcion reproducir de ese animal*/
void Reproducir(Animal* a1 , Animal* a2 , Animal* hijo){
    int aleatorio = rand() % 2; /*Lanza aleatoriamente el numero 0 y 1*/
    switch(aleatorio){
        case 0:
            printf("Se ha elegido el primer animal\n");
            a1->reproduccion(a1,a2,hijo);
            break;
        case 1:
            printf("Se ha elegido el segundo animal\n");
            a2->reproduccion(a2,a1,hijo);
            break;
    }

};


/*ComerOHuir
———————–
a1 : Animal*
a2 : Animal*
————————
Elige al azar uno de los dos animales y va hacia la funcion comerhuir de ese animal*/
void ComerOHuir(Animal* a1 , Animal* a2){
    int aleatorio = rand() % 2; /*Lanza aleatoriamente el numero 0 y 1*/
    switch(aleatorio){
        case 0:
            printf("Se ha elegido el primer animal\n");
            a1->comerHuir(a1,a2);
            break;
        case 1:
            printf("Se ha elegido el segundo animal\n");
            a2->comerHuir(a2,a1);
            break;
    }
};


/*Comparar
———————–
a1 : Animal*
a2 : Animal*
————————
Cambia todos los valores de los animales a enteros para luego compararlos, retorna un
0 si el a1 es mejor que el a2*/
int Comparar(Animal* a1, Animal* a2){
    int valor_fuerza1, valor_fuerza2, valor_velocidad1, valor_velocidad2, valor_resistencia1, valor_resistencia2;
    switch(a1->tipo_fuerza){
        case 'e':
            valor_fuerza1 = *(int*)a1->fuerza;
            break;
        case 'c':
            valor_fuerza1 = ((int)(*(char*)a1->fuerza)) / 4;
            break;
        case 'f':
            valor_fuerza1 = (int)round(*(float*)a1->fuerza);
            break;
    }
    switch(a1->tipo_velocidad){
        case 'e':
            valor_velocidad1 = *(int*)a1->velocidad;
            break;
        case 'c':
            valor_velocidad1 = ((int)(*(char*)a1->velocidad)) / 4;
            break;
        case 'f':
            valor_velocidad1 = (int)round(*(float*)a1->velocidad);
            break;
    }
    switch(a1->tipo_resistencia){
        case 'e':
            valor_resistencia1 = *(int*)a1->resistencia;
            break;
        case 'c':
            valor_resistencia1 = ((int)(*(char*)a1->resistencia)) / 4;
            break;
        case 'f':
            valor_resistencia1 = (int)round(*(float*)a1->resistencia);
            break;
    }


    switch(a2->tipo_fuerza){
        case 'e':
            valor_fuerza2 = *(int*)a2->fuerza;
            break;
        case 'c':
            valor_fuerza2 = ((int)(*(char*)a2->fuerza)) / 4;
            break;
        case 'f':
            valor_fuerza2 = round(*(float*)a2->fuerza);
            break;
    }
    switch(a2->tipo_velocidad){
        case 'e':
            valor_velocidad2 = *(int*)a2->velocidad;
            break;
        case 'c':
            valor_velocidad2 = ((int)(*(char*)a2->velocidad)) / 4;
            break;
        case 'f':
            valor_velocidad2 = (int)round(*(float*)a2->velocidad);
            break;
    }
    switch(a2->tipo_resistencia){
        case 'e':
            valor_resistencia2 = *(int*)a2->resistencia;
            break;
        case 'c':
            valor_resistencia2 = ((int)(*(char*)a2->resistencia)) / 4;
            break;
        case 'f':
            valor_resistencia2 = (int)round(*(float*)a2->resistencia);
            break;
    }
    
    int puntos_a_favor = 0;
    if (valor_fuerza1 > valor_fuerza2){
        puntos_a_favor += 1;
    }
    if (valor_resistencia1 > valor_resistencia2){
        puntos_a_favor += 1;
    }
    if (valor_velocidad1 > valor_velocidad2){
        puntos_a_favor += 1;
    }


    if (puntos_a_favor > 0){
        return 0;
    }
    return 1;
};


/*entregarSimple
———————–
hijo : Animal*
a : Animal*
————————
Le entregamos todos los valores que tiene a, se lo damos al struct hijo*/
void entregarSimple(Animal* hijo, Animal* a){
    hijo->tipo_fuerza = a->tipo_fuerza;
    hijo->tipo_resistencia = a->tipo_resistencia;
    hijo->tipo_velocidad = a->tipo_velocidad;
    switch(hijo->tipo_fuerza){
        case 'c':
            hijo->fuerza = (char*)malloc(sizeof(char));
            hijo->fuerza = a->fuerza;
            break;
        case 'e':
            hijo->fuerza = (int*)malloc(sizeof(int));
            hijo->fuerza = a->fuerza;
            break;
        case 'f':
            hijo->fuerza = (float*)malloc(sizeof(float));
            hijo->fuerza = a->fuerza;
            break;
    }
    switch(hijo->tipo_resistencia){
        case 'c':
            hijo->resistencia = (char*)malloc(sizeof(char));
            hijo->resistencia = a->resistencia;
            break;
        case 'e':
            hijo->resistencia = (int*)malloc(sizeof(int));
            hijo->resistencia = a->resistencia;
            break;
        case 'f':
            hijo->resistencia = (float*)malloc(sizeof(float));
            hijo->resistencia = a->resistencia;
            break;
    }
    switch(hijo->tipo_velocidad){
        case 'c':
            hijo->velocidad = (char*)malloc(sizeof(char));
            hijo->velocidad = a->velocidad;
            break;
        case 'e':
            hijo->velocidad = (int*)malloc(sizeof(int));
            hijo->velocidad = a->velocidad;
            break;
        case 'f':
            hijo->velocidad = (float*)malloc(sizeof(float));
            hijo->velocidad = a->velocidad;
            break;
    }
    hijo->reproduccion = a->reproduccion;
    hijo->comerHuir = a->comerHuir;
};


/*reproduccionSimple
———————–
a1 : Animal*
a2 : Animal*
hijo : Animal*
————————
Le entregamos todos los valores al animal que tenga mejores caracteristicas*/
void ReproduccionSimple(Animal* a1, Animal* a2 , Animal* hijo){
    if (Comparar(a1,a2) == 0){
        entregarSimple(hijo,a1);
    }else{
        entregarSimple(hijo,a2);
    }
};


/*entregarCruzado
———————–
a0 : Animal*
a1 : Animal*
hijo : Animal*
————————
De a0 le entregamos la fuerza, la velocidad y reproduccion y de a1 le entregamos 
la resistencia y comerHuir*/
void entregarCruzado(Animal* hijo, Animal* a0, Animal* a1){
    hijo->tipo_fuerza = a0->tipo_fuerza;
    hijo->tipo_velocidad = a0->tipo_velocidad;
    hijo->reproduccion = a0->reproduccion;
    switch(hijo->tipo_fuerza){
        case 'c':
            hijo->fuerza = (char*)malloc(sizeof(char));
            hijo->fuerza = a0->fuerza;
            break;
        case 'e':
            hijo->fuerza = (int*)malloc(sizeof(int));
            hijo->fuerza = a0->fuerza;
            break;
        case 'f':
            hijo->fuerza = (float*)malloc(sizeof(float));
            hijo->fuerza = a0->fuerza;
            break;
    }
    switch(hijo->tipo_velocidad){
        case 'c':
            hijo->velocidad = (char*)malloc(sizeof(char));
            hijo->velocidad = a0->velocidad;
            break;
        case 'e':
            hijo->velocidad = (int*)malloc(sizeof(int));
            hijo->velocidad = a0->velocidad;
            break;
        case 'f':
            hijo->velocidad = (float*)malloc(sizeof(float));
            hijo->velocidad = a0->velocidad;
            break;
    }

    hijo->resistencia = a1->resistencia;
    hijo->comerHuir = hijo->comerHuir;
    switch(hijo->tipo_resistencia){
        case 'c':
            hijo->resistencia = (char*)malloc(sizeof(char));
            hijo->resistencia = a1->resistencia;
            break;
        case 'e':
            hijo->resistencia = (int*)malloc(sizeof(int));
            hijo->resistencia = a1->resistencia;
            break;
        case 'f':
            hijo->resistencia = (float*)malloc(sizeof(float));
            hijo->resistencia = a1->resistencia;
            break;
    }


}


/*reproduccioncruzada
———————–
a1 : Animal*
a2 : Animal*
hijo : Animal*
————————
Del animal de mejores caracteristicas le entregamosla fuerza, la velocidad y reproduccion 
y de peores caracteristicas le entregamos la resistencia y comerHuir*/
void ReproduccionCruzada(Animal* a1, Animal* a2 , Animal* hijo){
    if (Comparar(a1,a2) == 0){
        entregarCruzado(hijo, a1, a2);
    }else{
        entregarCruzado(hijo, a2, a1);
    }
};


/*ComerSiempre
———————–
a1 : Animal*
a2 : Animal*
————————
Vemos cual de los dos animales es mas fuerte, el que sea mas debil es el que muere*/
void ComerSiempre(Animal* a1, Animal* a2){
    int valor_fuerza1, valor_resistencia2;
    switch(a1->tipo_fuerza){
        case 'e':
            valor_fuerza1 = *(int*)a1->fuerza;
            break;
        case 'c':
            valor_fuerza1 = ((int)(*(char*)a1->fuerza)) / 4;
            break;
        case 'f':
            valor_fuerza1 = (int)round(*(float*)a1->fuerza);
            break;
    }
    switch(a2->tipo_resistencia){
        case 'e':
            valor_resistencia2 = *(int*)a2->resistencia;
            break;
        case 'c':
            valor_resistencia2 = ((int)(*(char*)a2->resistencia)) / 4;
            break;
        case 'f':
            valor_resistencia2 = (int)round(*(float*)a2->resistencia);
            break;
    }
    if (valor_fuerza1 > valor_resistencia2){
        entregarSimple(a2,a1);
        Borrar(a1);
    }else{
        Borrar(a1);
    }
};


/*HuirSiempre
———————–
a1 : Animal*
a2 : Animal*
————————
Si el animal a1 es mas rapido entonces a1 vive, pero sino a1 muere*/
void HuirSiempre(Animal* a1, Animal* a2){
    int valor_velocidad1, valor_velocidad2;
    switch(a1->tipo_velocidad){
        case 'e':
            valor_velocidad1 = *(int*)a1->velocidad;
            break;
        case 'c':
            valor_velocidad1 = ((int)(*(char*)a1->velocidad)) / 4;
            break;
        case 'f':
            valor_velocidad1 = (int)round(*(float*)a1->velocidad);
            break;
    }
    switch(a2->tipo_velocidad){
        case 'e':
            valor_velocidad2 = *(int*)a2->velocidad;
            break;
        case 'c':
            valor_velocidad2 = ((int)(*(char*)a2->velocidad)) / 4;
            break;
        case 'f':
            valor_velocidad2 = (int)round(*(float*)a2->velocidad);
            break;
    }
    if (valor_velocidad1 > valor_velocidad2){
        printf("pasa algo");
    }else{
        Borrar(a1);
    }
};


/*ComerAleatorio
———————–
a1 : Animal*
a2 : Animal*
————————
Aleatoriamente elegimos una caracteristica y la comparamos, el animal con la peor 
caracteristica muere*/
void ComerAleatorio(Animal* a1, Animal* a2){
    int valor1, valor2;
    int aleatorio1 = rand() % 3; /* Lanza aleatoriamente el numero 1,2 o 3*/
    int aleatorio2 = rand() % 3; /* Lanza aleatoriamente el numero 1,2 o 3*/
    switch(aleatorio1){
        case 0: /* Usaremos la fuerza de a1*/
            switch(a1->tipo_fuerza){
                case 'e':
                    valor1 = *(int*)a1->fuerza;
                    break;
                case 'c':
                    valor1 = ((int)(*(char*)a1->fuerza)) / 4;
                    break;
                case 'f':
                    valor1 = (int)round(*(float*)a1->fuerza);
                    break;
            }
            break;
        case 1: /* Usaremos la velocidad de a1*/
            switch(a2->tipo_velocidad){
                case 'e':
                    valor1 = *(int*)a2->velocidad;
                    break;
                case 'c':
                    valor1 = ((int)(*(char*)a2->velocidad)) / 4;
                    break;
                case 'f':
                    valor1 = (int)round(*(float*)a2->velocidad);
                    break;
            }
            break;
        case 2: /* Usaremos la resistencia de a1*/
            switch(a1->tipo_resistencia){
                case 'e':
                    valor1 = *(int*)a1->resistencia;
                    break;
                case 'c':
                    valor1 = ((int)(*(char*)a1->resistencia)) / 4;
                    break;
                case 'f':
                    valor1 = (int)round(*(float*)a1->resistencia);
                    break;
            }
            break;
    }
    
    switch(aleatorio2){
        case 0: /* Usaremos la fuerza de a2*/
            switch(a2->tipo_fuerza){
                case 'e':
                    valor2 = *(int*)a2->fuerza;
                    break;
                case 'c':
                    valor2 = ((int)(*(char*)a2->fuerza)) / 4;
                    break;
                case 'f':
                    valor2 = round(*(float*)a2->fuerza);
                    break;
            }
            break;
        case 1: /* Usaremos la velocidad de a2*/
            switch(a2->tipo_velocidad){
                case 'e':
                    valor2 = *(int*)a2->velocidad;
                    break;
                case 'c':
                    valor2 = ((int)(*(char*)a2->velocidad)) / 4;
                    break;
                case 'f':
                    valor2 = (int)round(*(float*)a2->velocidad);
                    break;
            }
            break;
        case 2: /* Usaremos la resistencia de a2*/
            switch(a2->tipo_resistencia){
                case 'e':
                    valor2 = *(int*)a2->resistencia;
                    break;
                case 'c':
                    valor2 = ((int)(*(char*)a2->resistencia)) / 4;
                    break;
                case 'f':
                    valor2 = (int)round(*(float*)a2->resistencia);
                    break;
            }
            break;
    }

    if(valor1 > valor2){
        entregarSimple(a2,a1);
        Borrar(a1);
    }else{
        Borrar(a1);
    }
}


/*BorrarMundo
———————–
Mundo = Animal**
————————
Liberamos todos los punteros de la matriz*/
void BorrarMundo(Animal** Mundo){
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (Mundo[i][j].fuerza != NULL){
                Mundo[i][j].fuerza = NULL;
                Mundo[i][j].velocidad = NULL;
                Mundo[i][j].resistencia = NULL;
                Mundo[i][j].reproduccion = NULL;
                Mundo[i][j].comerHuir = NULL;
                free(Mundo[i][j].fuerza);
                free(Mundo[i][j].velocidad);
                free(Mundo[i][j].resistencia);
                free(Mundo[i][j].reproduccion);
                free(Mundo[i][j].comerHuir);
            }
        }
        free(Mundo[i]);
    }
    free(Mundo);
};


/*MostrarMundo
———————–
Mundo : Animal**
————————
Mostraremos el mundo, mostrando todos los animales con la funcion MostrarAnimal*/
void MostrarMundo(Animal** Mundo){
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (Mundo[i][j].fuerza != NULL){
                MostrarAnimal(&Mundo[i][j]);
            }
        }
    }
};
