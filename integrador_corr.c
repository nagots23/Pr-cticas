/*
 * integrador.c
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
#include <string.h>
#include <consola.h>

float saldo; // variable definida a nivel global, se puede utilizar en cualquier lugar del programa.


// Difinicion de prototipos de funciones locales
void extraccionRapida();
void deposito();


int main (int argc, char **argv) {
	int opcion, pin; // variables locales que solo se podran utilizar dentro de maim();
	saldo = 5000.0 ;
	
	printf ("Ingrese PIN de 4 digitos: ");
	scanf ("%d",&pin);
	
	if (pin == 0 || pin >9999) {
		printf ("El PIN es incorrecto. Ingreselo nuevamente \n");
	} else {
		printf ("\t Bienvenido/a usuario/a \n");
		printf ("\t Elija una opcion \n");
		printf ("\t 1) Consulta de saldo \n");
		printf ("\t 2) Extraccion rapida \n");
		printf ("\t 3) Deposito \n");
		printf ("\t 4) Salir \n");
		scanf ("%i",&opcion);
		
		switch (opcion) {
			case 1: 
				printf ("Consulta de saldo \n");
				printf ("Su saldo actual es $ %.2lf\n", saldo);
				break;
					
			case 2: 
				extraccionRapida();
				break;
			
			case 3: 
				deposito();
				break;
			
			case 4: 
				printf ("Salir \n");
				break;
			default:
				printf ("Opcion no valida!\n");
		} 
	}
	return 0;
}

// ----------------------------------------------------------------------------------------------------------
// implementacion de las funciones locales (se implementan fuera de la funcion main())...
// ----------------------------------------------------------------------------------------------------------
void extraccionRapida() {
	int retirar = 0; // limpio la varible retirar
	printf ("Extraccion rapida \n");
	scanf ("%d", &retirar);
	if (saldo>retirar) {
		saldo-=retirar;
		printf ("Su saldo actual es $ %.2lf \n", saldo);
	} else {
		printf ("Error! Saldo insuficiente!!!");
	}
}
void deposito() {
	int agregar = 0; // limpio la variable agregar
	printf ("Deposito \n");
	printf ("Indique el monto que quiere ingresar \n");
	scanf("%d",&agregar);
	saldo+=agregar;
	printf ("Su saldo actual es $ %.2lf \n",saldo);
}



