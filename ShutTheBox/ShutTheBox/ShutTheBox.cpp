// ShutTheBox.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <tchar.h>
using namespace std;


int ifrechnung(void);
void spielfeld();
void win();
int zahl1 = 1, zahl2 = 2, zahl3 = 3, zahl4 = 4, zahl5 = 5, zahl6 = 6, zahl7 = 7, zahl8 = 8, zahl9 = 9;
int wurfel1 = 0, wurfel2 = 0, auswahlzahl = 0, wurfelzsm = 0;
int punktzahl = 45, gewonnen = 0;

int main()
{
    SetConsoleTitle(_T("Shut the Box"));

    do {
        
        spielfeld();
        srand(time(NULL));
        wurfel1 = rand() % 6 + 1;
        wurfel2 = rand() % 6 + 1;
        wurfelzsm = wurfel1 + wurfel2;


        std::cout << "\n\n\n\n" << setw(55) << "W" << char(129) << "rfel 1.: " << wurfel1 << endl;
        std::cout << setw(55) << "W" << char(129) << "rfel 2.: " << wurfel2 << endl;
        std::cout << setw(65) << "Zusammen: " << wurfelzsm;
        std::cout << endl << "W" << char(132) << "hlen sie ein Zahl aus: ";
        cin >> auswahlzahl;
        
        ifrechnung();

        while (wurfelzsm != 0) {
            if (wurfelzsm <= -1) {
                system("cls");
                cout << setw(50) << "Sie haben Verloren!!" << endl;
                Sleep(3000);
                exit(0);
            }
            spielfeld();
            cout << "\n\n\n\n" << setw(65) << "Zusammen: " << wurfelzsm;
            cout << endl << "W" << char(132) << "hlen sie ein Zahl aus: ";
            cin >> auswahlzahl;
            ifrechnung();
        }
        

      /*  if (gewonnen == 9) {//Gewonnen muss auf 9 oder so sein und wurfelzsm auf 0 | Dann win
            win();
        }*/
    } while (1);
}

void win() {
    cout << setw(50) << "Du hast gewonnen!!" << endl;
    Sleep(3000);
    exit(0);
}

void spielfeld() {
    system("cls");
    cout << setw(24) << "|" << setw(4) << zahl1 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl2 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl3 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl4 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl5 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl6 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl7 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl8 << setw(4);
    cout << setw(4) << "|" << setw(4) << zahl9 << setw(4) << "|";
}

int ifrechnung(void) {


    if (auswahlzahl == 1) {
        zahl1 = 0;
        wurfelzsm = wurfelzsm - 1;
        punktzahl = punktzahl - 1;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 2) {
        zahl2 = 0;
        wurfelzsm = wurfelzsm - 2;
        punktzahl = punktzahl - 2;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 3) {
        zahl3 = 0;
        wurfelzsm = wurfelzsm - 3;
        punktzahl = punktzahl - 3;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 4) {
        zahl4 = 0;
        wurfelzsm = wurfelzsm - 4;
        punktzahl = punktzahl - 4;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 5) {
        zahl5 = 0;
        wurfelzsm = wurfelzsm - 5;
        punktzahl = punktzahl - 5;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 6) {
        zahl6 = 0;
        wurfelzsm = wurfelzsm - 6;
        punktzahl = punktzahl - 6;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 7) {
        zahl7 = 0;
        wurfelzsm = wurfelzsm - 7;
        punktzahl = punktzahl - 7;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 8) {
        zahl8 = 0;
        wurfelzsm = wurfelzsm - 8;
        punktzahl = punktzahl - 8;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl == 9) {
        zahl9 = 0;
        wurfelzsm = wurfelzsm - 9;
        punktzahl = punktzahl - 9;
        gewonnen++;
        return wurfelzsm;
    }

    if (auswahlzahl > 9) {

    }

}
