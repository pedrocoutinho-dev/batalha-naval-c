# ⚓ Batalha Naval - MateCheck

Este projeto é uma simulação lógica do jogo **Batalha Naval**, desenvolvido em **C**. O foco deste desafio foi o trabalho avançado com matrizes bidimensionais e algoritmos de preenchimento de área.

## 🚀 Funcionalidades
- **Tabuleiro 10x10**: Representação completa de um campo de batalha naval.
- **Posicionamento Estratégico**: Navios posicionados horizontalmente, verticalmente e diagonalmente.
- **Habilidades Especiais**: Implementação de padrões de ataque complexos:
  - **Cruz**: Ataque em linha e coluna simultâneos.
  - **Cone**: Padrão de ataque em pirâmide.
- **Renderização em Console**: Visualização clara do tabuleiro (0 para água, 3 para navios, 1 para ataques).

## 🛠️ Tecnologias
- Linguagem C (Padrão ISO C11)
- Manipulação de Matrizes (Arrays Multidimensionais)
- Estruturas de Repetição Aninhadas (`for` loops)

## 📖 Como Rodar
Compile o arquivo com um compilador C (GCC):
```bash
gcc batalha_naval.c -o batalha_naval
./batalha_naval
