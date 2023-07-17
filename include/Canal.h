#ifndef CANAL_H
#define CANAL_H

#include <string>
#include <memory>
#include <vector>
#include <iostream>

#include "Mensagem.h"
#include "Usuario.h"

using namespace std;
/*!
 *   @file Canal.h
 *   @brief Cabeçalho da classe Canal
 */


/// @class Canal Canal.h "include/Canal.h"
/// @brief Implementação da classe Canal
class Canal
{
private:
    /// @brief String para nome do canal
    string nome;

public:
    /// @brief Construtor
    /// @param nome
    Canal(string nome);
    /// @brief Faz o get do nome do canal
    /// @return Nome do canal
    string getNome();
    /// @brief Faz o set do nome do canal
    /// @param nome String para nome do canal
    void setNome(string nome);
    /// @brief Envia mensagem
    /// @param mensagem
    virtual void enviarMensagem(Mensagem mensagem) = 0;
    virtual void listarMensagens(vector<shared_ptr<Usuario>> usuariosCadastrados) = 0;
};

#endif // CANAL_H
