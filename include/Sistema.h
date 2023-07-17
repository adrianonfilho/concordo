#ifndef SISTEMA_H
#define SISTEMA_H

#include <string>
#include <vector>
#include <memory>

#include "Usuario.h"
#include "Servidor.h"
#include "Canal.h"

using namespace std;

/*!
 *   @file Sistema.h
 *   @brief Cabeçalho da classe Sistema
 */

/// @class Sistema Sistema.h "include/Sistema.h"
/// @brief Implementação da classe Sistema
class Sistema
{
private:
    /// @brief Vector de usuários
    vector<shared_ptr<Usuario>> usuarios;
    /// @brief Vector de servidores
    vector<shared_ptr<Servidor>> servidores;
    /// @brief Usuario Logado
    shared_ptr<Usuario> usuarioLogado;
    /// @brief Pointer para o atual servidor
    shared_ptr<Servidor> servidorAtual;
    /// @brief Pointer para atual canal
    shared_ptr<Canal> canalAtual;
    /// @brief Booleana para sair
    shared_ptr<bool> sair;

public:
    /// @brief Construtor
    Sistema();
    /// @brief Destrutor
    ~Sistema();
    /// @brief Faz o get de usuários
    /// @return usuarios
    vector<shared_ptr<Usuario>> getUsuarios();
    /// @brief Faz o get de usuário por id
    /// @param id
    /// @return usuario selecionado
    shared_ptr<Usuario> getUsuarioPorId(int id);
    /// @brief Adiciona usuário
    /// @param usuario
    void adicionarUsuario(shared_ptr<Usuario> usuario);
    /// @brief Faz o get de servidores
    /// @return servidores
    vector<shared_ptr<Servidor>> getServidores();
    /// @brief Adiciona servidor
    /// @param servidor
    void adicionarServidor(shared_ptr<Servidor> servidor);
    /// @brief Remove servidor
    /// @param servidor
    void removerServidor(shared_ptr<Servidor> servidor);
    /// @brief Faz o get de usuarioLogado
    /// @return usuarioLogado
    shared_ptr<Usuario> getUsuarioLogado();
    /// @brief Faz o set de usuarioLogado
    /// @param usuario
    void setUsuarioLogado(shared_ptr<Usuario> usuario);
    /// @brief Faz o get de servidorAtual
    /// @return servidorAtual
    shared_ptr<Servidor> getServidorAtual();
    /// @brief Faz o set de usuarioLogado
    /// @param servidor
    void setServidorAtual(shared_ptr<Servidor> servidor);
    /// @brief Faz o get de canalAtual
    /// @return canalAtual
    shared_ptr<Canal> getCanalAtual();
    /// @brief Faz o set de canalAtual
    /// @param canal
    void setCanalAtual(shared_ptr<Canal> canal);
    /// @brief Sair
    shared_ptr<bool> getSair();
    /// @brief Sair
    void setSair(shared_ptr<bool> sair);
};

#endif // SISTEMA_H
