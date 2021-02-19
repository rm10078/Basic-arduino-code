const int led=13;

unsigned long p_milli;
unsigned long c_milli;
int led_state=LOW;
unsigned long dt=500;
void setup() {
pinMode(led,OUTPUT);

}

void loop() {
c_milli=millis();
if(c_milli-p_milli >= dt){
  p_milli=c_milli;
  led_state = !led_state;
  }

digitalWrite(led,led_state);
}
