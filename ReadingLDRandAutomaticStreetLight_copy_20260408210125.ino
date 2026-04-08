const int LDR = A0;
int LED = 9;
int value = 0;

void setup( void ) 
{
  pinMode( LED, OUTPUT );
  Serial. begin( 9600 );
}

void loop( void )
{
  value = analogRead( LDR );
  Serial. println( value );
  if( value > 650 )
  {
    digitalWrite( LED, LOW );
  }
  else
  {
    digitalWrite( LED, HIGH );
  }
  delay( 100 );
}
