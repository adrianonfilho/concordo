# Concordo

"Concordo" é um projeto da disciplina de Linguagem de Programação 1. A ideia é fazer um programa em terminal semelhante ao Discord.

# Aluno

Adriano Nóbrega Azevedo Filho, matrícula 20210047296.


# Como rodar o projeto

Para rodar o Concordo, siga os seguintes passos:

1. Execute o CMake:

```
cmake .
```

2. Compile o código:

```
make
```

3. Execute o programa:

```
./concordo
```

Para rodar o projeto utilizando o script de teste (usa todas as funcionalidades), utilize:

```
./concordo < ../script.txt
```
# Funcionalidades

Concordo, atualmente, conta com todas as funcionalidades da Parte I e II:

**A1 - Se não estiver logado (Assim que entra no sistema)**

- A1.1 - Sair do sistema: `quit`
- A1.2 - Criar usuário: `create-user <email> <senha_sem_espaços> <nome com espaços>`
- A1.3 - Entrar no sistema: `login <email> <senha>`

**A2 - Interações básicas com Servidores (Se estiver logado)**

- A2.1 - Desconectar do Concordo: `disconnect`
- A2.2 - Criar servidores: `create-server <nome>`
- A2.3 - Mudar a descrição do servidor: `set-server-desc <nome> "<descrição>"`
- A2.4 - Setar código de convite para o servidor: `set-server-invitecode <nome> <codigo>`
- A2.5 - Listar servidores: `list-servers`
- A2.6 - Remover servidor: `remove-server <nome>`
- A2.7 - Entrar em um servidor: `enter-server <nome>`
- A2.8 - Sair de um servidor: `leave-server`
- A2.9 - Listar pessoas no servidor: `list-participants`

**B1 - Gestão de canais (se tiver entrado no servidor)**
- B1.1 - Listar canais do servidor:  `list-channels`
- B1.2 - Criar um canal no servidor: `create-channel <nome> <tipo>`
- B1.3 - Entrar em um canal do servidor: `enter-channel <nome>`
- B1.4 - Sair do canal : `leave-channel`

**B2 - Gestão de mensagens**

- B2.1 - Enviar mensagem para o canal : `send-message <mensagem>`
- B2.2 - Visualizar mensagens do canal : `comando list-messages`

# Dificuldades

Procrastinação e problemas pessoais.

Nível elevado do trabalho.
