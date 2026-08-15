# Election
An election is taking place.

N people voted. The 
i-th person 
(1≤i≤N) cast a vote to the candidate named Si.

Find the name of the candidate who received the most votes. The given input guarantees that there is a unique candidate with the most votes.

## Constraints
- 1 ≤ N ≤ 100
- Si is a string of length between 1 and 10 (inclusive) consisting of lowercase English letters.
- N is an integer.
- There is a unique candidate with the most votes.

# Weird Algorithm
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:

3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

## Input
The only input line contains an integer n.

## Output
Print a line that contains all values of n during the algorithm.

## Constraints
1 ≤ n ≤ 10^6

# O sensor diferente (questão MFP)
Input
A primeira linha da entrada possui um inteiro (1 ≤ T ≤ 104), o n ́umero de casos de teste. Cada uma das T linhas seguintes possui 3 inteiros, (−109 ≤ K1, K2, K3 ≤ 109), representando os valores medidos por cada um dos sensores. É garantido que exatamente dois desses valores serão iguais.
Output
Imprima um único n ́umero inteiro: o valor do sensor que apresenta leitura diferente dos outros dois.

# Misturador Frase-Palavra (questão MFP)
Input
A entrada cont ́em uma  ́unica linha com a palavra S. É garantido que  S  ́e uma palavra com |S| letras minÚsculas (2 ≤ |S| ≤ 10, |S| é par).
Output
Imprima duas linhas: a primeira deve conter a palavra A e a segunda a palavra B.

# Oscar (questão MFP)
O que todos mais queríamos finalmente aconteceu: Ainda Estou Aqui venceu o Oscar! A nação brasileira
entrou em êxtase, e o barulho da festa ecoou pelos quatro cantos do mundo. Fogos de artifício, gritos e
panelas batendo marcaram esse momento histórico, e foi tão intenso que chegou a sacudir o planeta!

Mas nem todos compartilharam dessa alegria. Emília, uma autodeclarada inimiga da diversão, ficou furiosa
com tanto barulho. Armada com um medidor de decibéis e um olhar de reprovação, ela passou o dia inteiro
registrando o nível médio do som minuto a minuto. O resultado foi uma lista 1 ≤ A1, A2, · · · , AN ≤ M,
onde cada valor Ak representa a amplitude média do som no minuto k.

Determinada a acabar com a festa, Emília quer provar que a celebração foi um escândalo. Para isso,
ela planeja postar gráficos dramáticos nas redes sociais que “comprovem” que o barulho atingiu níveis
“inaceitáveis”. No entanto, o que ela não quer que ninguém saiba é que pretende manipular os dados para
espalhar fake news!

Ajude Ada a proteger o povo contra essa vilã! Descubra os verdadeiros valores de quantos minutos tiveram
uma amplitude média maior ou igual a k, para todo 1 ≤ k ≤ M, antes que Emília consiga distorcer os
números!

## Input
A primeira linha da entrada possui dois inteiros 1 ≤ N, M ≤ 105.
A segunda linha contém N inteiros A1, A2, · · · , AN (1 ≤ Ai ≤ M).

## Output
Imprima M inteiros B1, B2, · · · , BM, onde Bk representa quantos minutos tiveram uma amplitude média
maior ou igual a k.

# Basquete (questão MFP)
Sonic e Amy Rose estavam assistindo à final de basquete das Olimpíadas. Como Sonic é bastante detalhista,
ele registrava cada pontuação da partida em seu caderninho de anotações. Por exemplo, se o Time 1 fizesse uma cesta com um lance livre, ele anotava “Time 1 + 1”. Da mesma forma, se o Time 2 fizesse uma cesta
de 3 pontos, ele registrava como “Time 2 + 3”.

Até o desfecho do jogo, tudo corria bem. No entanto, ao final da partida, houve um problema com
o placar e a pontuação dos times foi perdida. Felizmente para os organizadores, Sonic tinha todos os
detalhes anotados em seu caderninho.

Dado o conteúdo do caderninho de Sonic, qual seria o resultado final da partida entre Time 1 e Time 2?

## Input
A primeira linha de entrada contém um inteiro n (1 ≤ n ≤ 100).
Daí seguem n linhas, cada uma no formato “Time t + k” (sem as aspas), que indica que o Time t fez uma
cesta de k pontos (t ∈ {1, 2}, k ∈ {1, 2, 3}).

## Output
Imprima uma linha no formato “p1 x p2” (sem as aspas), em que p1 representa a pontuação do Time 1 e
p2 representa a pontuação do Time 2. Note que há um espaço antes e um espaço depois do “x”.