// laser A
const int laserout1 = 3;//define pin 2 for laserout1
const int laserout2 = 5;//define pin 8 for laserout2
const int laserout3 = 6;//define pin 8 for laserout3
const int laserout4 = 9;//define pin 8 for laserout4
const int laserout5 = 10;//define pin 8 for laserout3
const int laserout6 = 11;//define pin 8 for laserout4

int laserlevel1 = A2;
int laserlevel2 = A3;
int laserlevel3 = A4;
int laserlevel4 = A5;
int laserlevel5 = A6;
int laserlevel6 = A7;

int laserSpeed1 = 0;
int laserSpeed2 = 0;
int laserSpeed3 = 0;
int laserSpeed4 = 0;
int laserSpeed5 = 0;
int laserSpeed6 = 0;

void setup() {
  pinMode(laserout1,  OUTPUT);
  pinMode(laserout2,  OUTPUT);
  pinMode(laserout3,  OUTPUT);
  pinMode(laserout4,  OUTPUT);
  pinMode(laserout5,  OUTPUT);
  pinMode(laserout6,  OUTPUT);
  pinMode(laserlevel1, INPUT);
  pinMode(laserlevel2, INPUT);
  pinMode(laserlevel3, INPUT);
  pinMode(laserlevel4, INPUT);
  pinMode(laserlevel5, INPUT);
  pinMode(laserlevel6, INPUT);
}
void loop() {
  laserSpeed1 = analogRead(laserlevel1);
  laserSpeed1 = map(laserSpeed1, 0, 1023, 0, 255);
  analogWrite(laserout1, laserSpeed1);

  laserSpeed2 = analogRead(laserlevel2);
  laserSpeed2 = map(laserSpeed2, 0, 1023, 0, 255);
  analogWrite(laserout2, laserSpeed2);

  laserSpeed3 = analogRead(laserlevel3);
  laserSpeed3 = map(laserSpeed3, 0, 1023, 0, 255);
  analogWrite(laserout3, laserSpeed3);

  laserSpeed4 = analogRead(laserlevel4);
  laserSpeed4 = map(laserSpeed4, 0, 1023, 0, 255);
  analogWrite(laserout4, laserSpeed4);

  laserSpeed5 = analogRead(laserlevel5);
  laserSpeed5 = map(laserSpeed5, 0, 1023, 0, 255);
  analogWrite(laserout5, laserSpeed5);

  laserSpeed6 = analogRead(laserlevel6);
  laserSpeed6 = map(laserSpeed6, 0, 1023, 0, 255);
  analogWrite(laserout6, laserSpeed6);
}
