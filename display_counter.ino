#define a 7
#define b 8
#define c 4
#define d 3
#define e 2
#define f 6
#define g 5

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
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);

}

void loop() {
  for(int i = 0; i<10; i++){
    for(int j=0; j<7; j++){
      digitalWrite(j+2, num[i][j]);
    }
    delay(1000);
  }

}
