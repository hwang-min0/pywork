
String inputString = "";
void setup() {
  inputString.reserve(10);
  Serial.begin(9600);

}

void loop() {

  if(Serial.available() > 0){
    char ch = Serial.read();
    if(ch != '\n') {
      inputString += ch;
    }
    else{
        if(inputString.substring(0,3) == "pan")
          Serial.println(inputString.substring(4));
        else;
    }
  }

}
