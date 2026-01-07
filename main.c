// bibliotecas incluidas
#include <stdio.h>
#include <string.h>
#include <time.h>

time_t valor_final, valor_inicial;
int tempo_gasto, mortes;

#define VERDE "\x1b[32m"
#define RESET "\x1b[0m"
#define VERMELHO "\x1b[31m"
#define NEGRITO "\x1b[1m"

const int gabarito[15] = {2, 4, 1, 1, 2, 3, 2, 4, 3, 2, 1, 3, 3, 1, 2};

struct Aluno
{
  char nome[75];
  int respostas[15]
};

struct Aluno aluno;

void main(void)
{

  valor_inicial = time(NULL);

  tela_inicial();
}

int tela_inicial(void)
{

  system("clear");
  system("cls");
  printf("Olá, usuário, tudo bem?");
  printf(NEGRITO "\nEsse programa tem o intuito de te ensinar sobre a Segunda "
                 "Guerra Mundial");
  printf("\nMas primeiro diga-me seu nome: " RESET);
  scanf("%[^\n]s", aluno.nome);
  printf("\nOk, %s, Vamos lá", aluno.nome);
  menu_inicial();
  return 0;
}

int menu_inicial(void)
{
  int resp;
  printf(VERMELHO "\n\nSó uma observação, a partir de agora você vai usar os "
                  "números do seu teclado para responder" RESET);
  printf("\nEntendeu?");
  printf("\nDIGITE 1 PARA SIM");
  printf("\nDIGITE 2 PARA NÃO");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == 1)
  {
    system("clear");
    system("cls");
    menu();
  }

  printf("Ok, você não entendeu...");
  printf("\nÉ simples, %s,", aluno.nome);
  printf("\nVocê vai clicar no número desejado e dar enter");
  printf("\nVocê deve está se perguntando por qual motivo estamos usando "
         "números");
  printf("\nA aluno.respostas é simples, é pra ser mais simples para você");
  printf("\nAgora, digite qualquer número para prosseguir");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  menu();

  return 0;
}

int menu(void)
{
  int resp;

  system("clear");
  system("cls");

  printf("\n|------MENU INICIAL-------|\n");
  printf("\nOque deseja fazer?\n");
  printf("\n1) EXPLICAÇÃO SOBRE A SEGUNDA GUERRA MUNDIAL\n");
  printf("\n2) QUIZ SOBRE A SEGUNDA GUERRA MUNDIAL\n");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  switch (resp)
  {
  case 1:
    menu_explicacao();
    break;

  case 2:
    menu_do_quiz();
    break;

  default:
    system("clear");
    system("cls");
    printf("Ops.. sem resultados,  tente novamente\n");
    menu();
    break;
  }
  return 0;
}

int descobrir(void)
{
  int resp;
  printf("\n");
  printf("Oque deseja fazer agora?");
  printf("\n1) Voltar ao menu inicial");
  printf("\n2) Ir para o Quiz");
  printf("\n3) Ir para o menu de explicação");
  printf("\n4) Encerrar o programa");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  switch (resp)
  {

  case 1:
    menu();
    break;

  case 2:
    menu_do_quiz();
    break;

  case 3:
    menu_explicacao();
    break;

  case 4:
    fim();
    break;

  default:
    printf("\nOps... sem resultados, tente novamente\n");
    descobrir();
    break;
  }
  return 0;
}

int menu_explicacao(void)
{
  int resp;

  system("clear");
  system("cls");
  printf("|---MENU DE EXPLICAÇÃO---|\n");
  printf("\n1) EXPLICAÇÃO GERAL SOBRE A SEGUNDA GUERRA MUNDIAL\n");
  printf("\n2) EXPLICAÇÃO SOBRE OS PAÍSES ENVOLVIDOS NA GUERRA\n");
  printf("\n3) CONSEQUÊNCIAS DA SEGUNDA GUERRA MUNDIAL\n");
  printf("\n4) VOLTAR PARA O MENU INICIAL\n");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  switch (resp)
  {
  case 1:

    explicacao_geral_2G();
    break;

  case 2:

    explicacao_paises_envolvidos();
    break;

  case 3:

    explicacao_das_consequencias();
    break;

  case 4:

    menu_inicial();
    break;

  default:

    system("clear");
    system("cls");
    printf("Ops, sem resultados tente novamente...\n");
    menu_explicacao();
    break;
  }
  return 0;
}

int explicacao_geral_2G(void)
{

  system("clear");
  system("cls");

  printf("\n• A Segunda Guerra Mundial aconteceu entre 1939 e 1945. O "
         "principal objetivo do conflito era o de combater os governos "
         "militaristas e autoritários que surgiram em alguns países da Europa "
         "e buscavam se expandir, ocupando outros territórios.");

  printf("\n• Acredita-se que, a Segunda Guerra foi uma das Consequências da "
         "Primeira Guerra Mundial. Isto porque a Alemanha, país que está no "
         "centro do episódio, teve de pagar impostos altíssimos depois da "
         "Primeira Guerra devido ao Tratado de Versalhes. O pagamento desse "
         "valor afetou a economia do país, aumentando a inflação.");

  printf("\n• Insatisfeita, a população alemã necessitava de uma nova direção "
         "e viu nascer o governo nacionalista de Adolf Hitler. O discurso do "
         "ditador se concentrava na soberania do povo ariano e no ódio aos "
         "judeus que, para ele, seriam os principais culpados pelo fracasso da "
         "Alemanha na Primeira Guerra Mundial. Surgia o nazismo.");

  printf("\n• O comando de Hitler tinha como ideologia a supremacia alemã. Em "
         "seu governo, a Alemanha buscou se expandir através da invasão de "
         "países e do discurso nacionalista. Quando o exército alemão invadiu "
         "a Polônia em setembro de 1939, a França e a Inglaterra se "
         "posicionaram contra o governo alemão e declararam guerra ao país.");

  printf("\n• Vários países participaram do conflito. De um lado estava O "
         "Eixo, formado por Alemanha, Itália e Japão, e do outro, estava o "
         "grupo dos Aliados, composto por Inglaterra, União Soviética (URSS), "
         "Estados Unidos e França. Outros países participaram da guerra, "
         "inclusive o Brasil, mas dentro de um desses blocos.\n");
  descobrir();
  return 0;
}

int explicacao_das_consequencias(void)
{

  system("clear");
  system("cls");
  printf("\nAs Consequências da Segunda Guerra Mundial se prolongaram por "
         "longas décadas.\nOs seis anos de confronto resultaram em muitas "
         "mortes, devastação e uma série de desdobramentos no campo "
         "político-ideológico e social.");
  printf("\nforam os fatores que marcaram esse período e entendê-lo é muito "
         "importante para que essa história não se repita.");
  printf("\nA Guerra fria também veio em decorrência da Segunda Guerra "
         "Mundial, assim como a criação da ONU no final de 1945.\n");
  descobrir();
  return 0;
}

int explicacao_paises_envolvidos(void)
{

  system("clear");
  system("cls");

  printf("Quase todos os países do mundo participaram da Segunda Guerra "
         "Mundial, com a exceção de alguns países que permaneceram neutros. A "
         "Segunda Guerra Mundial colocou duas alianças umas contra as outras, "
         "as Potências do Eixo e as Potências Aliadas. As principais Potências "
         "do Eixo eram a Alemanha Nazista, Reino da Itália e o Império do "
         "Japão; enquanto o Reino Unido, Estados Unidos, União Soviética e a "
         "China eram as 'Quatro Grandes' potências aliadas.\n");
  descobrir();
  return 0;
}

int menu_do_quiz(void)
{
  int resp;

  system("clear");
  system("cls");

  printf("|------MENU DO QUIZ------|");
  printf("\n");
  printf("1) NÍVEL FÁCIL");
  printf("\n");
  printf("2) NÍVEL MÉDIO");
  printf("\n");
  printf("3) NÍVEL DIFÍCIL");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  switch (resp)
  {
  case 1:
    nivel_facil();
    break;

  case 2:
    nivel_medio();
    break;

  case 3:
    nivel_dificil();
    break;

  default:
    system("clear");
    system("cls");
    printf("Ops, sem resultados tente novamente...\n");
    menu_do_quiz();
    break;
  }
  return 0;
}

int nivel_facil(void)
{
  int resp, pontuacao = 0;

  system("clear");
  system("cls");

  printf("Ok, nível fácil");
  printf("\nComo já dito acima, digite o número da aluno.respostas");
  printf(NEGRITO "\nSÓ UMA COISINHA\nLeia bem as questoẽs\nAlgumas tem uma ou "
                 "mais pegadinhas" RESET);
  printf("\nVamos para a primeira pergunta");
  printf("\nEm que ano se iniciou a Segunda Guerra Mundial?");
  printf("\n1) 1999");
  printf("\n2) 1939");
  printf("\n3) 1946");
  printf("\n4) 1981");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[0]);
  if (aluno.respostas[0] == gabarito[0])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao = 1;
  }

  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nA Segunda Guerra Mundial teve início em 1 de setembro de 1939\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nSegunda questão");
  printf("\nEm que ano acabou a Segunda Guerra Mundial?");
  printf("\n1) 1961");
  printf("\n2) 1959");
  printf("\n3) 1940");
  printf("\n4) 1945");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[1]);
  if (aluno.respostas[1] == gabarito[1])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }

  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nSegunda Guerra Mundial terminou em 2 de setembro de 1945, "
           "exatamente 6 anos e 1 dia depois de seu início\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nTerceira pergunta");
  printf("\nQual o último país do Eixo a se render?");
  printf("\n1) Japão");
  printf("\n2) Itália");
  printf("\n3) Alemanha");
  printf("\n4) Bulgária");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[2]);
  if (aluno.respostas[2] == gabarito[2])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }

  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nFoi o Japão, o Japão oficialmente se rendeu em 14 de agosto de "
           "1945 após os Estados Unidos lançarem bombas atômicas sobre as "
           "cidades japonesas de Hiroshima e Nagasaki\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nQuarta pergunta");
  printf("\nO Brasil entrou na Segunda Guerra Mundial?");
  printf("\n1) Sim");
  printf("\n2) Não");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[3]);
  if (aluno.respostas[3] == gabarito[3])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }

  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nSim, O Brasil entrou na Segunda Guerra Mundial em 30 de junho de "
           "1944, ao lado dos países aliados, isto é, Estados Unidos, "
           "Inglaterra, União Soviética e as resistências civis-militares de "
           "países como a França");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nQuinta pergunta");
  printf("\nEm qual continente a Guerra se teve início? ");
  printf("\n1) África");
  printf("\n2) Europa");
  printf("\n3) Ásia");
  printf("\n4) América do Sul");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[4]);
  if (aluno.respostas[4] == gabarito[4])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    pontuacao++;
  }

  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nA guerra iniciou-se na Europa, mas espalhou-se pela África, Ásia "
           "e Oceania e contou com o envolvimento de nações de todos os "
           "continentes\n");
  }

  printf("\nDeseja ver o gabarito?");
  printf("\n1 para sim");
  printf("\n2 para não");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == 1)
  {
    for (int i = 0; i <= 4; i++)
    {
      printf("\nQuestão %i", i + 1);
      printf("\nGabarito %i | Sua aluno.respostas %i", gabarito[i], aluno.respostas[i]);
    }
  }

  if (resp != 1)
  {
    printf("\nOk\n");
  }
  calcular_pontuacao(pontuacao);
  return 0;
}

int nivel_medio(void)
{
  int resp, pontuacao = 0;

  system("clear");
  system("cls");

  printf("\nOk, nível médio");
  printf("\nComo já dito acima, digite o número da aluno.respostas");
  printf(NEGRITO "\nSÓ UMA COISINHA\nLeia bem as questoẽs\nAlgumas tem uma ou "
                 "mais pegadinhas" RESET);
  printf("\nComo já dito acima, para responder,  digite o número da aluno.respostas");
  printf("\nVamos para a primeira pergunta");
  printf("\nComo era o nome do comandante alemão que comandava aquela Alemanha "
         "durante a Segunda Guerra Mundial?");
  printf("\n1) Adolfo Hitler");
  printf("\n2) Joseph Stalin");
  printf("\n3) Adolf Hitler");
  printf("\n4) Noa Handel");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == gabarito[5])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("\nVamos para a próxima questão\n");
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nO nome certo é Adolf Hitler, Hitler nasceu em Braunau am Inn, na "
           "Áustria, no dia 20 de abril de 1889. Hitler foi o quarto filho de "
           "Alois Hitler e Klara Pölzl, ele morreu no dia 30 de abril de 1945, "
           "no interior de seu aposento dentro do bunker em que ele se "
           "escondeu durante as últimas semanas da Segunda Guerra Mundial\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nSegunda pergunta");
  printf("\nQual era o nome do governante Soviético durante a Segunda Guerra "
         "Mundial?");
  printf("\n1) Adolf Hitler");
  printf("\n2) Josef Stalin");
  printf("\n3) Nikita Khrushchov");
  printf("\n4) Benito Mussolini");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == gabarito[6])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nPuts, na verdade o nome dele era Josef Stalin\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nTerceira pergunta");
  printf("\nQual era o nome do governante Italiano?");
  printf("\n1) Winston Churchill");
  printf("\n2) Franklin Delano Roosevelt");
  printf("\n3) Nikita Khrushchov");
  printf("\n4) Benito Mussolini");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == gabarito[7])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nPuts, errou mas tudo bem, na verdade o nome dele era Benito "
           "Mussolini\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nQuarta pergunta");
  printf("\nA Alemanha tinha um nome característico durante a guerra, Qual era "
         "esse nome?");
  printf("\n1) Alemanha Fascista");
  printf("\n2) Alemanha Surfista");
  printf("\n3) Alemanha Nazista");
  printf("\n4) Alemanha Quardista");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == gabarito[8])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("O nome certo era Alemanha Nazista, esse foi o nome dado por Hitler "
           "em 16 de março em 1930 e durou até 20 de setembro de 1945\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nQuinta pergunta");
  printf("\nQuais os dois 'lados' daquela guerra?");
  printf("\n1) Aliados e Arsenal");
  printf("\n2) Eixo e Aliados");
  printf("\n3) Tríplice Aliança e Tríplice Coroa");
  printf("\n4) Eixo e Tríplice Albânia");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == gabarito[9])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nNa Segunda Guerra Mundial, estiveram envolvidos dois grupos de "
           "países: os do Eixo (Alemanha, Itália e Japão) e os Aliados (Reino "
           "Unido, França, União Soviética e Estados Unidos)\n");
  }

  printf("\nDeseja ver o gabarito?");
  printf("\n1 para sim");
  printf("\n2 para não");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);
  if (resp == 1)
  {
    for (int i = 5; i <= 9; i++)
    {
      printf("\nGabarito %i | %i Sua aluno.respostas", gabarito[i], aluno.respostas[i]);
    }
  }
  if (resp != 1)
  {
    printf("\nOK\n");
  }
  calcular_pontuacao(pontuacao);
  return 0;
}

int nivel_dificil(void)
{
  int resp, pontuacao = 0;

  system("clear");
  system("cls");

  printf("\nOk, nível difícil");
  printf("\nComo já dito acima, digite o número da aluno.respostas");
  printf(NEGRITO "\nSÓ UMA COISINHA\nLeia bem as questoẽs\nAlgumas tem uma ou "
                 "mais pegadinhas\n" RESET);
  printf("\nVamos para a Primeira pergunta");
  printf("\nO ataque a Pearl Harbor foi de extrema importância, visto que em "
         "consequência do ataque, os Estados Unidos entraram para guerra. Quem "
         "atacou a base militar de Pearl Harbor?");
  printf("\n1) Japão");
  printf("\n2) Alemanha");
  printf("\n3) Itália");
  printf("\n4) Bulgária");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[10]);
  if (aluno.respostas[10] == gabarito[10])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao = 1;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nO Ataque a Pearl Harbor foi um ataque militar surpresa do "
           "Serviço Aéreo Imperial da Marinha Japonesa contra os Estados "
           "Unidos na base naval de Pearl Harbor, em Honolulu, no Território "
           "do Havaí, pouco antes das 08h de 7 de dezembro de 1941\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nSegunda pergunta");
  printf("\nComo morreu Hitler?");
  printf("\n1) Se suicidou, pulando de cima do Palácio de Bellevue ");
  printf("\n2) Se suicidou, atirou contra o próprio peito");
  printf("\n3) Se suicidou,  atirou contra a própria cabeça");
  printf(
      "\n4) Foi morto por um traidor, Hitler foi morto por um traidor Nazista");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[11]);
  if (aluno.respostas[11] == gabarito[11])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nAdolf Hitler morreu no dia 30 de abril de 1945, depois que ele "
           "atirou contra a própria cabeça\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nTerceira pergunta");
  printf("\nQual das alternativas abaixo aponta o marco inicial da Segunda "
         "Guerra Mundial?");
  printf(
      "\n1) O ataque do Japão à base militar norte-americana de Pearl Harbor");
  printf("\n2) Os diversos bombardeios britânicos a várias cidades alemãs ");
  printf("\n3) A invasão da Polônia pelas forças armadas da Alemanha em 1º de "
         "setembro de 1939");
  printf("\n4) O estabele1cimento de acordos militares entre Alemanha, Itália "
         "e Japão");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[12]);
  if (aluno.respostas[12] == gabarito[12])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nA Segunda Guerra teve como estopim a invasão da Polônia pela "
           "Wehrmacht (exército alemão) em 1º de setembro de 1939\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nQuarta pergunta");
  printf("\nEm 6 de junho de 1944 oque aconteceu uma invasão partindo dos "
         "Aliados, foi uma das ou a mais importante invasão dos Aliados. De "
         "que invasão estamos falando?");
  printf("\n1) Dia D.");
  printf("\n2) Batalha de Kursk");
  printf("\n3) Batalha das Ardenas");
  printf("\n4) Cerco de Bastogne");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[13]);
  if (aluno.respostas[13] == gabarito[13])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    printf("Vamos para a próxima questão\n");
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("!\nNa verdade estamos falando do Dia D. \nO Dia D, também "
           "conhecido como Operação Overlord, aconteceu no dia 6 de junho de "
           "1944 e marcou o início da liberação da França do domínio dos "
           "nazistas na Segunda Guerra Mundial\n");
    printf("Vamos para a próxima questão\n");
  }

  printf("\nQuinta pergunta");
  printf("\nO cenário de guerra na União Soviética ficou marcado por batalhas "
         "extremamente violentas. À medida que os alemães avançavam pelo "
         "território soviético, um rastro de destruição e morte era deixado. "
         "Uma das cidades soviéticas foi literalmente cercada pelas tropas "
         "alemãs, que estabeleceram uma estratégia para matar a população de "
         "fome. Estamos falando de: ");
  printf("\n1) Stalingrado");
  printf("\n2) Leningrado");
  printf("\n3) Moscou");
  printf("\n4) Minsk");
  printf("\nRESPOSTA: ");
  scanf("%i", &aluno.respostas[14]);
  if (aluno.respostas[14] == gabarito[14])
  {
    printf(VERDE "\nACERTOU!!!\n" RESET);
    pontuacao++;
  }
  else
  {
    printf(VERMELHO "\nERROU!\n" RESET);
    printf("\nPuts... o certo seria Leningrado\n");
  }

  printf("\nDeseja ver o gabarito?");
  printf("\n1 para sim");
  printf("\n2 para não");
  printf("\nRESPOSTA: ");
  scanf("%i", &resp);

  if (resp == 1)
  {

    for (int i = 10; i <= 14; i++)
    {
      printf("\nGabarito %i | Sua aluno.respostas %i\n", gabarito[i], aluno.respostas[i]);
    }
  }

  calcular_pontuacao(pontuacao);
  return 0;
}

int calcular_pontuacao(int pontuacao)
{
  if (pontuacao == 5)
  {
    printf("\n\nNOSSA %s", aluno.nome);
    printf("\nVocê acertou tudo");
    printf("\nacertou %i/5", pontuacao);
  }
  else if ((pontuacao < 5) && (pontuacao > 0))
  {
    printf("\n\nVocê não acertou tudo");
    printf("\nMas foi bem");
    printf("\nacertou %i/5", pontuacao);
    printf("\n");
  }
  else if (pontuacao == 0)
  {
    printf("\n\nVocê errou tudo...");
    printf("\nacertou %i/5", pontuacao);
    printf("\nMas não tem problema...");
  }
  descobrir();
  return 0;
}

int fim(void)
{
  valor_final = time(NULL);
  tempo_gasto = valor_final - valor_inicial;
  mortes = tempo_gasto * 0.44;
  /*		||
      Pessoas que morriam por segundo na segunda guerra
  */
  printf("\nVocê utilizou o programa por %i segundos", tempo_gasto);
  printf("\nSó para efeito de comparação, %i pessoas teriam morrido durante "
         "esse espaço de tempo, se a gente estivesse vivendo durante a Segunda "
         "Guerra Mundial",
         mortes);
  exit(0);
  return 0;
}
