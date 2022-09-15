/*
Programa en C para recordar el uso de arreglos en C

*/
// Librerias
#include <stdio.h>


#define TAM 10
//declaracion de funciones

	void ingresar_datos(float *calificaciones);
	void evaluacion(float *calificaciones);


			//Programa principal(MAIN)
			int main()
			{
				float calificaciones[TAM];
				ingresar_datos(calificaciones);
				evaluacion(calificaciones);
				return 0;
			}

//definicion de funciones
void ingresar_datos(float *calificaciones){
	int i;
	for ( i = 0; i < TAM ; i++)
	{
		printf("Introduzca las calificaciones : \n");
		scanf("%f",&calificaciones[i]);
	}
}

void evaluacion(float * calificaciones){
	int i;
	int aprobados = 0;
	int reprobados = 0;

	for ( i = 0; i < TAM; i++)
	{
		if (calificaciones[i] >= 6)
		{
			aprobados++;
		}else{
			reprobados++;
		}

	}

	printf("Alumnos aprobados : %d\n",aprobados );
	printf("Alumnos reprobados : %d\n",reprobados );

	

}