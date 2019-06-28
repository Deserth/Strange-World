char movimento;
int medikit1=3, life1=100;
int movc2()
{
       if ((movimento == 'w') || (movimento == 'W')) { 
          linha_atual = linha_atual - 1;
          if ((mapa1[linha_atual][coluna_atual] != MOV) && (mapa1[linha_atual][coluna_atual] != ENEMY) && (mapa1[linha_atual][coluna_atual] != MEDIKIT) && (mapa1[linha_atual][coluna_atual] != TRAP) && (mapa1[linha_atual][coluna_atual] != AMMO) && (mapa1[linha_atual][coluna_atual] != VIDA) && (mapa1[linha_atual][coluna_atual] != SAIDA)) {
             linha_atual = linha_atual + 1; 
             getchar(); getchar();
	     
          }
              if (mapa1[linha_atual][coluna_atual] == AMMO){
              int rr;
              while(rr!=1){
              rr=0; medikit1 = medikit1 +5; rr++;}
          }
          if (mapa1[linha_atual][coluna_atual] == MEDIKIT){
              int rkk;
              while(rkk!=1){
              rkk=0; medikit1 = medikit1 +1; rkk++;}
          }
          if (mapa1[linha_atual][coluna_atual] == VIDA){
            int rn;
           while(rn!=1){
           rn=0;life1 = life1 + 20; rn++;
           }
          }
          if (mapa1[linha_atual][coluna_atual] == TRAP){
              life1 = life1-5;
              pontuacao=pontuacao -50;
              
          }
          if (mapa1[linha_atual][coluna_atual] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa1[linha_atual][coluna_atual] == ENEMY){
               pontuacao=pontuacao -50;
               life1 = life1-10;}
              
       }
       if ((movimento == 's') || (movimento == 'S')) {
          linha_atual = linha_atual + 1;
          if ((mapa1[linha_atual][coluna_atual] != MOV) && (mapa1[linha_atual][coluna_atual] != ENEMY) && (mapa1[linha_atual][coluna_atual] != MEDIKIT) && (mapa1[linha_atual][coluna_atual] != TRAP) && (mapa1[linha_atual][coluna_atual] != AMMO) && (mapa1[linha_atual][coluna_atual] != VIDA) && (mapa1[linha_atual][coluna_atual] != SAIDA)) {
             linha_atual = linha_atual - 1;
              getchar(); getchar();
	   
          }
          if (mapa1[linha_atual][coluna_atual] == AMMO){
              int rrrr;
              while(rrrr!=1){
              rrrr=0; medikit1 = medikit1 +5; rrrr++;}
          }
          if (mapa1[linha_atual][coluna_atual] == MEDIKIT){
              int rrrkk;
              while(rrrkk!=1){
              rrrkk=0; medikit1 = medikit1 +1; rrrkk++;}
          }
          if (mapa1[linha_atual][coluna_atual] == VIDA){
            int rrrn;
           while(rrrn!=1){
           rrrn=0;life1 = life1 + 20; rrrn++;
           }
          }
          if (mapa1[linha_atual][coluna_atual] == TRAP){
              life1 = life1-5;
              pontuacao=pontuacao -50;
              
          }
          if (mapa1[linha_atual][coluna_atual] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa1[linha_atual][coluna_atual] == ENEMY){
               pontuacao=pontuacao -50;
               life1 = life1-10;}
       }
       if ((movimento == 'd') || (movimento == 'D')) {
          coluna_atual = coluna_atual + 1;
           if ((mapa1[linha_atual][coluna_atual] != MOV) && (mapa1[linha_atual][coluna_atual] != ENEMY) && (mapa1[linha_atual][coluna_atual] != MEDIKIT) && (mapa1[linha_atual][coluna_atual] != TRAP) && (mapa1[linha_atual][coluna_atual] != AMMO) && (mapa1[linha_atual][coluna_atual] != VIDA) && (mapa1[linha_atual][coluna_atual] != SAIDA)) {
             coluna_atual = coluna_atual - 1;
             getchar(); getchar();
	 
          }
          if (mapa1[linha_atual][coluna_atual] == AMMO){
              int rrr;
              while(rrr!=1){
              rrr=0; medikit1 = medikit1 +5; rrr++;}
          }
          if (mapa1[linha_atual][coluna_atual] == MEDIKIT){
              int rrkk;
              while(rrkk!=1){
              rrkk=0; medikit1 = medikit1 +1; rrkk++;}
          }
          if (mapa1[linha_atual][coluna_atual] == VIDA){
            int rrn;
           while(rrn!=1){
           rrn=0;life1 = life1 + 20; rrn++;
           }
          }
          if (mapa1[linha_atual][coluna_atual] == TRAP){
              life1 = life1-5;
              pontuacao=pontuacao -50;
              
          }
          if (mapa1[linha_atual][coluna_atual] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa1[linha_atual][coluna_atual] == ENEMY){
               pontuacao=pontuacao -50;
               life1 = life1-10;}
       }
       if ((movimento == 'a') || (movimento == 'A')) {
          coluna_atual = coluna_atual - 1;
           if ((mapa1[linha_atual][coluna_atual] != MOV) && (mapa1[linha_atual][coluna_atual] != ENEMY) && (mapa1[linha_atual][coluna_atual] != MEDIKIT) && (mapa1[linha_atual][coluna_atual] != TRAP) && (mapa1[linha_atual][coluna_atual] != AMMO) && (mapa1[linha_atual][coluna_atual] != VIDA) && (mapa1[linha_atual][coluna_atual] != SAIDA)) {
             coluna_atual = coluna_atual + 1;
             getchar(); getchar();
	  
          }
          if (mapa1[linha_atual][coluna_atual] == AMMO){
              int aa;
              while(aa!=1){
              aa=0; medikit1 = medikit1 +5; aa++;}
          }
          if (mapa1[linha_atual][coluna_atual] == MEDIKIT){
              int akk;
              while(akk!=1){
              akk=0; medikit1 = medikit1 +1; akk++;}
          }
          if (mapa1[linha_atual][coluna_atual] == VIDA){
            int arn;
           while(arn!=1){
           arn=0;life1 = life1 + 20; arn++;
           }
          }
          if (mapa1[linha_atual][coluna_atual] == TRAP){
              life1 = life1-5;
              
          }
          if (mapa1[linha_atual][coluna_atual] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa1[linha_atual][coluna_atual] == ENEMY){
               pontuacao=pontuacao -50;
               life1 = life1-10;}
       }
       if ((movimento == 'h') || (movimento == 'H')){
              if(medikit1 > 0){
              life1 = life1 +15;
              medikit1--;} 
           
       }
    }
   
