# Quebra-Cabeca-Numeros



👨🏻‍💻Apresentação do problema👨🏻‍💻:

Trabalho de lógica de programação feito à pedido do Centro Federal de Educação de Minas Gerais (CEFET-MG).
Consiste em criar um jogo de tabuleiro quadrado de tamanho de lado já definido pelo programa, sendo que um espaço esteja "vazio" para possibilitar a movimentação de peças.
Sendo assim, será iniciado com a disposição dos números feita de forma aleatória e o objetivo do usuário é organizá-las de forma crescente e deixar o espaço "vazio como última peça, no canto inferior direito do tabuleiro.
Além disso, é necessário adicionar o atalho das setas do teclado, como forma de informar o movimento, o que tornará necessário o uso da tabela ASCII para o funcionamento do programa.
Portanto, o jogo acaba quando é verificado que as condições de vitória foram atendidas e o programa se encerra.


📕Manual do usuário📕:

-Objetivo:
Ordenar a matriz de forma que siga a ordem crescente dos números.

-Sobre os movimentos:
Qualquer número pode ser escolhido desde que esteja presente no jogo.
Apenas os números ao lado do ponto poderão ser movidos.
Os números só podem ser movimentados para a posição em que o ponto está.
Qualquer movimento entre números é inválido e não pode acontecer.

-Entrada:
Quando o programa pedir que o usuário forneça o número que deseja mover, digite o número e em seguida tecle “Enter”.
Quando o programa pedir que o usuário forneça o movimento que deseja fazer, digite apenas a tecla da seta que corresponde ao movimento desejado.


🔧Funções do programa🔧:

-geraMatrizAleatoria: Preenche aleatoriamente uma matriz NxN com todos os números de 1 até (N*N)-1, deixando o espaço que sobra com um ponto.

-matrizCerta: Verifica, após todo movimento realizado pelo jogador, se a matriz
está ordenada corretamente.

-printMatriz: Imprime, após cada movimento realizado pelo jogador, como a
matriz está ordenada

-trocaMovimento: Realiza a troca de posições na matriz e verifica as condições
para a jogada ser possível.

-main: Chama as funções e informa ao usuário quando ele ganha o jogo
