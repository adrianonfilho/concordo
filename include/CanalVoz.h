#ifndef CANALVOZ_H
#define CANALVOZ_H

#include <iostream>
#include <string>
#include <memory>

#include "Mensagem.h"
#include "Canal.h"

using namespace std;

/*!
 *   @file CanalVoz.h
 *   @brief Cabeçalho da classe CanalVoz
 */

/// @class CanalVoz CanalVoz.h "include/CanalVoz.h"
/// @brief Implementação da classe CanalVoz (herdando de Canal)
class CanalVoz : public Canal
{
private:
    /// @brief Última mensagem
    shared_ptr<Mensagem> ultimaMensagem;
public:
    /// @brief Construtor
    /// @param nome
    CanalVoz(string nome);
    /// @brief Faz o get da última mensagem
    /// @return ultimaMensagem   
    shared_ptr<Mensagem> getUltimaMensagem();
    /// @brief Envia mensagem
    /// @param mensagem
    void enviarMensagem(Mensagem mensagem);
    void listarMensagens(vector<shared_ptr<Usuario>> usuariosCadastrados);
};

#endif // CANALVOZ_H
