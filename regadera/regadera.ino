//midificasion desde githud
int a = 13;
int b = 12;
int c = 11;
int d = 9;

int t = 1;

int a_val = 0;
int b_val = 0;
int c_val = 0;
int d_val = 0;
int t_val = 0;









void setup() {
  // put your setup code here, to run once:
 pinMode (a, INPUT);
 pinMode (b, INPUT);
 pinMode (c, INPUT);
  pinMode (d, INPUT);
pinMode (t, OUTPUT);



   digitalWrite (a, HIGH); 
 digitalWrite (b, HIGH);
 digitalWrite (c, HIGH);
 digitalWrite (d, HIGH);

 

}
//funcion para encender o apagar salidas
void onOut(int val, int out){

  if(val){

    digitalWrite(out, HIGH);
  }else{

    digitalWrite(out, LOW);
  }

}



void loop() {
  // put your main code here, to run repeatedly:

  a_val = digitalRead(a);
    b_val = digitalRead(b);
    c_val = digitalRead(c);
    d_val = digitalRead(d);


//t= a'*c*d' + b'*c*d'
t_val= !(a_val) && c_val && !(d_val) || !(b_val) && c_val && !(d_val);
onOut(t_val, t);
  

}
