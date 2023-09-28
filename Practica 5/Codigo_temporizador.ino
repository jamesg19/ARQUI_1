//
byte display1=0,display2=0,i,p=0;
void display7seg(byte numd, byte digito);

//setup method 
void setup()
{
    for(i=4;i<=11;i++)
    { 
        pinMode(i,OUTPUT);
        
    }
    attachInterrupt(0,reset,RISING);
    attachInterrupt(1,pausa,RISING);
}

    
void loop()
{  
    display7seg(2,display2);
    display7seg(1,display1);  
    delay(500);

    if(p==0){
        display1++;
        if(display1==10){
            display2++;
            display1=0;
            if(display2==10) display2=0;
        }
    }
  
}

void reset(){
    display1=-1;
    display2=0;
}

void pausa(){

    if(p==0){
        p=1;
    }
    else{
        p=0;
    }

}

bool GetBit( byte N, int pos)
   {                            // pos = 7 6 5 4 3 2 1 0
       int b = N >> pos ;       // Rotar bits
       b = b & 1 ;              // coger solo el ultimo bit
       return b ;
   }



void display7seg(byte numd, byte digito) {
if (numd==1)
{
    for(byte i=0;i<4;i++)
     { 
      digitalWrite(i+4,GetBit(digito,i));//1000
      
     }
}
  else  
  {
    for(byte i=0;i<4;i++)
     { 
      digitalWrite(i+8,GetBit(digito,i));
     }

  }
}







  