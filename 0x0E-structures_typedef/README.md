
cumentación: estructuras de datos
Alexandre Gautier editó esta página el 11 oct 2016  1 revisión
Además de las funciones también se puede escribir la documentación para structs, unions, enumsy typedefs.
En lugar del nombre de la función, debe escribir el nombre de la declaración;
el struct/ union/ enum/ typedefsiempre debe preceder al nombre. La anidación de declaraciones no es compatible.
Use el mecanismo de argumento para documentar miembros o constantes.

Ejemplo:

/ * * 
* struct my_struct - Descripción breve 
* @a: Primer miembro 
* @b: Segundo miembro 
* @c: Tercer miembro 
* 
* Descripción: Descripción más larga 
* / struct my_struct 

{
	int a;
	int b;
	int c;
};
Para estructuras muy largas, también puede describir argumentos dentro del cuerpo de la estructura.

Ejemplo:

/ * * 
* struct my_struct - Descripción breve 
* @a: Primer miembro 
* @b: Segundo miembro 
* 
* Descripción: Descripción más larga 
* / struct my_struct 

{
	int a;
	int b;
	/ * * 
	 * @c: Esta es una descripción más larga de C 
	 * 
	 * Descripción: Puede usar párrafos para describir argumentos 
	 * usando este método. 
* / int c;	 
	
};
Esto debe usarse solo para struct/ enummembers.

Ejemplo para un typedef:

/ * * 
* u_int - Typedef para unsigned int 
* / typedef unsigned int u_int ; 
   
Por supuesto, puede agregar el Descriptionencabezado en cualquier bloque de documentación.
