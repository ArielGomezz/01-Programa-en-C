#include <stdio.h>
int codigo, pago, contador, banco;
float precio, descuento, total,interes, bonificacion;
char respuesta, nombre [10];

int main() {
 //* titulos *//
	 printf ("\n----------------------------- CONSULTA DE COMPRAS -------------------------- \n");

    
// *  Ingresar Datos *//
while (respuesta !='N') {
	printf ("\n INGRESAR CODIGO DEL PRODUCTO : ");
	scanf ("%d" , &codigo);
	contador =contador + 1;
	fflush(stdin);
	printf ("\nIngresar Nombre del Producto : ");
	scanf ("%c" , &nombre);
	fflush(stdin);
	printf ("\nPrecio del Producto : $ ");
	scanf ("%f" , &precio);
	  
//*   forma de pago *//
        printf ("\nForma de Pago : 1-Efectivo, 2-T de Debito, 3-T de Credito : ");
	    scanf ("%d" , &pago);
	         if (pago == 3) {
	         printf ("\nA que banco Corresponde : 01-Banco de Corrientes, 02-Otros Bancos : ");
	         scanf ("%d" , &banco);
}
     
//* calculos *//
	    if (pago ==1) {
		descuento = (precio -20);
		total = descuento; 			
	} 
	
	    if (pago ==2) {
		interes = precio;
		total = interes;
	}
	
	    if (pago ==3 && banco ==01) {
		bonificacion = (precio *0.20);
		total = precio - bonificacion;
	}
	
	    if (pago ==3 && banco ==02) {
		  interes = (precio *0.15);
		  total = precio + interes;
	}
 //* Imprimir en Pantalla *//
	   printf (" \n_____________________________________________________________________");
	   printf ("\nTotal Compra : $ %4.2f\n " , precio);
	   printf ("\nDescuento : $ %4.2f\n " , descuento);
	   printf ("\nBonificacion : $ %4.2f \n " , bonificacion);
	   printf ("\nInteres : $ %4.2f \n " , interes);
	   printf ("\nTotal A Pagar : $ %4.2f \n " , total);
	   printf ("\n                             GRACIAS POR SU COMPRA ! ");
	   printf ("\n");
	   printf ("\nProductos Ingresados : %d\n " , contador);

     fflush(stdin);
	 printf ("\nDesea ingresar otro codigo S/N  : ");
     scanf ("%c" , &respuesta);
}
}
    





     

