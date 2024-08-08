void setup() {
  
  Serial.begin(9600);
}

void loop() {
  int a;
  int b;
  int c;
  int d;
  int ab;
  int cd;
  int x;
  int langkah = 1;
  int pilihan;

  Serial.println("Mencari hasil dari Layang Layang");
  Serial.println("1.Keliling");
  Serial.println("2.Luas");
  //Serial.println("pilihan anda : ");


  while (langkah == 1) {
    while (Serial.available()) {
      pilihan = Serial.parseInt();
      langkah = 2;
    }
  }

  switch (pilihan) {
    case (1):
      Serial.print("anda memilih keliling, masukan a : ");
      while (langkah == 2) {
        while (Serial.available()) {
          a = Serial.parseInt();
          Serial.println(a);
          langkah = 3;
        }
      }
      Serial.print("Silakan masukan nilai b : ");
      while (langkah == 3) {
        while (Serial.available()) {
          b = Serial.parseInt();
          Serial.println(b);
          langkah = 4;
        }
      }
    Serial.print("Silakan masukan nilai c : ");
      while (langkah == 4) {
        while (Serial.available()) {
          c = Serial.parseInt();
          Serial.println(c);
          langkah = 5;
        }
      }
    Serial.print("Silakan masukan nilai d : ");
      while (langkah == 5) {
        while (Serial.available()) {
          d = Serial.parseInt();
          Serial.println(d);
          langkah = 6;
        }
      }

      x = a+b+c+d;

      Serial.print("hasil operasi dari keliling layang layang : ");
      Serial.println(x);
      Serial.println();
      break;
    
    case (2):
      Serial.print("anda memilih keliling, masukan ab : ");
      while (langkah == 2) {
        while (Serial.available()) {
          ab = Serial.parseInt();
          Serial.println(ab);
          langkah = 3;
        }
      }
      Serial.print("Silakan masukan nilai cd : ");
      while (langkah == 3) {
        while (Serial.available()) {
          cd = Serial.parseInt();
          Serial.println(cd);
          langkah = 4;
        }
      }

      x = (ab*cd)/2;

      Serial.print("hasil operasi dari luas layang layang : ");
      Serial.println(x);
      Serial.println();
      break;

  }
}