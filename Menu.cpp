#include <iostream>

using std::cout;


void MenuPrincipal()
{

    EstableceColor(BLANCO, PURPURA);

    int x = 25, y = 1;//Coordenadas en donde se va a comenzar a imprimir el t�tulo "Memorama"

    //Se imprime el t�tulo (MEMORAMA) en la misma posici�n x, solo la y cambiar� porque ps, no puedo darle un endl.
    char myfile[30] = "Menu.txt";
    ImprimeArchivo (myfile, x, y);

    //Vuelvo a inicializar las coordendadas para que el siguiente mensaje (Jugar) quede centrado.
    x = 69;
    y+=16;

    strcpy(myfile,"OpcionesMenu.txt");
    ImprimeArchivo (myfile, x, y);


    //Este peque�o bloquecillo llevo el cursor a la posici�n del mensaje de "Jugar". Se me hizo l�gico iniciar all�
    //e imprimo el marco alrededor
    EstableceColor(NEGRO, ROJOCLARO);
    x = 86;
    y = 16;

}
//----------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------------
int seleccionMenu
{
    int x = 86;
    int y = 16;
    ImprimeMarco(35, 7, x, y );
        //Este goto regresa el cursor a la esquina superior izquierda del mensajito "Jugar", porque desde all� se comienza a
        //imprimir el marco y estas coordenadas son las que voy a usar como referencia para saber sobre cu�l opci�n est� el usuario
        // as� como tambi�n para facilitar el borrado del marco cuando el usuario se vaya hacia otra opci�n y para facilitar la
        //impresi�n del siguiente marquito.
        gotoxy(x,y);

        CambiaCursor(APAGADO); //Aqu� apago el cursor para que no se vea esa madre parpadeando.
        //El ciclito este pues se va a repetir mientras el usuario no le de enter.
        char tecla;
        while (tecla != ENTER){
            tecla = getch(); //Esta sentencia es para esperar que el usuario pique algo en el teclado alv. **AHORA SI VIENE LO PERR�N**
            //Estas coordenadas son las coordenadas del mensajito "Jugar", y si el usuario le pica para abajo pasa lo siguiente:
            if(x == 86 && y == 16 && (tecla == FLECHA_ABAJO )){
                BorraMarco(35, 7, x, y); //Se borra el marquito de "Jugar".
                gotoxy(x-=18,y+=10); //Te vas a la esquina superior izquierda del mensaje de "Instrucciones"
                ImprimeMarco(71, 7, x, y); //Desde all�, imprimes el marco alrededor del mensaje (instrucciones)
                gotoxy(x, y);//Y me regreso a la esquinita superior izquierda para facilitar el proceso, ya se los expliqu�
                tecla = getch(); //Y espero a que el usuario teclee otra cosa.
            }

            if(x == 68 && y == 26 && (tecla == FLECHA_ABAJO )){ //Ahora, si el usuario est� sobre "Instrucciones" y le da pa abajo:
                BorraMarco(71, 7, x, y); //Se borra el marco de "Instrucciones".
                gotoxy(x+=23,y+=10); //El cursor se va a la esquina superior izquierda del mensajito de abajo o sea "Salir".
                ImprimeMarco(27, 7, x, y); //Desde la esquinita se imprime el marco alrededor de "Salir".
                gotoxy(x, y); //Me regreso a la esquinita
                tecla = getch(); //Espero a que el usuario pique otra cosa.
            }
            //***HASTA AQU� SE LE DA CHANCE AL USUARIO DE QUE VAYA HACIA ABAJO, SI LLEGA A ESTE PUNTO Y LE SIGUE PICANDO A LA FLECHA PA ABAJO
            //PUES EL PROGRAMA NO VA A HACER NADA PORQUE NO HAY UN if QUE CONSIDERE ESE EVENTO***

            //Entonces, a partir de aqu� hago lo mismo que antes, pero ahora considerando que el usuario le da a la flechita pa arriba.

            //Si est� en el mensaje de "Salir" y pica pa abajo, ps no va a pasar nada alv xD, pero si le da pa arriba:
            if(x == 91 && y == 36 && (tecla == FLECHA_ARRIBA )){
                BorraMarco(27, 7, x, y); //Borro el marquito alrededor de "Salir"
                gotoxy(x-=23, y-=10); //Me voy a la esquina superior izquierda del mensaje de arriba o sea "Instrucciones"
                ImprimeMarco(71, 7, x, y); //Le imprimo su marquito correspondiente.
                gotoxy(x, y); //Me voy a la esquinita superior izquierda de "Instrucciones"
                tecla = getch(); //Espero a que el usuario teclee algo.
            }

            if(x == 68 && y == 26 && (tecla == FLECHA_ARRIBA )){ //Ahora, si el usuario est� en el mensaje "Instrucciones" ps ya se la saben
                BorraMarco(71, 7, x, y); //Borro el marquito alrededor de "Instrucciones"
                gotoxy(x+=18,y-=10); //Me voy al mensaje de arriba, o sea "Jugar"
                ImprimeMarco(35, 7, x, y); //Le imprimo el marco a la palabrita "Jugar"
                gotoxy(x, y); //Me voy a la esquinita superior izquierda de jugar.
                tecla = getch(); //Espero a que el usuario teclee algo
            }
        }
        //Aqu�, se supone que el usuario ya tecle� ENTER eligiendo una opci�n, entonces, limpio la pantalla para quitar el men�
        system("cls");

        //Y aqu� wachen, usando la coordenada en y sabr� qu� opci�n eligi�, y ps imprim� un mensajito nomas para que vieran que si funcion�.
        if (y == 16)return JUGAR;

        if (y == 26) return VER_INSTRUCCIONES;

        if (y == 36 ) return SALIR;
}


void ImprimeArchivo (const char *archivo, int x, int y)
{
    string linea;

    ifstream myfile(archivo);
    if (myfile.is_open())
    {
        while ( getline (myfile,linea) )
        {
            gotoxy(x,y++);
            cout << linea;
        }
        myfile.close();
    }

    else cout << "Error, Archivo \"" << &archivo << "\"faltante";
}
