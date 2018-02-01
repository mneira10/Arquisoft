# Actors architecture in Play!

-   Thread Pool
-   Fork Join Pool

Objetivos:

-   Construir un diagrama de concurrencia
-   Entender la aplicación de táticas en play

* * *

|           Play           | Desarrollo |
| :----------------------: | :--------: |
|        EF + Escala       |   JAX_RS   |
| AKKA (modelo de actores) |    REST    |

Antes: JSON - DTO - Entity - Persist

En EF : worker y executor

En AKKA : Thread y dispatcher

## Diagramas de concurrencia

-   Componentes de software
-   Lo que se ejecuta en memoria
    -   Threads
    -   Colas
    -   Pilas
-   Memoria persistente

Libro para documentacion de diags de concurrencia: Rozanski

### Parametros tweeking

-   num min Threads
-   num max Threads
-   factor de paralelismo : cantidad de threads que creo al tiempo una vez veo que me faltan recursos

`Problema de la arquitectuta por capas en EJB es que los threads se quedan bloqueados.`

Eventos son cosas de control en el software != acciones

`ActorRef != Actor`
ActorRef = un apuntador en memoria principal al actor 
