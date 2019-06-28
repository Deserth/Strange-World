char movimento1;
int medikit11=3, life11=100;
int movc3()
{
       if ((movimento1 == 'w') || (movimento1 == 'W')) {
          linha_atual1 = linha_atual1 - 1;
          if ((mapa2[linha_atual1][coluna_atual1] != MOV) && (mapa2[linha_atual1][coluna_atual1] != ENEMY) && (mapa2[linha_atual1][coluna_atual1] != MEDIKIT) && (mapa2[linha_atual1][coluna_atual1] != TRAP) && (mapa2[linha_atual1][coluna_atual1] != AMMO) && (mapa2[linha_atual1][coluna_atual1] != VIDA) && (mapa2[linha_atual1][coluna_atual1] != SAIDA)) {
             linha_atual1 = linha_atual1 + 1; 
             getchar(); getchar();
	     
          }
              if (mapa2[linha_atual1][coluna_atual1] == AMMO){
              int nrr;
              while(nrr!=1){
              nrr=0; medikit11 = medikit1 +5; nrr++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == MEDIKIT){
              int xrkk;
              while(xrkk!=1){
              xrkk=0; medikit11 = medikit11 +1; xrkk++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == VIDA){
            int brn;
           while(brn!=1){
           brn=0;life11 = life11 + 20; brn++;
           }
          }
          if (mapa2[linha_atual1][coluna_atual1] == TRAP){
              life11 = life11-5;
              pontuacao=pontuacao -50;
              
          }
          if (mapa2[linha_atual1][coluna_atual1] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if (mapa2[linha_atual1][coluna_atual1] == ENEMY){
               pontuacao=pontuacao -50;
               life11 = life11-10;}
              
       }
       if ((movimento1 == 's') || (movimento1 == 'S')) {
          linha_atual1 = linha_atual1 + 1;
          if ((mapa2[linha_atual1][coluna_atual1] != MOV) && (mapa2[linha_atual1][coluna_atual1] != ENEMY) && (mapa2[linha_atual1][coluna_atual1] != MEDIKIT) && (mapa2[linha_atual1][coluna_atual1] != TRAP) && (mapa2[linha_atual1][coluna_atual1] != AMMO) && (mapa2[linha_atual1][coluna_atual1] != VIDA) && (mapa2[linha_atual1][coluna_atual1] != SAIDA)) {
             linha_atual1 = linha_atual1 - 1;
              getchar(); getchar();
	   
          }
          if (mapa2[linha_atual1][coluna_atual1] == AMMO){
              int mrrrr;
              while(mrrrr!=1){
              mrrrr=0; medikit11 = medikit11 +5; mrrrr++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == MEDIKIT){
              int mrrrkk;
              while(mrrrkk!=1){
              mrrrkk=0; medikit11 = medikit11 +1; mrrrkk++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == VIDA){
            int brrrn;
           while(brrrn!=1){
           brrrn=0;life11 = life11 + 20; brrrn++;
           }
          }
          if (mapa2[linha_atual1][coluna_atual1] == TRAP){
              life11 = life11-5;
              pontuacao=pontuacao -50;
              
          }
          if (mapa2[linha_atual1][coluna_atual1] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa2[linha_atual1][coluna_atual1] == ENEMY){
               pontuacao=pontuacao -50;
               life11 = life11-10;}
       }
       if ((movimento1 == 'd') || (movimento1 == 'D')) {
          coluna_atual1 = coluna_atual1 + 1;
           if ((mapa2[linha_atual1][coluna_atual1] != MOV) && (mapa2[linha_atual1][coluna_atual1] != ENEMY) && (mapa2[linha_atual1][coluna_atual1] != MEDIKIT) && (mapa2[linha_atual1][coluna_atual1] != TRAP) && (mapa2[linha_atual1][coluna_atual1] != AMMO) && (mapa2[linha_atual1][coluna_atual1] != VIDA) && (mapa2[linha_atual1][coluna_atual1] != SAIDA)) {
             coluna_atual1 = coluna_atual1 - 1;
             getchar(); getchar();
	 
          }
          if (mapa2[linha_atual1][coluna_atual1] == AMMO){
              int pprrr;
              while(pprrr!=1){
              pprrr=0; medikit11 = medikit11 +5; pprrr++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == MEDIKIT){
              int prrkk;
              while(prrkk!=1){
              prrkk=0; medikit11 = medikit11 +1; prrkk++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == VIDA){
            int grrn;
           while(grrn!=1){
           grrn=0;life11 = life11 + 20; grrn++;
           }
          }
          if (mapa2[linha_atual1][coluna_atual1] == TRAP){
              life11 = life11-5;
              pontuacao=pontuacao -50;
              
          }
          if (mapa2[linha_atual1][coluna_atual1] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa2[linha_atual1][coluna_atual1] == ENEMY){
               pontuacao=pontuacao -50;
               life11 = life11-10;}
       }
       if ((movimento1 == 'a') || (movimento1 == 'A')) {
          coluna_atual1 = coluna_atual1 - 1;
           if ((mapa2[linha_atual1][coluna_atual1] != MOV) && (mapa2[linha_atual1][coluna_atual1] != ENEMY) && (mapa2[linha_atual1][coluna_atual1] != MEDIKIT) && (mapa2[linha_atual1][coluna_atual1] != TRAP) && (mapa2[linha_atual1][coluna_atual1] != AMMO) && (mapa2[linha_atual1][coluna_atual1] != VIDA) && (mapa2[linha_atual1][coluna_atual1] != SAIDA)) {
             coluna_atual1 = coluna_atual1 + 1;
             getchar(); getchar();
	  
          }
          if (mapa2[linha_atual1][coluna_atual1] == AMMO){
              int naa;
              while(naa!=1){
              naa=0; medikit11 = medikit11 +5; naa++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == MEDIKIT){
              int vakk;
              while(vakk!=1){
              vakk=0; medikit11 = medikit11 +1; vakk++;}
          }
          if (mapa2[linha_atual1][coluna_atual1] == VIDA){
            int varn;
           while(varn!=1){
           varn=0;life11 = life11 + 20; varn++;
           }
          }
          if (mapa2[linha_atual1][coluna_atual1] == TRAP){
              life11 = life11-5;
              
          }
          if (mapa2[linha_atual1][coluna_atual1] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa2[linha_atual1][coluna_atual1] == ENEMY){
               pontuacao=pontuacao -50;
               life11 = life11-10;}
       }
       if ((movimento1 == 'h') || (movimento1 == 'H')){
              if(medikit11 > 0){
              life11 = life11 +15;
              medikit11--;} }
    }
   
