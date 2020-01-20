# VETORES E MATRIZES - Exercícios

## DICAS

## QUESTÕES

### VETORES

1 - Escreva um programa que declare um vetor de 5 elementos, após solicite ao
usuário que digite os valores para os elementos do vetor, em seguida imprima na
tela os números e pergunte ao usuário se os números estão corretos, sendo 's'
para sim e 'n' para não.

2 - Aperfeiçoe o programa acima para que, caso o usuário digite 'n', você leia
novamente os valores do teclado.

3 - Escreva um programa que leia do teclado 5 números e armazene-os em um vetor. Depois percorra o vetor até ele encontrar o elemento contendo o maior número. Imprima o maior número na tela. DICA: crie uma variável adicional para
armazenar o maior número.

4 - Escreva um programa que leia do teclado 5 números e armazene em um vetor. Depois percorra o vetor e some todos os números digitados. Imprima na tela o resultado.

5 - Na série de Fibbonacci (1, 1, 2, 3, 5, 8, 13, ...) cada elemento é obtido a partir da soma do dois números imediatamente anteriores. A série se inicia com um tendo como segundo elemento, também um 1, a soma de 1 + 0. Escreva um programa que leia do teclado quantos elementos da série devem ser calculadas, calcule-as e armazene-as em um vetor. Caso o usuário digite 5, você calculará os 5 primeiros elementos, o vetor portanto terá 5 posições.

6 - Escreva um programa que declare dois vetores, leia os valores da primeira no teclado, depois percorra o vetor e insira os valores na ordem invertida no segundo vetor, sendo assim caso os valores lidos no primeiro vetor contenha, {1, 2, 3, 4, 5}, o segundo vetor deverá ter {5, 4, 3, 2, 1}. Imprima na tela os dois vetores.

7 - Aperfeiçoe a questão 6 para que não seja necessário um segundo vetor, leia os valores para o primeiro vetor, depois inverta os valores dentro deste vetor sem o auxílio de um segundo vetor. Sendo assim se o vetor contiver os elementos {1, 2, 3, 4, 5} ao final do processo, este mesmo vetor deverá ter os valores
{ 5, 4, 3, 2, 1}.

8 - Declare dois vetores com 3 elementos cada, onde cada elemento corresponde a uma nota de um aluno. No segundo vetor leia o peso de cada nota. Ao final calcule a média ponderada do estudante com base nas notas e seus respectivos pesos.

9 - Um vetor armazena em cada elemento a resposta dada por um entrevistado referente a um questinário. Cada elemento do vetor armazena a resposta a uma questão, que pode receber as letras 'a', 'b', 'c', 'd' e 'f'. Escreva um programa que leia 10 respostas de um entrevistado a 10 questões diferentes e armazene em um vetor, depois percorra o vetor e calcule quanto de cada letra ele respondeu, depois imprima um relatório, exemplo: a=2, b=0, c=3, d=1, e=0. DICA: crie um segundo vetor para armazenar o resultado da contagem, nesse caso esse vetor terá 5 posições uma para cada opção possível.

### MATRIZES

1 - Crie um programa que declare uma matriz 3x3, leia do teclado os elementos da matriz e imprima a matriz na tela. Supondo que foram digitados os valores {5, 2, 8, 4, 1, 0, 7, 1, 2} imprima no seguinte formato:

5, 2, 8,
4, 1, 0,
7, 1, 2

2 - Uma Matriz de 2 dimensões é uma estrutura de dados tabular, sendo assim ela é muito utiliza para armazenar dados tabulares. Suponha que queremos armazenar as 3 notas de todos os alunos de uma sala, onde cada linha da matriz representa um estudante. Se temos 10 estudantes, teremos uma tabela 10x3 (dez linhas e 3 colunas). Escreva um program que declare uma matriz 2x3, representando as notas de dois alunos, leia as 3 notas de cada aluno e armazene na matriz. Após, calcule a média de cada um dos alunos. O programa deve ser fléxivel, isso significa que se quisermos mudar a ordem da matriz para armazenar dados de mais alunos, devemos poder fazer modificando, no código, somente as dimensões da matriz. DICA: Use constantes para armazenar o número de linhas e colunas e a utilize no código, ou invés de digitar a literal diretamente. Para isso fassa no ínicion do seu programa:

```c
#define LINHAS 2
#define COLUNAS 3
```

3 - A soma de duas matrizes se dá a partir da soma dos elementos que ocupam a mesma posição nas diferentes tabelas e armazenando o resultado na mesma posição da matriz resultante. Escreva um programa que declares 3 matrizes, `matriz1`, `matriz2` e `matriz_resultado`. Leia os valores da matriz 1 e 2 a partir do teclado, depois os elementos, armazenando os resultados em `matriz_resultado`.
Imrpima a matris resultado na tela.

4 - Escreva um programa que leia os elementos de uma matriz de ordem pre-definida (você defina a ordem da matriz na sua declaração). Imprima na tela a soma dos elementos de cada uma das colunas. Por exemplo, em uma matriz 3x3, o primeiro resultado será a soma dos elementos, \[0\]\[0\] + \[1\]\[1\] + \[1\]\[2\]. Imprima na tela o resultado (Coluna 1 = X, Coluna 2 = Y, Coluna 3 = Z). DICA: Lembre-se que a contagem de linhas e colunas se inicia em 0.

5 - Modifique o programa da questão 4 para imprimir as soma de cada linha e não das colunas.

6 - Seja M uma matriz quadrada de ordem n. A matriz M é chamada de Matriz Identidade de ordem n, quando os elementos da diagonal principal são todos iguais a 1 e os elementos restantes são iguais a zero. Escreva um programa que identifique se uma matriz é identidade ou não, o programa deverá verificar se a matriz é quadrada, caso não seja deve mostrar uma mensagem de erro e encerrar o programa. Os elementos da matriz devem ser lidos do teclado, use uma matriz com uma ordem menor, para testes, depois teste o programa com matrizes de ordens maiores.

7 - Uma foto é representada internamente em um computador com uma matriz, onde cada elemento da matriz é um pixel carregando um valor de cor, o valor deve estar entre 0 e 255, e o programa deve verificar se o usuário digitou um valor válido, emitindo um erro caso ele digite um valor fora do intervalo. Escreva um programa que leia o valor das cores e armazene-as na matriz que representa a imagem. Após lidos os valores, queremos aplicar um filtro à foto. Para isso deveremos adicionar 150 a cada valor da matriz. Caso a soma seja mais que 255, o valor pixel deverá ser a diferença entre o resultado e 255, ou seje, se o valor resultante foi 350, o valor do pixel deverá ser 350 - 255 = 95. Imprima os valores da matriz na tela ao final do programa.

8 - Escreva um programa que leia uma matriz de ordem qualuqer, inicie os seus valores. Em uma segunda matriz, armazene as linhas da matriz de maneira inversa, por exemplo, se a última linha da matriz de entrada for {1, 2, 3}, essa deverá ser primeira linha da segunda matriz.

9 - modifique o programa 8 para inverter as colunas ao invés das linhas.

10 - Uma biblioteca armazena a quantidade ded livros disponíveis em uma tabela (que deverá ser representada por uma matriz) onde cada linha representa um livro e cada elemento da linha uma edição diferente. Escreva um programa contendo 3 livros, cada livro contém 2 edições. Preencha a matriz no código, não tem necessidade de ler do usuário. O programa deverá ler do usuário o código do livro (o número da linha), e a edição desejada (o número da coluna), o programa deverá verificar se existem exemplares disponíveis daquele livro naquela edição, se sim, emitir uma mesagem "livro disponível para empréstimo", se não "Livro indisponível!".
