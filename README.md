Mini Projeto em C — Sistema Bancário no Terminal

Hoje desenvolvi um pequeno sistema bancário utilizando a linguagem C para praticar lógica de programação e estruturas de controle.

O programa possui um menu interativo onde o usuário pode:

• Consultar saldo
• Depositar dinheiro
• Sacar dinheiro
• Sair do sistema

Durante o desenvolvimento implementei algumas validações importantes, como:

 Impedir que o usuário deposite valor negativo ou zero
 Impedir que o usuário saque valor negativo ou zero
 Impedir que o usuário saque um valor maior que o saldo disponível
 Detectar quando o usuário informa uma opção que não existe no menu


Conceitos praticados neste projeto:

• Estrutura de repetição while
• Estrutura de decisão switch
• Condicionais if / else
• Validação de dados do usuário
• Controle de fluxo com continue



## Como executar o projeto

1. Clone o repositório

git clone https://github.com/seu-usuario/nome-do-repositorio.git

2. Entre na pasta do projeto

cd nome-do-repositorio

3. Compile o programa

gcc banco.c -o banco

4. Execute o programa

./banco
