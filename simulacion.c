#include "animal.c"

void opciones(){
    printf("Las opciones de la simulacion son:\n");
    printf("    1. Crear un animal en una posicion aleatoria\n");
    printf("    2. Mostrar mundo. Mostraremos todos los animales del mundo\n");
    printf("    3. Avanzar una iteracion en el tiempo\n");
    printf("    4. Terminar programa\n");
}

int main(){
    int flag = 0;
    int n = 1000;
    Animal** Mundo = (Animal**)malloc(sizeof(Animal*) * n);
    for (int i = 0; i < n; i++)
    {
        Mundo[i] = (Animal*)malloc(sizeof(Animal) * n);
        for (int j = 0; j < n; j++)
        {
            Mundo[i][j].tipo_fuerza = '\0';
            Mundo[i][j].tipo_velocidad = '\0';
            Mundo[i][j].tipo_resistencia = '\0';
            Mundo[i][j].fuerza = NULL;
            Mundo[i][j].velocidad = NULL;
            Mundo[i][j].resistencia = NULL;
            Mundo[i][j].reproduccion = NULL;
            Mundo[i][j].comerHuir = NULL;
        }
        
    }
    
    int opcion = 0;
    printf("Bienvenido a la simulacion de animales.\n");

    while (flag == 0)
    {
        printf("\n");
        opciones();
        printf("Ingresar opcion: ");
        scanf("%d", &opcion);
        while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4)
        {
            printf("Error en el numero, porfavor ingresar un numero valido. Recordar que:\n");
            opciones();
            printf("Ingresar opcion: ");
            scanf("%d", &opcion);
        }
        
        switch(opcion){
            case 1: ;/*Crear animal*/
                int i = rand() % n; /*Hasta el tamano de la matriz*/
                int j = rand() % n;
                while (Mundo[i][j].fuerza != NULL)
                {
                    i = rand() % n;
                    j = rand() % n;
                }
                CrearAnimal(&Mundo[i][j]);
                break;
            case 2: /*Mostrar mundo*/
                MostrarMundo(Mundo);
                break;
            case 3: /*Avanzar en el tiempo*/
            /*
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (Mundo[i][j].fuerza != NULL) Si hay un animal ahi
                        {
                            int aleatorio = rand() % 4;
                            switch (aleatorio)
                            {
                            case 0: Mover a la izquierda
                                if (Mundo[i][j-1].fuerza == NULL)
                                {
                                    entregarSimple(&Mundo[i][j-1], &Mundo[i][j]);
                                }else
                                {
                                    Reproducir
                                }
                                
                                break;
                            case 1: /*Mover a arriba
                                break;
                            case 2: /*Mover a la derecha
                                break;
                            case 3: /*Mover a abajo*
                                break;
                            }
                        }
                        
                    }
                    
                }
            */    
                break;
            case 4:/*Terminar programa*/
                flag = 1;
                break;
        }
    }
    BorrarMundo(Mundo);

    return 0;
}