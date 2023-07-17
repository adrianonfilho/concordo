#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using namespace std;

/*!
 *   @file Usuario.h
 *   @brief Cabeçalho da classe Usuario
 */


/// @class Usuario Usuario.h "include/Usuario.h"
/// @brief Implementação da classe Usuario
class Usuario
{
private:
    /// @brief Atributo int id para identificação
    int id;
    /// @brief Atributo string nome para nomear usuário
    string nome;
    /// @brief Atributo string email para email do usuário
    string email;
    /// @brief Atributo string senha para senha do usuário
    string senha;

    static int contador;

public:
    /// @brief Construtor
    /// @param nome, email, senha
    Usuario(string nome, string email, string senha);
    /// @brief Destructor
    ~Usuario();
    /// @brief Faz o get de id
    /// @return id
    int getId();
    /// @brief Faz o set de id
    /// @param id
    void setId(int id);
    /// @brief Faz o get de nome
    /// @return nome
    string getNome();
    /// @brief Faz o set de nome
    /// @param nome
    void setNome(string nome);
    /// @brief Faz o get de email
    /// @return email
    string getEmail();
    /// @brief Faz o set de email
    /// @param email
    void setEmail(string email);
    /// @brief Faz o get de senha
    /// @return senha
    string getSenha();
    /// @brief Faz o set de senha
    /// @param senha
    void setSenha(string senha);
};

#endif // USUARIO_H
