# Criptografia Avançada em C 🔐

Projeto unificado em linguagem C que aplica criptografia de substituição (Cifra de César) combinada com progressões matemáticas e séries, desenvolvido para a disciplina de Algoritmos e Pensamento Computacional.

## 💡 Conceito do Programa
O sistema aplica duas camadas simultâneas de criptografia em uma palavra secreta:

1. **Camada 1:** Deslocamento estático (Cifra de César tradicional) baseado em um SHIFT fixo.
2. **Camada 2:** Deslocamento dinâmico letra a letra, utilizando uma sequência matemática escolhida pelo usuário.

## 🧮 Sequências Matemáticas Implementadas
O programa possui um menu interativo que permite a análise das seguintes progressões:

* **Progressão Aritmética (PA):** Incremento linear.
* **Progressão Geométrica (PG):** Incremento exponencial.
* **Série de Fibonacci:** A soma dos termos anteriores atuando como deslocamento orgânico.

## 🧠 Competências Desenvolvidas (Taxonomia de Bloom)

* **Lembrar/Compreender:** Manipulação da tabela ASCII e aritmética modular (`% 26`).
* **Aplicar:** Estruturação de laços `for` e lógica de ponteiros de arquivos (`FILE *`).
* **Analisar/Avaliar:** Comparação direta do impacto e da segurança de usar PAs, PGs e Fibonacci na quebra de padrões visuais da string.
* **Criar:** Desenvolvimento de um sistema personalizável com persistência de dados em arquivo `.txt`.

## ⚙️ Como Executar
Por ser construído utilizando as bibliotecas padrão `<stdio.h>` e `<string.h>`, o código-fonte `main.c` pode ser compilado em qualquer ambiente (como Code::Blocks, GCC ou editores online). O resultado da execução gerará automaticamente o log no arquivo `resultado_criptografia.txt`.
