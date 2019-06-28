int p1()
{
    if(mov!='1'){ 
       menu(); 
       getchar(); getchar();
       }
       if(mov!='1'){ 
       cut1(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       cut2(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       cut3(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       cut4(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       cut5(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       cut6(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       cut7(); 
       getchar(); getchar();}
       while ((mov != 'x') && (mov != 'X') && (mov != '2')) {
       system(FECHA);
       desenhar_mapa();
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ STRANGE WORLD - PLAYER JOÃO ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       printf("TECLAS PARA JOGAR: \nW - CIMA S - BAIXO A - ESQUERDA D - DIREITA"); /* Imprime as direcoes */
       printf("\nVIDA = %d MEDIKIT:%d PONTUAÇÃO:%d", life,medikit,pontuacao);
       printf("\nX ou x = FECHA O JOGO");
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       if(mapa[ip][jp] == SAIDA)
           system(FECHA);
       if(life<=0){
          system(FECHA);
          gameover();}
       if ((scanf("%c",&mov))==0) {
          printf("mensagem de erro..\n");
          getchar(); getchar();
          return BACK;
