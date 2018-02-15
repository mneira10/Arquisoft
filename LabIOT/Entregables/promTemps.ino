
 #include <string.h>
 // Selecciona el pin de entrada analoga a leer.
 int tempPin = 2;
 // variable para guardar el valor del sensor de temperatura.
 int tempC = 0;
 // variable para la unidad de temperatura C-Celsius, K- Kelvin, F-Fahrenheit.
 char tempUnit = 'C';
 // arreglo de chars para envio final del dato del sensor.
 String tempArray[2] = {"", ""};
 // variable temporal de conteo
 int i = 0;
 double tf = 60;
 int cont1 = 0 ;
 int cont2 = 0 ; 
 double prom1 = 0;
 double prom2 = 0;
 // preparacion del proceso
 void setup() { 
   // Abre puerto serial y lo configura a 9600 bps
     Serial.begin(9600);
     // se fija la unidad de trabajo del sensor de temperatura.
     tempArray[1] = String(tempUnit);
 }
 // ejecuta el procesamiento del sensor
 void loop() {
    
   // lee el valor del sensor de temperatura en Volts
   tempC = analogRead(tempPin);
   // Convierte el valor a temperatura a grados centigrados y de analogo a digital
   // DEPENDE DEL SENSOR, REVISAR DATASHEET
   tempC = (4.9 * tempC * 100.0)/1024.0;
   // se transforma el dato int de temperatura a un char
   tempArray[0] = String(tempC);
   // Envia los datos uno por uno del arreglo del sensor por puerto serial
   for (i=0; i<2; i++){
     // imprime el elemento del arreglo por el puerto serial
     Serial.print(tempArray[i]);
     // espacio para diferenciar elementos en el arreglo
     if (i < 1){
       Serial.print("\t");      
     }
   }
   // final de la trama de datos
   Serial.println("");
   // espera 1 segundo para repetir el procedimiento
   delay(1000);
   cont1++;
   prom1 += tempC;
   if(cont1 ==tf){
      Serial.print("El promedio del minuto anterior es de: " +String( prom1/tf,4) + "\t" + "C\n");
      
      cont2++;
      prom2 += prom1/tf;
      
      prom1 = 0 ;
      cont1 =0;
   }
   if(cont2==15){
    Serial.print("El promedio de los ultimos 15 mins es de: " +String( prom2/15.0,4) + "\t "+" C\n");
    cont2 = 0;
    prom2 = 0;
   }
   // Serial.println(tempArray[0]);
   
 }
