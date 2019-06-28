#include <stdio.h>
#include <stdlib.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/desenhar_mapa.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/movc1.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/desenhar_mapa2.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/mov2.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/desenhar_mapa3.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/mov3.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/gameover.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Cut1.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Cut2.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Cut3.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Menu.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Cut4.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Cut5.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Cut6.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/Cut7.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/cut8.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/cut9.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/cut10.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/cut11.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/cut12.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/cut13.h>
#include </home/vinicius/Área de Trabalho/JOGO/header/cut14.h>



 int main()
 {
       if(mov!='1'){ 
       menu(); 
       getchar(); getchar();
       }
       if(mov!='1'){ 
       system(FECHA);
       cut1(); 
       getchar(); getchar();}
       if(mov!='1'){
       system(FECHA);
       cut2(); 
       getchar(); getchar();}
       if(mov!='1'){
       system(FECHA);    
       cut3(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       system(FECHA);    
       cut4(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       system(FECHA);    
       cut5(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       system(FECHA);    
       cut6(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       system(FECHA);    
       cut7(); 
       getchar(); getchar();}
       while ((mov != 'x') && (mov != 'X') && (mapa[ip][jp] != SAIDA)) {
       system(FECHA);
       desenhar_mapa();
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ STRANGE WORLD - PLAYER JOÃO ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       printf("TECLAS PARA JOGAR: \nW - CIMA | S - BAIXO | A - ESQUERDA | D - DIREITA | H - MEDIKIT"); /* Imprime as direcoes */
       printf("\nVIDA = %d MEDIKIT:%d PONTUAÇÃO:%d", life,medikit,pontuacao);
       printf("\nX ou x = FECHA O JOGO OU PULA FASE");
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       if(life<=0){
          system(FECHA);
          gameover();}
       if ((scanf("%c",&mov))==0) {
          printf("mensagem de erro..\n");
          getchar(); getchar();
          return BACK;
       }
       movc1();
    }
    if(mov!='1'){ 
       system(FECHA); 
       cut8(); 
       getchar(); getchar();}
    if(mov!='1'){ 
    system(FECHA);
       cut9(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       system(FECHA);
           cut10(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       system(FECHA);
           cut11(); 
       getchar(); getchar();}
       if(mov!='1'){ 
       system(FECHA);
           cut12(); 
       getchar(); getchar();}
    while ((movimento != 'x') && (movimento != 'X')) {
       system(FECHA);
       desenhar_mapa2();
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ STRANGE WORLD - PLAYER JOÃO ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       printf("TECLAS PARA JOGAR: \nW - CIMA | S - BAIXO | A - ESQUERDA | D - DIREITA | H - MEDIKIT"); /* Imprime as direcoes */
       printf("\nVIDA = %d MEDIKIT:%d PONTUAÇÃO:%d", life1,medikit1,pontuacao);
       printf("\nX ou x = FECHA O JOGO OU PULA FASE");
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       if(life1<=0){
          system(FECHA);
          gameover();}
       if ((scanf("%c",&movimento))==0) {
          printf("mensagem de erro..\n");
          getchar(); getchar();
          return BACK;
       }
       
       movc2();
    }
       while ((movimento1 != 'x') && (movimento1 != 'X')) {
       system(FECHA);
       desenhar_mapa3();
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓ STRANGE WORLD - PLAYER JOÃO ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       printf("TECLAS PARA JOGAR: \nW - CIMA | S - BAIXO | A - ESQUERDA | D - DIREITA | H - MEDIKIT"); 
       printf("\nVIDA = %d MEDIKIT:%d PONTUAÇÃO:%d", life11,medikit11,pontuacao);
       printf("\nX ou x = FECHA O JOGO OU PULA FASE");
       printf("\n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
       if(life11<=0){
          system(FECHA);
          gameover();}
       if ((scanf("%c",&movimento1))==0) {
          printf("mensagem de erro..\n");
          getchar(); getchar();
          return BACK;
       }
       
       movc3();
    }
    if(mov!='1'){ 
    system(FECHA);
       cut13(); 
       getchar(); getchar();}
       if(mov!='1'){
       system(FECHA);
       cut14(); 
       getchar(); getchar();}
}
