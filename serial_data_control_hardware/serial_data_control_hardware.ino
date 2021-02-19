//My name is Rajib manna. email:-rm10078@gmail.com           
            //this program a control a led use uart interface
            //if i send 1 the led is on.
            //if i sed 0 the led is off.
            //i am useing arduino uno .
            //The inboard led connected with 13pin.


const int led=13;  //Led connected with 13pin
char data_s;  //All data store in this variable
void setup() {
  Serial.begin(9600);   //I use 9600 bands for transfer data
  pinMode(led,OUTPUT);   //Declear the 13pin is output.

}

void loop() {
 
  if(Serial.available()){   //I check this serial data come or not.
   data_s=Serial.read();  
    if(data_s=='1'){  //Check the serial data is 1 or not.
    digitalWrite(led,HIGH);  //If the condition is true the led trun on.
    }
   else if(data_s=='0'){  //Check the serial data is 0 or not.
    digitalWrite(led,LOW); //If this condition is true the led trun off
    }
    
    else{
      Serial.print("no match");
      }
      Serial.print(data_s);   //This line for print the data
      Serial.println();  //This line for end printing valu.
  }

}
