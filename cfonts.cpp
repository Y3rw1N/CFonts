#include <iostream>
#include <fstream>
#include <cstdlib>

int selector;

void process() {
    switch (selector) {
    case 1:
        system("cp $HOME/CFonts/fonts/caskaydiacove-mono.ttf $HOME/.termux/font.ttf");
        system("termux-reload-settings");
        break;
    case 2:
        system("cp $HOME/CFonts/fonts/iosevka-term-mono-regular.ttf $HOME/.termux/font.ttf");
        system("termux-reload-settings");
        break;
    case 3:
        system("cp $HOME/CFonts/fonts/hack-mono-regular.ttf $HOME/.termux/font.ttf");
        system("termux-reload-settings");
        break;
    case 4:
        system("cp $HOME/CFonts/fonts/jetbrainsmono-regular.ttf $HOME/.termux/font.ttf");
        system("termux-reload-settings");
        break;
    default:
        break;
    }
   
}

void menu() {
    system("clear");
    std::cout << "Que fuente quieres escojer?\n";
    std::cout << "[1] Caskaydia Cove\n";
    std::cout << "[2] Iosevka\n";
    std::cout << "[3] Hack\n";
    std::cout << "[4] JetBrainsMono\n";
    std::cout << "[5] Salir\n";
    std::cout << "Desarrollado por \033[33mNerd Fonts\033[0m>> ";
    std::cin >> selector;
    process();
}


int main() { // os check 
    std::ifstream file_exists;
    file_exists.open("/data/data/com.termux/files/usr/bin/bash");
    if (file_exists) {
        menu();
    }
    else {
        std::cout << "tu os no es compatible con este script";
    }
}
