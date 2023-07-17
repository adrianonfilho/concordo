#ifndef MENSAGEM_H
#define MENSAGEM_H

#include <string>

using namespace std;

/*!
 *   @file Mensagem.h
 *   @brief Cabeçalho da classe Mensagem
 */

/// @class Mensagem Mensagem.h "include/Mensagem.h"
/// @brief Implementação da classe Mensagem
class Mensagem
{
private:
    /// @brief String para dataHora da mensagem
    string dataHora;
    /// @brief int para identificar quem enviou a mensagem
    int enviadaPor;
    /// @brief Conteúdo da mensagem
    string conteudo;

public:
/// @brief Construtor
    Mensagem();
    /// @brief Construtor inicializando com conteúdo
    /// @param enviadaPor, conteudo
    Mensagem(int enviadaPor, string conteudo);
    /// @brief Faz o get de dataHora
    /// @return dataHora    
    string getDataHora();
    /// @brief Faz o set de dataHora
    void setDataHora(string dataHora);
    /// @brief Faz o get de enviadaPor
    /// @return enviadaPor
    int getEnviadaPor();
    /// @brief Faz o set de enviadaPor
    /// @param id
    void setEnviadaPor(int id);
    /// @brief Faz o get de conteudo
    /// @return conteudo
    string getConteudo();
    /// @brief Faz o set de conteudo
    void setConteudo(string conteudo);
};

#endif // MENSAGEM_H
