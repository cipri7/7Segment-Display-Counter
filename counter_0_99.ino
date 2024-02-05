#define a 5
#define b 6
#define c 2
#define d 1
#define e 0
#define f 4
#define g 3

#define e1 7
#define d1 8
#define c1 9
#define g1 10
#define f1 11
#define a1 12
#define b1 13

int num[10][7]={ {0,0,0,1,0,0,0},//0
                 {1,1,0,1,1,1,0},//1
                 {0,0,1,0,1,0,0},//2
                 {1,0,0,0,1,0,0},//3
                 {1,1,0,0,0,1,0},//4
                 {1,0,0,0,0,0,1},//5
                 {0,0,0,0,0,0,1},//6
                 {1,1,0,1,1,0,0},//7
                 {0,0,0,0,0,0,0},//8
                 {1,0,0,0,0,0,0} //9
	        };


void setup() {
int pins[] = {a, b, c, d, e, f, g, a1, b1, c1, d1, e1, f1, g1};
  for (int i = 0; i < sizeof(pins)/sizeof(pins[0]); i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
  }
}

void loop() {
  int unit = 0;
  int tens = 0;
  for(int i = 0; i<100; i++){
    unit = i % 10;
    tens = i / 10;

    if(tens == 0){
      for(int j=0; j<7; j++){
        digitalWrite(j, num[i][j]);
        digitalWrite(j+7, num[0][j]);
      }
    }
      else{
        switch(tens){
          case 1:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-10][j]);
            digitalWrite(j+7, num[1][j]);
          }
          break;
          case 2:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-20][j]);
            digitalWrite(j+7, num[2][j]);
          }
          break;
          case 3:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-30][j]);
            digitalWrite(j+7, num[3][j]);
          }
          break;
          case 4:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-40][j]);
            digitalWrite(j+7, num[4][j]);
          }
          break;
          case 5:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-50][j]);
            digitalWrite(j+7, num[5][j]);
          }
          break;
          case 6:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-60][j]);
            digitalWrite(j+7, num[6][j]);
          }
          break;
          case 7:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-70][j]);
            digitalWrite(j+7, num[7][j]);
          }
          break;
          case 8:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-80][j]);
            digitalWrite(j+7, num[8][j]);
          }
          break;
          case 9:
          for(int j=0; j<7; j++){
            digitalWrite(j, num[i-90][j]);
            digitalWrite(j+7, num[9][j]);
          }
          break;
        }

      }
    

    delay(200);
  }

}
