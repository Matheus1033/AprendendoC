/*
if (x == 1)
    comando1;
else if (x == 2)
    comando2;
else if (x == 3)
    comando3 else if (x == 4)...

        switch (x)
    {
    case 1:
        comando1;
        comando1.1;
        ... break;
    case 2:
        comando2;
        comando2.1;
        ... break;
    case 3:
        comando3;
        comando3.1;
        ... break;
    case 4:
        comando4;
        comando4.1;
        ... break;
    default:
        comando 5;
        comando5.1;
        ...
    }

while (condição)
        comando;	 // com um único comando a ser repetido

while (condição)
{
        comando1;
        comando2;	 // vários comandos a serem repetidos delimitados pelas chaves
        comandoN;
}

i = 1;
while ( i <= 10 )		 // inicialmente testa a condição i <= 10
{
        printf( “%d\n”, i );	 // caso i <= 10, então executa as instruções
        i++; 			 // que existirem dentro do bloco { }
}
printf(“O programa segue a partir daqui, quando sair do loop (while)”);

do
comando;		// com um único comando a ser repetido
while (condição);

do
{
        comando1;
        comando2;	// vários comandos a serem repetidos delimitados pelas chaves
        comando N;
}
while (condição);

i = 1;
do
{
        printf(“%d\n”,i);	// inicialmente executa essas instruções
        i++;			// pelo menos uma vez para depois testar
} while ( i <= 10 );

for (inicialização;teste;incremento)
comando;

for (inicialização;teste;incremento)
{
        comando1;
        comando2;
        comandoN;
}
int i;
for (i = 1; i <= 10; i++)
        printf(“%d\n”,i);	// não é necessário o uso das chaves uma
                                     // vez que só há um comando a ser repetido
*/