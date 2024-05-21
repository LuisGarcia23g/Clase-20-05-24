//Programa para hacer piedra papel o tijera

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){
int t=0, opcionUs=0, opcionPc=0, gano=0, empato=0, perdio=0, partidas=0, continuar=0;


cout << "Bienvenido al juego de piedra, papel o tijera \n";
do {

//Random para la Pc
t = time (NULL);
srand (t);
opcionPc = rand ()%3+1;

cout << "Escriba 1 si elije piedra \n";
cout << "Escriba 2 si elije papel \n";
cout << "Escriba 3 si elije tijera \n";
cout << "Elige entre 1 y 3: ";
cin >> opcionUs;

//Jugada de la Pc
cout << "La computadora elije: " << opcionPc;


//Resultado
if (opcionUs==opcionPc){
    cout << " Empate \n";
    empato++;
} else if ((opcionUs==1 && opcionPc==3) || (opcionUs==2 && opcionPc==1) || (opcionUs==3 && opcionPc==2)){
    cout << " Ganaste \n";
    gano++;
} else {
    cout << " Perdiste \n";
    perdio++;
}
partidas++;

//Preguntar si quiere jugar de nuevo
cout << "¿Quieres jugar de nuevo? (1 si y 2 no): ";
cin >> continuar;
if ((continuar !=1)){
    break;
}



}
while (true);

cout << "Resumen de las partidas: \n";
cout << "Total de partidas jugadas: " << partidas << "\n";
cout << "Victorias: " << gano << "\n";
cout << "Empates: " << empato << "\n";
cout << "Derrotas: " << perdio;

    return 0;
}
