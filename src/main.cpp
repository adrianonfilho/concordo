#include <iostream>
#include <string>
#include <memory>
#include <fstream>

#include "Concordo.h"
#include "Mensagem.h"
#include "Servidor.h"
#include "Sistema.h"
#include "Usuario.h"
#include "Menus.h"
#include "Canal.h"
#include "CanalTexto.h"
#include "CanalVoz.h"

using namespace std;

int main()
{
    std::ifstream f("concordo.txt");
    if (f.is_open())
        std::cout << f.rdbuf() << endl;
    
    shared_ptr<Sistema> sistema(new Sistema());

    menu(move(sistema));

    return 0;
}