/*
 * calculadora.c
 * 
 * Copyright 2022 Gastón <gaston21diaz@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	int nro1, nro2;
	int suma, resta,opcion;
	double multi;
	float div;
	

	do {
			printf("Ingrese un numero: ");
	scanf("%d", &nro1);
	printf("ingrese otro numero: ");
	scanf("%d", &nro2);
		printf ("\t \t Menu de opciones \n \n");
		printf ("\t \t Elija una opcion \n");
		printf ("\t \t 1. suma \n");
		printf  ("\t \t 2. resta \n");
		printf  ("\t \t 3. Multiplicacion \n");
		printf ("\t \t 4. Division \n");
		printf ("\t \t 5. Salir \n");
		scanf ("%d", &opcion);
		
		switch (opcion) {
		case 1:
			suma= nro1+nro2;
			printf ("%d + %d = %d \n",nro1,nro2,suma);
			break;
			
		case 2:
			resta = nro1 - nro2;
			printf ("%d - %d = %d \n", nro1,nro2, resta);
			break;
			
		case 3:
			multi = nro1 * nro2;
			printf ("%d * %d = %f\n",nro1,nro2,multi);
			break;
			
		case 4:
			if (nro2 > 0) {
			div = (float) nro1 / (float) nro2;
			printf ("%d / %d = %.2f \n", nro1,nro2,div);
			} else {
			printf ("%d no puede ser cero!", nro2);
			}	
			break;	
		case 5:
			printf ("Bye bye \n");
			break;
		default: 
			printf ("%d no es una opcion valida! \n",opcion);
			}
	 } while	 (opcion <= 4);

	suma= nro1+nro2;
	resta= nro1-nro2;
	multi=nro1*nro2;
	div = nro1/nro2;
	printf ("El resultado es: %d\n",suma);
	printf ("El resultado es: %d\n",resta);
	printf ("El resultado es: %f\n",multi);
	printf ("El resultado es: %.2f\n",div);
	return 0;
}


