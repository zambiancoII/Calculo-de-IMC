# ⚖️ Calculadora de IMC em C++

Uma aplicação simples e eficiente desenvolvida em **C++** para calcular o **Índice de Massa Corporal (IMC)** de um usuário com base no peso e na altura informados, exibindo a respectiva classificação de saúde.

---

## 📌 Sobre o Projeto

Este projeto foi desenvolvido em sala de aula durante as atividades acadêmicas orientadas pelo **Professor Cação**. 

O objetivo principal da atividade foi praticar a modularização de código em C++, utilizando **funções com retorno** (para o cálculo matemático) e **funções sem retorno (`void`)** para a lógica condicional e exibição das mensagens no terminal.

---

## ⚙️ Como Funciona

1. O usuário informa seu **peso** (em kg).
2. O usuário informa sua **altura** (em metros).
3. A função `calcIMC()` realiza o cálculo matemático baseado na fórmula:
            IMC =  peso
                  altura^2
4. A função `classIMC()` avalia o valor obtido e exibe a faixa de classificação correspondente no terminal.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Biblioteca Padrão:** `<iostream>`

---

## 🚀 Como Executar o Projeto

Acesse a pasta do projeto:

cd seu-repositorio
Compile o arquivo C++:

g++ main.cpp -o imc
Execute o programa:

No Linux/macOS:

./imc
No Windows:

DOS
imc.exe


👨‍🏫 Créditos e Agradecimentos
Projeto desenvolvido durante as aulas ministradas pelo Professor Cação, como exercício prático de lógica de programação e estruturas de controle em C++.