# Casa_Dom-tica

**Módulos utilizados en Casa domótica mediante una placa Arduino 

El proyecto de Casa domótica consiste en la automatización de algunas funciones dentro de una casa, un apartamento o una habitación en general. En nuestro proyecto estas funciones constan en la detección de la presencia no deseada de gas dentro una zona determinada, la detección de presencia dentro de la casa mediante el uso de un sensor PIR, un control de luz mediante un interruptor que como objetivo inicial debía ser de voz y por último tenemos un controlador de movimiento de persianas basado en un motor CC. Estos 4 módulos serán descritos a continuación con sus componentes, precios, explicación por secciones, pasos para implementación además de posibles fallos o consideraciones que se deban tener en cuenta.

-Materiales 
	2 focos Led - $0.30 c/u
	3 resistencias (220 Ω, 1 kΩ,4.7 kΩ) - $0.10 c/u
	Placa Arduino Uno R3 - $30.00 
	Sensor pir (Passive InfraRed) - $5.00
	Piezo - $2.50
	Sensor de gas - $20.00
	Motor de CC 9V - $3.50 
	Controlador de motor de puente H - $1.00
	2 interruptores deslizante - $0.10c/u
	2 baterías de 1.5V - $1.00 c/u
  
  
**Secciones


El proyecto puede ser explicado por módulos 

	Tarjeta Arduino
  
Esta albergará cada una de las conexiones que representarán las funcionalidades de nuestro proyecto tales como el sensor de gas, presencia, encendido de luces y el movimiento de persianas automático. Esto utilizando los puertos adecuados del Arduino (puerto 5V como principal junto a los puertos digitales y analógicos).

	Módulo de presencia de gas
  
Este módulo constará de una resistencia de 4.7 kΩ), además de un Piezo y un sensor de gas. El funcionamiento de este tiene como base al sensor de gas, cuando este sienta una cierta cantidad de gas a una cierta proximidad que puede ser calibrada mediante comandos, la señal será dirigida al Piezo y este emitirá un sonido de alarma, cuyo tono e intermitencia podrá ser regulada de igual forma mediante el código de los módulos.

	Módulo de proximidad PIR
  
Este módulo estará construido a base de un foco led, una resistencia de 220 Ω, y un sensor PIR (Passive InfraRed), el funcionamiento de este módulo se basará en el sensor PIR, este detectará alguna presencia mediante infrarrojo y enviará una señal al led que se encenderá alertando alguna anomalía dentro de la ubicación deseada. 

	Módulo de encendido de luz automático(deseado) – manual(realizado)
  
Este módulo contiene un foco led, una resistencia de 1 kΩ, 1 interruptor deslizante, pero preferiblemente este último elemento debería ser un sensor de voz. Tentativamente el funcionamiento de este debería constar en encender el led mediante la identificación de la voz del usuario a través del sensor, este último enviaría la señal al led. El funcionamiento del diagrama realizado se basará en el interruptor deslizante que cumplirá la función del enviar la señal al led para su encendido correspondiente. 

-Módulo de movimiento de persianas automático 
  
Este módulo está construido mediante un motor de CC 9V, dos baterías de 1.5V, un interruptor deslizante y un controlador de motor de puente H. El interruptor enviará la señal al controlador del motor que alimentado mediante las 2 baterías enviará la señal necesaria para que el motor CC gire en un sentido y mediante el otro lado del interruptor la señal será invertida para que el motor gire en sentido contrario, permitiendo abrir y cerrar las persianas. 

-Instrucciones de Implementación y Aplicación

	1.Seleccionar los materiales mencionados anteriormente en la Lista de Materiales 
	2.Realizar las conexiones necesarias mediante el diagrama subido al repositorio
	3.Copiar el código y ajustar los valores de su funcionamiento acorde a las necesidades
	4.Iniciar la simulación y dar clic en los elementos para proceder a verificar el funcionamiento de cada uno de ellos, el sensor de gas mostrará una nube que al acercarla a cierto punto que será la proximidad, enviará la señal para encender el Piezo. El sensor de presencia PIR, mostrará un campo de visión donde desplazaremos un punto, dentro de este rango si se detecta el movimiento de este punto se enviará la señal para encender el led. Tanto para el movimiento automático de las persianas y el encendido del foco, se da click en el interruptor, el led se encenderá al desplazarla hacia un lado y se apagará hacia el otro, mientras que, para el motor, este girará hacia un sentido u otro según el lado desplazado del interruptor.
  
**Fallos o consideraciones

Dentro de estos módulos es importante en la sección de movimiento automático de persianas la correcta conexión de baterías al circuito ya que estas pueden sobrealimentar el controlador del motor y este podría quemarse. Además es recomendable utilizar un sensor de voz para el encendido de la luz led, cosa que no se realizó debido a que la plataforma que se usó para el prototipado de los módulos no contiene el dispositivo mencionado.











![image](https://user-images.githubusercontent.com/86313603/190959460-9cb8047e-3054-4424-89b0-aa840e0fe8d5.png)
