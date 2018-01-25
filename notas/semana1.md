# Semana1
## Ciclo de desarrollo

1. Analisis - requerimientos
2. Diseño de la arquitectura
3. Diseño del experimento
4. Implementacion y ejecucion de prototipos y experimentos
5. Planeacion del resto del ciclo de desarollo

## Metricas de DESEMPEÑO
### Definición
El sw cumple con sus funciones dentro de restricciones de velocidad.
### Metricas
- Latencia = tiempo de respuesta
  - tiempo de envio, procesamiento y respuesta
- Rendimiento
  - No. de trasacciones procesadas por unidad de tiempo.
- Jitter  
  - Desviación no deseada con respecto a la latencia ideal.
- No. de eventos no procesados
  - Porque el sistema estaba muy ocupado para responder
- Recursos
  - CPU, energía, memoria, bits/tiempo, etc.

### Prueba
- Prueba de carga
    - Metale usuarios
- Prueba de estres - como se asignan y desasignan los recursos
  - Picos y valles
----
Ejemplo **Escenario de calidad de desempeño**:

El sistema envía al paciente y/o personal una alarma en menos de 1.5s.

----
### Tacticas, estilos, patrones

## Metricas de **ESCALABILIDAD**
### Definicion
FALTA INFO

## ESCENARIO DE CALIDAD
### Medida
*Metrica - Op. Logico - Valor Esperado*

## AQRUITECTURAS
### Monolitica
1 sola maquina controla todo
- peticiones solo tienen una entrada
### Microservicios
hay una maquina dedicada por cada microservicio
- peticiones entran por cualquier lado
