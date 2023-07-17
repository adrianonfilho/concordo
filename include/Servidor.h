#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <string>
#include <vector>
#include <memory>

#include "CanalTexto.h"
#include "CanalVoz.h"
#include "Canal.h"

using namespace std;
/*!
 *   @file Servidor.h
 *   @brief Cabeçalho da classe Servidor
 */

/// @class Servidor Servidor.h "include/Servidor.h"
/// @brief Implementação da classe Servidor
class Servidor
{
private:
    /// @brief int para id do usuário dono do servidor
    int usuarioDonoId;
    /// @brief string nome para nomear servidor
    string nome;
    /// @brief string descricao para descrever servidor
    string descricao;
    /// @brief string com código de convite para server
    string codigoConvite;
    /// @brief vector de canais com os canais do de texto do servidor
    vector<shared_ptr<CanalTexto>> canaisTexto;
    /// @brief vector de canais com os canais do de texto do servidor
    vector<shared_ptr<CanalVoz>> canaisVoz;
    /// @brief vector de int com os IDs dos participantes do servidor
    vector<int> participantesIds;

public:
    /// @brief Construtor
    /// @param usuarioDonoId, nome
    Servidor(int usuarioDonoId, string nome);
    /// @brief Faz o get de UsuarioDonoId
    /// @return UsuarioDonoId
    int getUsuarioDonoId();
    /// @brief Faz o set de UsuarioDonoId
    /// @param id
    void setUsuarioDonoId(int id);
    /// @brief Faz o get de nome
    /// @return nome
    string getNome();
    /// @brief Faz o set de nome
    /// @param nome
    void setNome(string nome);
    /// @brief Faz o get de descricao
    /// @return descricao
    string getDescricao();
    /// @brief Faz o set de descricao
    /// @param descricao
    void setDescricao(string descricao);
    /// @brief Faz o get de codigoConvite
    /// @return codigoConvite
    string getCodigoConvite();
    /// @brief Faz o set de codigoConvite
    /// @param codigoConvite
    void setCodigoConvite(string codigoConvite);
    /// @brief Faz o get de canais de texto
    /// @return canais de texto
    vector<shared_ptr<CanalTexto>> getCanaisTexto();
    /// @brief Adiciona um canal de texto
    /// @param canalTexto
    void adicionarCanalTexto(shared_ptr<CanalTexto> canalTexto);
    /// @brief Faz o get de canais de voz
    /// @return canais de voz
    vector<shared_ptr<CanalVoz>> getCanaisVoz();
    /// @brief Adiciona um canal de voz
    /// @param canalVoz
    void adicionarCanalVoz(shared_ptr<CanalVoz> canalVoz);
    /// @brief Faz o get do id dos participantes
    /// @return participantesIds
    vector<int> getParticipantesIds();
    /// @brief Adiciona um participante
    /// @param id
    void adicionarParticipanteId(int id);
};

#endif // SERVIDOR_H
