cmake_minimum_required(VERSION 3.5)

project(concordo VERSION 1.0 LANGUAGES CXX)

include_directories (include)

add_executable( concordo 
                src/main.cpp
                src/Canal.cpp
                src/CanalTexto.cpp
                src/CanalVoz.cpp
                src/Mensagem.cpp              
                src/Menus.cpp
                src/Servidor.cpp
                src/Usuario.cpp
                src/Concordo.cpp
                src/Sistema.cpp)
set_property(TARGET concordo PROPERTY CXX_STANDARD 20)