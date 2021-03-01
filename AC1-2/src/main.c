/*
 solicitar cuantos alumnos desea introducir
 introducir nombre y apellidos
 codigo de 3 digitos que introduce el usuario
 la nota de acceso permite 2 decimales
 validar los datos introducidos
 al final mostrar los datos en formato tabla
 */
#include <stdio.h>

void main() {
	int inpts, i;
	float grade [inpts];
	char name [inpts][20], surname1 [inpts][20], surname2 [inpts][20], code [inpts][3];

	printf("\n ¿Cuántos alumnos desea introducir? -> ");
	scanf("%d", &inpts);

	for (i=0; i<inpts; i++){
		printf("\n Datos del alumno %d:", i+1);

		printf("\n\n Introduzca el nombre: ");
		scanf("%s", &name[i]);

		printf("\n Introduzca el primer apellido: ");
		scanf("%s", &surname1[i]);

		printf("\n Introduzca el segundo apellido: ");
		scanf("%s", &surname2[i]);

		printf("\n Introduzca el código: ");
		scanf("%s", &code[i]);

		printf("\n Introduzca la nota de acceso: ");
		scanf("%f", &grade[i]);
	}

	printf("\n Nombre\t Apellido 1\t Apellido 2\t Código\t Nota");
	for (i=0; i<inpts; i++){
		printf("\n %s\t %s\t %s\t %s\t %f", name[i], surname1[i], surname2[i], code[i], grade[i]);
	}
}
