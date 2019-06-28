char mov;
int life=100, medikit=3;
int pontuacao=0;
int movc1()
{
if ((mov == 'w') || (mov == 'W')) {
          ip = ip -1;
          /* Se não for chao ou grama ele volta pra posicao anterior */
           if ((mapa[ip][jp] != MOV) && (mapa[ip][jp] != ENEMY) && (mapa[ip][jp] != MEDIKIT) && (mapa[ip][jp] != TRAP) && (mapa[ip][jp] != AMMO) && (mapa[ip][jp] != VIDA) && (mapa[ip][jp] != SAIDA)) {
             ip = ip + 1;
             getchar(); getchar();
        
          }
          if (mapa[ip][jp] == AMMO){
              int r;
              while(r!=1){
              r=0; medikit = medikit +5; r++;}
          }
          if (mapa[ip][jp] == MEDIKIT){
              int kk;
              while(kk!=1){
              kk=0; medikit = medikit +1; kk++;}
          }
          if (mapa[ip][jp] == VIDA){
            int n;
           while(n!=1){
           n=0;life = life + 20; n++;
           }
          }
          if (mapa[ip][jp] == TRAP){
              life = life-5;
              
          }
          if (mapa[ip][jp] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if(mapa[ip][jp] == ENEMY){
               pontuacao=pontuacao -50;
               life = life-20;}
       }
       if ((mov == 's') || (mov == 'S')) {
          ip = ip +1;
          if ((mapa[ip][jp] != MOV) && (mapa[ip][jp] != ENEMY) && (mapa[ip][jp] != MEDIKIT) && (mapa[ip][jp] != TRAP) && (mapa[ip][jp] != AMMO) && (mapa[ip][jp] != VIDA) && (mapa[ip][jp] != SAIDA)) {
             ip = ip - 1;
              getchar(); getchar();
      
          }
           if (mapa[ip][jp] == AMMO){
               int e;
               while(e!=1){
               e=0; medikit = medikit +2; e++;}
          }
          if (mapa[ip][jp] == MEDIKIT){
              int jj;
              while(jj!=1){
              jj=0; medikit = medikit +1; jj++;}
          }
           if (mapa[ip][jp] == VIDA){
               int l;
           while(l!=1){
           l=0;life = life + 20; l++;
           }
          }
          if (mapa[ip][jp] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if (mapa[ip][jp] == TRAP){
              life = life-5;
          }
           if(mapa[ip][jp] == ENEMY){
               pontuacao=pontuacao-50;
               life=life-20;}
       }
       if ((mov == 'd') || (mov == 'D')) {
          jp = jp + 1;
            if ((mapa[ip][jp] != MOV)&& (mapa[ip][jp] != MEDIKIT) && (mapa[ip][jp] != ENEMY) && (mapa[ip][jp] != TRAP) && (mapa[ip][jp] != AMMO) && (mapa[ip][jp] != VIDA) && (mapa[ip][jp] != SAIDA)) {
             jp = jp - 1;
             getchar(); getchar();
    
          }
           if (mapa[ip][jp] == AMMO){
              int q;
              while(q!=1){
              q=0; medikit = medikit +2; q++;}
           }
          if (mapa[ip][jp] == MEDIKIT){
              int ss;
              while(ss!=1){
              ss=0; medikit = medikit +1; ss++;}
          }
            if (mapa[ip][jp] == VIDA){
            int p;
           while(p!=1){
           p=0;life = life + 20; p++;
           }   
          }
          if (mapa[ip][jp] == MOV){
              pontuacao=pontuacao+100;
              
          }
           if (mapa[ip][jp] == TRAP){
              life = life-5;
              pontuacao = pontuacao -5;
          }
          if (mapa[ip][jp] == ENEMY){
               life=life-20; 
               pontuacao = pontuacao -50;}
       }
       if ((mov == 'a') || (mov == 'A')) {
          jp = jp - 1;
          if ((mapa[ip][jp] != MOV)&& (mapa[ip][jp] != MEDIKIT) && (mapa[ip][jp] != ENEMY) && (mapa[ip][jp] != TRAP) && (mapa[ip][jp] != AMMO) && (mapa[ip][jp] != VIDA) && (mapa[ip][jp] != SAIDA)) {
             jp = jp + 1;
             getchar(); getchar();
          }
          if (mapa[ip][jp] == AMMO){
              int w;
              while(w!=1){
              w=0; medikit = medikit +1; w++;}
          }
          if (mapa[ip][jp] == MEDIKIT){
              int hh;
              while(hh!=1){
              hh=0; medikit = medikit +1; hh++;}
          }
           if (mapa[ip][jp] == VIDA){
           int c;
           while(c!=1){
           c=0;life = life + 20; c++;} 
          }
           if (mapa[ip][jp] == TRAP){
              life = life-5;
              pontuacao=pontuacao-5;
          }
          if (mapa[ip][jp] == MOV){
              pontuacao=pontuacao+100;
              
          }
          if (mapa[ip][jp] == ENEMY){
              life=life-20;
              pontuacao = pontuacao -50;
          }      
       }
          if ((mov == 'h') || (mov == 'H')){
              if(medikit > 0){
              life = life +15;
              medikit--;} }
          
}
