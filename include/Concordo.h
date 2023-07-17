#ifndef CONCORDO_H
#define CONCORDO_H

#include <string>
#include <time.h>
#include <memory>
#include "Sistema.h"
#include "Mensagem.h"

using namespace std;

/*!
 *   @file Concordo.h
 *   @brief Definição de algumas funções
 */

/// @brief Função para obter data atual
const string obterDataAtual();

/// @brief Função para processar comandos e executá-los
void executarComando(string entrada, shared_ptr<Sistema> sistema);

#endif // CONCORDO_H