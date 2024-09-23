# César

[Imagem: Cesar Cipher Disk]()

# Problema a resolver
Supostamente, César (sim, aquele César) costumava "criptografar" (ou seja, ocultar de forma reversível) mensagens confidenciais mudando cada letra por alguns lugares. Por exemplo, ele poderia escrever A como B, B como C, C como D, ..., e, voltando ao começo do alfabeto, Z como A. Então, para dizer OLÁ para alguém, César poderia escrever IFMMP. Ao receberem essas mensagens de César, os destinatários precisariam "descriptografá-las" mudando as letras na direção oposta pelo mesmo número de lugares.

A segurança desse "criptossistema" dependia apenas de César e dos destinatários conhecerem um segredo, o número de lugares em que César havia mudado suas letras (por exemplo, 1). Não é particularmente seguro para os padrões modernos, mas, ei, se você é talvez o primeiro no mundo a fazê-lo, é bem seguro!

O texto não criptografado é geralmente chamado de _texto simples_. O texto criptografado é geralmente chamado de _texto cifrado_. E o segredo usado é chamado de _chave_.

Para esclarecer, aqui está como criptografar OLÁ com uma chave de resulta em PKB:

| Texto simples    | O | L | A |
| ---------------- | - | - | - |
| + Chave           | 1 | 1 | 1 |
| \= Texto cifrado | P | M | B |

Em um arquivo chamado `cesar.c` em uma pasta chamada `cesar`, escreva um programa que permita criptografar mensagens usando a criptografia de César. No momento em que o usuário executa o programa, ele deve decidir, fornecendo um argumento de linha de comando, qual deve ser a chave na mensagem secreta que ele fornecerá em tempo de execução. Não podemos necessariamente presumir que a chave do usuário será um número; embora você possa supor que, se for um número, será um inteiro positivo.

# Especificações

Projete e implemente um programa, `cesar`, que criptografe mensagens usando a criptografia de César.

- Implemente seu programa em um arquivo chamado `cesar.c` em um diretório chamado `cesar`.
- Seu programa deve aceitar um único argumento de linha de comando, um inteiro não negativo. Vamos chamá-lo de _k_
 para fins de discussão.
- Se o seu programa for executado sem nenhum argumento de linha de comando ou com mais de um argumento de linha de comando, o seu programa deve imprimir uma mensagem de erro de sua escolha (com `printf`) e retornar de `main` um valor de `1` (que tende a significar um erro) imediatamente.
- Se algum dos caracteres do argumento da linha de comando não for um dígito decimal, seu programa deve imprimir a mensagem `Uso: ./cesar chave` e retornar de `main` um valor de `1`.
- Não presuma que _k_ será menor ou igual a 26. Seu programa deve funcionar para todos os valores inteiros não negativos de _k_ menores que 2³¹ - 26 
. Em outras palavras, você não precisa se preocupar se o seu programa eventualmente quebrará se o usuário escolher um valor para _k_ muito grande ou quase muito grande para caber em um `int`. (Lembre-se de que um `int` pode transbordar.) Mas, mesmo que _k_ seja maior que 26, os caracteres alfabéticos na entrada do seu programa devem permanecer caracteres alfabéticos na saída do seu programa. Por exemplo, se _k_ for 27, A não deve se tornar `\` mesmo que `\` esteja em 27 posições de distância de _A_ em ASCII, de acordo com asciitable.com; _A_ deve se tornar _B_, uma vez que B está em 27 posições de distância de _A_, desde que você alterne de _Z_ para _A_.
- Seu programa deve produzir _texto simples:_ e, em seguida, solicitar ao usuário uma string de texto simples (usando get_string).
- Seu programa deve produzir _texto cifrado:_ seguido pelo texto cifrado correspondente ao texto simples, com cada caractere alfabético no texto simples "girado" em _k_ posições; caracteres não alfabéticos devem ser produzidos inalterados.
- Seu programa deve preservar o caso: letras maiúsculas, embora giradas, devem permanecer letras maiúsculas; letras minúsculas, embora giradas, devem permanecer letras minúsculas.
- Depois de gerar o texto cifrado, você deve imprimir uma nova linha. Seu programa deve então sair retornando _0_ de _main_.

# Passo a passo
https://www.youtube.com/watch?v=V2uusmv2wxI