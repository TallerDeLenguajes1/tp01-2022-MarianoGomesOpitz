# Ejercicio 2)
## Archivo gitignore
### El archivo .gitignore es un archivo de texto que le dice a Git cuales archivos o carpetas ignorar en un determinado proyecto.
- Es conveniente incluir el archivo .gitignore en todo repositorio para así tener la posibilidad de ignorar todo aquel archivo o carpeta que no sea necesario incluir.
- Un archivo .gitignore puede ser local (que pueda ignorar a elementos de un solo repositorio) o global (capaz de ignorar elementos de todos los repositorios). Para crear un archivo .gitignore local, se debe crear un archivo de texto llamado .gitignore (incluyendo el .), y a partir de ahí se modifica el archivo como sea necesario; cada linea debe listar un archivo o carpeta adicional que se quiera ignorar por Git.

A la hora de utilizar el archivo para ignorar un elemento, se emplean ciertos símbolos:
* "*" se utiliza para ignorar a todos los elementos de una extensión en específico.
* "/" se utiliza para ignorar el camino relativo al archivo .gitignore.
* "#" se utiliza para añadir comentarios en el archivo .gitignore.

Imaginemonos que tenemos un archivo llamado "ignorado.txt" que deseamos ignorar. Existen diversas maneras de hacer ésto:

1. Se puede utilizar el archivo .gitignore global o local. Para añadir o modificar el archivo global, se debe ejecutar el siguiente comando:

	```
	git config --global core.excludesfile ~/.gitignore_global
	```
Este comando creará el archivo ~/.gitignore_global, con éste se puede decidir cual elemento ignorar en todos los repositorios.
Mientras que el archivo local debe crearse en la carpeta raiz del repositorio a trabajar.

2. Para decidir como ignorar el archivo "ignorado.txt" hay dos formas:

	* 
	````
	#Ignorar el archivo específico
	ignorado.txt
	````
	* 
	````
	#Ignorar todos los archivos de tal extensión
	*.txt
	````

_[Biliografía](https://www.freecodecamp.org/news/gitignore-what-is-it-and-how-to-add-to-repo/)_

## tp1_1.cpp
- Al subir los archivos a Git Hub, puedo ver que están presentes README.md, tp1_1.cpp, tp1_1.exe y la carpeta .vscode/ (a éstos dos últimos no los subí porque ya era consiente de que no son relevantes para el funcionamiento del código .cpp); por lo que decidí usar el archivo .gitignore que lo cree usando la página proporcionada por el TP, el cual ignora todos los ejecutables, y manualmente decidí agregar que ignorase a la carpeta .vscode/.
- El resultado obtenido en el apartado b) y c) son iguales debido a que uno pide la dirección de memoria ALMACENADA en el puntero, y la otra pide la dirección de memoria de la variable, y el puntero está trabajando con la dirección de memoria de la variable. En el apartado d) me dan otra dirección de memoria, pero ésta es distinta a las otras, ya que el apartado me pide la dirección de memoria PERTENECIENTE al puntero.