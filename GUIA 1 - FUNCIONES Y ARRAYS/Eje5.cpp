#include <iostream>
using namespace std;

/*
Un individuo acaba de obtener su �lbum de figuritas de DragonCube. Se trata de un libro cuyas
p�ginas cuentan con espacios en blanco designados para pegar 50 figuritas.

Estos espacios en blanco est�n numerados y cada uno de ellos est� reservado para una figurita
en particular, identificada con el mismo n�mero. Luego de obtener el �lbum, el coleccionista comienza
a comprar paquetes de figuritas que contienen, cada uno, 5 unidades. Los paquetes vienen identificados
con un n�mero natural como c�digo.

Las figuritas, adem�s de estar numeradas, se clasifican por:

Tipo de figurita:
- Com�n (C)
- Holograma (H)

Se pide realizar un programa que permita registrar, por cada paquete, la informaci�n de las
5 figuritas. Los registros tienen la siguiente estructura:
N�mero de paquete (entero)
N�mero de figurita (1 a 50)
Tipo de figurita (C o H)
�Pegar en el �lbum? (S/N)

No hay l�mites en la cantidad de paquetes que el coleccionista pueda comprar. La carga de datos
finaliza con un n�mero de paquete igual a 0. Calcular e informar:
La cantidad de figuritas comunes repetidas.
La cantidad de figuritas faltantes del �lbum.
La cantidad de hologramas entre las figuritas compradas (sin contar las repetidas).
El estado del �lbum pudiendo ser uno de los siguientes casos:
"Incompleto" si no se llegaron a pegar las 50 figuritas.
"Completo" si se llegaron a pegar las 50 figuritas entre comunes y hologramas.
"Completo com�n" si est� completo pero adem�s tiene las 50 figuritas comunes pegadas.
"Completo hologr�fico" si est� completo pero adem�s tiene las 50 figuritas hologramas pegadas.
Teniendo en cuenta que cada paquete cuesta $500 y que cada figurita com�n se puede vender a $20 y
cada holograma a $50. Calcular el costo total de la colecci�n y el costo total de una potencial venta
de figuritas no pegadas de la colecci�n.

Aclaraciones:
Cuando se carga los datos de un paquete se debe solicitar la informaci�n de las cinco figuritas que
incluye el paquete.
El �lbum tiene 50 figuritas en total pero los paquetes pueden traer de cada una la variante com�n y
 holograma. En total son 100 figuritas distintas.
El coleccionista puede decidir si pega en el �lbum figuritas comunes y hologramas, s�lo comunes o
s�lo hologramas. Cada espacio del �lbum sin figuritas es una figurita faltante.
Las figuritas que el coleccionista no pega en el �lbum son parte de su colecci�n en una pila aparte.
Si el coleccionista tiene la figurita #1 varias veces pero nunca la peg� en el �lbum entonces el �lbum
no puede considerarse completo.
Se considera una figurita repetida si tiene la misma figurita del mismo tipo m�s de una vez.
Por ejemplo, si tengo la figurita #1 com�n y #1 holograma en mi colecci�n, no la tengo repetida.
Sin embargo, si tres veces tengo la figura #1 holograma en mi colecci�n entonces la tengo repetida DOS veces.

*/

int main (){

	return 0;
}
