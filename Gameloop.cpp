


//--------------------------------------------------------------------------------------------------------------------------------------------------

void Gestion_Jugar()
{
    int dificultad;
    int marcador_J1 = 0, marcador_J2 = 0;
    char Jugador_1[1024];
    char Jugador_2[1024];

    ElegirNombresJugadores(Jugador_1, Jugador_2);

    dificultad = ElegirDificultad();

    EstableceColor(BLANCO, NEGRO);
    ImprimeMarco(210, 40, 2,1);

    EstableceColor(BLANCO, ROJOCLARO);
    int x=20, y=42;
    gotoxy(x, y++);
    cout << "    __               _            ___   ";
    gotoxy(x, y++);
    cout << " __|  |_ _ ___ ___ _| |___ ___   |_  |  ";
    gotoxy(x, y++);
    cout << "|  |  | | | . | .'| . | . |  _|   _| |_ ";
    gotoxy(x, y++);
    cout << "|_____|___|_  |__,|___|___|_|    |_____|";
    gotoxy(x, y++);
    cout << "          |___|                         ";

    gotoxy(x+=42, y-=3);
    cout << Jugador_1;

    x-=42;
    y+=3;
    gotoxy(x,y++);
    cout << " _____         _           ";
    gotoxy(x,y++);
    cout << "|  _  |_ _ ___| |_ ___ ___ ";
    gotoxy(x,y++);
    cout << "|   __| | |   |  _| . |_ -|";
    gotoxy(x,y++);
    cout << "|__|  |___|_|_|_| |___|___|";
    cout << "";
    cout << "";

    ImprimeMarcador(marcador_J1, 1);

    EstableceColor(BLANCO, AZULCLARO);
    //Aceptar 40 caracteres.
    x = 130, y = 42;
    gotoxy(x,y++);
    cout << "    __               _            ___ ";
    gotoxy(x,y++);
    cout << " __|  |_ _ ___ ___ _| |___ ___   |_  |";
    gotoxy(x,y++);
    cout << "|  |  | | | . | .'| . | . |  _|  |  _|";
    gotoxy(x,y++);
    cout << "|_____|___|_  |__,|___|___|_|    |___|";
    gotoxy(x,y++);
    cout << "          |___|                       ";

    gotoxy(x+=39, y-=3);
    cout << Jugador_2;

    x-=39;
    y+=3;
    gotoxy(x,y++);
    cout << " _____         _           ";
    gotoxy(x,y++);
    cout << "|  _  |_ _ ___| |_ ___ ___ ";
    gotoxy(x,y++);
    cout << "|   __| | |   |  _| . |_ -|";
    gotoxy(x,y++);
    cout << "|__|  |___|_|_|_| |___|___|";
    cout << "";
    cout << "";

    ImprimeMarcador(marcador_J2, 2);

    Tablero(dificultad, marcador_J1, marcador_J2);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------







//-------------------------------------------------------------------------------------------------------
void ElegirNombresJugadores(char J1[], char J2[])
{
    EstableceColor(BLANCO, NEGRO);
    int x = 73, y = 1;
    gotoxy(x, y++);
    cout << "   ___ _   _ _____   ___ ______ ___________ _____ _____ ";
    gotoxy(x, y++);
    cout << "  |_  | | | |  __ \\ / _ \\|  _  \\  _  | ___ \\  ___/  ___|";
    gotoxy(x, y++);
    cout << "    | | | | | |  \\// /_\\ \\ | | | | | | |_/ / |__ \\ `--. ";
    gotoxy(x, y++);
    cout << "    | | | | | | __ |  _  | | | | | | |    /|  __| `--. \\";
    gotoxy(x, y++);
    cout << "/\\__/ / |_| | |_\\ \\| | | | |/ /\\ \\_/ / |\\ \\| |___/\\__/ /";
    gotoxy(x, y++);
    cout << "\\____/ \\___/ \\____/\\_| |_/___/  \\___/\\_| \\_\\____/\\____/ ";

    x = 13;
    y+=3;

    gotoxy(13, y++);
    cout << "  _____       _                 _                           _                         _             ";
    cout << "       _                      _           _                       _            ";
    gotoxy(13,y++);
    cout << " |_   _|     | |               | |                         | |                       | |            ";
    cout << "      | |                    | |         (_)                     | |           ";
    gotoxy(13,y++);
    cout << "   | |  _ __ | |_ _ __ ___   __| |_   _ _______ __ _    ___| |  _ __   ___  _ __ ___ | |__  _ __ ___";
    cout << "    __| | ___    ___ __ _  __| | __ _     _ _   _  __ _  __ _  __| | ___  _ __ ";
    gotoxy(13,y++);
    cout << "   | | | '_ \\| __| '__/ _ \\ / _` | | | |_  / __/ _` |  / _ \\ | | '_ \\ / _ \\| '_ ` _ \\| '_ \\| '__/ _ \\";
    cout << "  / _` |/ _ \\  / __/ _` |/ _` |/ _` |   | | | | |/ _` |/ _` |/ _` |/ _ \\| '__|";
    gotoxy(13,y++);
    cout << "  _| |_| | | | |_| | | (_) | (_| | |_| |/ / (_| (_| | |  __/ | | | | | (_) | | | | | | |_) | | |  __/";
    cout << " | (_| |  __/ | (_| (_| | (_| | (_| |   | | |_| | (_| | (_| | (_| | (_) | |   ";
    gotoxy(13,y++);
    cout << " |_____|_| |_|\\__|_|  \\___/ \\__,_|\\__,_/___\\___\\__,_|  \\___|_| |_| |_|\\___/|_| |_| |_|_.__/|_|  \\___|";
    cout << "  \\__,_|\\___|  \\___\\__,_|\\__,_|\\__,_|   | |\\__,_|\\__, |\\__,_|\\__,_|\\___/|_|   ";
    gotoxy(13,y++);
    cout << "                                                                                                     ";
    cout << "                                       _/ |       __/ |                       ";
    gotoxy(13,y++);
    cout << "                                                                                                     ";
    cout << "                                      |__/       |___/                        ";

    x = 1;
    y += 2;

    EstableceColor(BLANCO, ROJOCLARO);
    gotoxy(x, y++);
    cout << "                             (         )   (                           ";
    gotoxy(x, y++);
    cout << "              (        (     )\\ )   ( /(   )\\ )     _ _        )       ";
    gotoxy(x, y++);
    cout << "   (      (   )\\ )     )\\   (()/(   )\\()) (()/(   _| | |_   ( /(       ";
    gotoxy(x, y++);
    cout << "   )\\     )\\ (()/(  ((((_)(  /(_)) ((_)\\   /(_)) |_  .  _|  )\\())      ";
    gotoxy(x, y++);
    cout << "  ((_) _ ((_) /(_))_ )\\ _ )\\(_))_    ((_) (_))   |_     _| ((_)\\    _  ";
    gotoxy(x, y++);
    cout << " _ | || | | |(_)) __|(_)_\\(_)|   \\  / _ \\ | _ \\    |_|_|    / (_)  (_) ";
    gotoxy(x, y++);
    cout << "| || || |_| |  | (_ | / _ \\  | |) || (_) ||   /             | |     _  ";
    gotoxy(x, y++);
    cout << " \\__/  \\___/    \\___|/_/ \\_\\ |___/  \\___/ |_|_\\             |_|    (_) ";

    y-=2;
    do{
        CambiaCursor(ENCENDIDO, SOLIDO);
        gotoxy(73, y);
        cin.getline(J1, 1024);
    }while(J1[0] == '\0');

    EstableceColor(BLANCO, AZULCLARO);
    gotoxy(x, y+=6);
    cout << "                             (         )   (                           ";
    gotoxy(x, y++);
    cout << "              (        (     )\\ )   ( /(   )\\ )     _ _        )       ";
    gotoxy(x, y++);
    cout << "   (      (   )\\ )     )\\   (()/(   )\\()) (()/(   _| | |_   ( /(       ";
    gotoxy(x, y++);
    cout << "   )\\     )\\ (()/(  ((((_)(  /(_)) ((_)\\   /(_)) |_  .  _|  )(_))      ";
    gotoxy(x, y++);
    cout << "  ((_) _ ((_) /(_))_ )\\ _ )\\(_))_    ((_) (_))   |_     _| ((_)     _  ";
    gotoxy(x, y++);
    cout << " _ | || | | |(_)) __|(_)_\\(_)|   \\  / _ \\ | _ \\    |_|_|   |_  )   (_) ";
    gotoxy(x, y++);
    cout << "| || || |_| |  | (_ | / _ \\  | |) || (_) ||   /             / /     _  ";
    gotoxy(x, y++);
    cout << " \\__/  \\___/    \\___|/_/ \\_\\ |___/  \\___/ |_|_\\            /___|   (_) ";

    y-=2;

    do{
        CambiaCursor(ENCENDIDO, SOLIDO);
        gotoxy(73, y);
        cin.getline(J2, 1024);
    }while(J2[0] == '\0');

    CambiaCursor(APAGADO);

    EstableceColor(BLANCO, NEGRO);
    system("cls");
}
//-------------------------------------------------------------------------------------------------------------


void Tablero(int dificultad, int &marcador1, int &marcador2)
{
    switch (dificultad){
        case PRINCIPIANTE: Juego_Principiante(marcador1, marcador2); break;
        case INTERMEDIO: Juego_Intermedio(marcador1, marcador2); break;
        case EXPERTO: Juego_Experto(marcador1, marcador2); break;
    }
}
//--------------------------------------------------------------------------------------------------------------

void GeneraTablero(int Tablero[][10], int renTablero, int MazoCartas[])
{
    gotoxy(20, 10);
    int indiceCartas = 0;
    for (int i = 0 ; i < renTablero ; ++i){
        for (int j = 0 ; j < 5 ; ++j) Tablero[i][j] = MazoCartas[indiceCartas++];
    }
}
//---------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------

void ImprimeMarcador(int &marcador, int jugador)
{
    int x, y = 50;
    if (jugador == 1){
        EstableceColor(BLANCO, ROJOCLARO);
        x = 50;
    }else{
        EstableceColor(BLANCO, AZULCLARO);
        x = 160;
    }

    gotoxy(x,y);
    cout << marcador;

}
//--------------------------------------------------------------------------------------------------------------------------------------------------
