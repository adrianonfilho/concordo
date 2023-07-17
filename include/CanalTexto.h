#ifndef CANALTEXTO_H
#define CANALTEXTO_H

#include "Canal.h"
#include "Mensagem.h"

#include <string>
#include <vector>
#include <memory>
#include <iostream>

using namespace std;
/*!
 *   @file CanalTexto.h
 *   @brief Cabeçalho da classe CanalTexto
 */



/// @class CanalTexto CanalTexto.h "include/CanalTexto.h"
/// @brief Implementação da classe CanalTexto (herdando de Canal)
class CanalTexto : public Canal
{
private:
    /// @brief Vector de mensagens
    vector<shared_ptr<Mensagem>> mensagens;

public:
    /// @brief Construtor
    /// @param nome
    CanalTexto(string nome);
    /// @brief Faz o get de mensagens
    /// @return Mensagens
    vector<shared_ptr<Mensagem>> getMensagens();
    /// @brief Envia mensagem
    void enviarMensagem(Mensagem mensagem);
    void listarMensagens(vector<shared_ptr<Usuario>> usuariosCadastrados);
};

#endif // CANALTEXTO_H
