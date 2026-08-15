# diferenca_consec
Escreva um algoritmo que leia um array A de n números inteiros e retorne a maior diferença de 2 (dois) elementos consecutivos de A.

# sub_contigua
Escreva um algoritmo que retorne a quantidade da maior sublista contígua não decrescente de um array A de n elementos. Uma sublista contígua não decrescente é uma sequencia contígua em A onde todo elemento da
lista é menor-igual ao seu sucessor.

# soma_s
Escreva um algoritmo que leia um array a de n (2 ≤ n ≤ 10^9) números inteiros e determine se existe no array um par de números cuja soma seja s (1 ≤ s ≤ 2 × 10^9), também informado na entrada.

# elementos_repetidos
Dado um array A de n elementos (1 ≤ n ≤ 106), você deve verificar se há elementos repetidos no array. Os
elementos são números inteiros Ai (0 ≤ Ai ≤ 105) e não estão ordenados.

# elementos_repetidos_eqtd
Descreva um algoritmo para determinar quantas vezes cada valor ocorre no array.

# par_de_soma
Este problema consiste em, dado um array de n (1 ≤ n ≤ 106) números inteiros ai (−108 ≤ ai ≤ 108) e um número inteiro S, determinar se existe um par de números no array cuja soma seja S.
Exemplo: Para S = 15, no array { 1 4 9 13 18 20 32 45 } não existe um par de números no array cuja soma seja 15. Já no array { 10 20 9 1 63 6 5 12 } existem dois pares: 9 + 6 = 15 e 10 + 5 = 15.
Faça um programa que use a função implementada para resolver o problema.

# sub_contigua_soma_maxima
Considere um array A de n elementos. Exemplo: A = 10, 5, −17, 20, 50, −1, 3, −30, 10.
O problema consiste em encontrar a maior subsequencia consecutiva cuja soma seja a maior possível. No caso do vetor A a maior soma é 72, que é a soma dos elementos entre os índices 3 e 6 : 20 + 50 + −1 + 3. Não há soma maior do que esse de elementos consecutivos no vetor A. A soma deve possuir pelo menos um elemento, dessa forma não consideramos a soma nula. A sublista deve possuir, pelo menos, um elemento.
Faça um programa que use a função implementada para resolver o problema.

# mais_proximos_cartesiano
Problema Pontos mais próximos no plano cartesiano:
A distância dc1,c2 entre 2 cordenadas c1, formada pelo par (x1, y1) e c2, formada pelo par (x2, y2) pode ser calculada através da fórmula: dc1,c2 = √((x1 − x2)² + (y1 − y2)²).
Dado um conjunto de n cordenadas: Descreva um algoritmo de força bruta que identifique as 2 (duas) cordenadas mais próximas em um plano cartesiano.
Faça um programa que use a função implementada para resolver o problema.

# album_de_fotos
Clara está organizando as fotos da sua última viagem num álbum de fotos. Como ela tem muitas fotos, para
economizar páginas do álbum ela quer colar duas fotos por página do álbum. Como as fotos são retangulares, as fotos podem ser coladas giradas (mas sempre com lados paralelos aos da página do álbum, para preservar o equilíbrio estético do álbum), mas elas devem sempre ficar inteiramente contidas no interior da página, e não devem se sobrepor. Em geral, das muitas formas de posicionar as fotos do álbum só algumas (ou nenhuma) satisfazem estas restrições, então pode ser difícil decidir se é possível colar as duas fotos em uma mesma página do álbum, e por isso Clara pediu a sua ajuda para escrever um programa que, dadas as dimensões da página e das fotos, decide se é possível colar as fotos na página. Por exemplo, cada página pode ser 5 × 7, e duas fotos são 3 × 4. Nesse caso, é possível colar as duas fotos.
A primeira linha da entrada contém dois inteiros X e Y (1 ≤ X, Y ≤ 1000), indicando a largura e a altura da página do álbum. Cada uma das duas linhas seguintes contém dois inteiros L e H (1 ≤ L, H ≤ 1000), indicando a largura e a altura das fotos. O programa deve imprimir uma única linha, contendo um único caractere: 'S', se é possível colar as duas fotos na página do álbum, e 'N', caso contrário.