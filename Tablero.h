#ifndef TABLERO_H_INCLUDED
#define TABLERO_H_INCLUDED

/** @brief Selecciona el tama�o del tablero.
 *
 * @param dificultad Es la variable que indica el tama�o del tablero.
 *
 * @param marcador1 Es la variable que guarda la cantidad de puntos del primer jugador.
 *
 * @param marcador2 Es la variable que guarda la cantidad de puntos del segundo jugador.
*/
void Tablero(int dificultad, int &marcador1, int &marcador2);

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Genera el arreglo bidimensional que simula el tablero ya con las cartas.
 *
 * @param Tablero Es el arreglo bidimensional donde se van a guardar las cartas
 *
 * @param renTablero Es la variable con el n�mero de renglones del tablero.
 *
 * @param MazoCartas Es el arreglo unidimensional donde estan las cartas.
*/
void GeneraTablero(int Tablero[][10], int renTablero, int MazoCartas[]);

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Mueve el cursor de selecci�n en x de la carta durante el juego.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente el cursor.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente el cursor.
 *
 * @param dificultad Es la variable que inidca el tama�o del tablero.
 *
 * @param direccion Es la variable que indica en que direcci�n va el cursor horizontalmente.
*/
void MoverPosicionTablero_Horizontal(int &x, int y, int dificultad, int direccion)

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Mueve el cursor de selecci�n en y de la carta durante el juego.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente el cursor.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente el cursor.
 *
 * @param dificultad Es la variable que inidca el tama�o del tablero.
 *
 * @param direccion Es la variable que indica en que direcci�n va el cursor verticalmente.
*/
void MoverPosicionTablero_Vertical(int x, int &y, int dificultad, int direccion)

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Imprime el puntaje de los jugadores.
 *
 * @param marcador Es la variable del puntaje de los jugadores.
 *
 * @param jugador Es la variable que idica al jugador 1 o 2.
*/
void ImprimeMarcador(int &marcador, int jugador);

#endif // TABLERO_H_INCLUDED
