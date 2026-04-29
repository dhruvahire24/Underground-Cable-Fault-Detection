// ## Libraries Used
// 1. LiquidCrystal.h 
// 2. Arduino Core Library 
// 3. Serial Communication (UART)

#include <LiquidCrystal.h> 
LiquidCrystal lcd(3, 4, 5, 6, 7, 8); // RS,EN,D4,D5,D6,D7
const int analogInPin0 = A5;         // Analog input pin that the potentiometer is attached to
const int analogInPin1 = A3;
const int analogInPin2 = A0;
char num[] = "9082468683";

int RED2 = 9;
int BLUE2 = 11;
int YELLOW2 = 10;
int RR = 0, YY = 0, BB = 0;
int REDR = 0;
int BLUEB = 0;
int YELLOWY = 0;

int a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0, f1 = 0, g1 = 0, h1 = 0,
    i1 = 0, j1 = 0, k1 = 0, l1 = 0, m1 = 0, n1 = 0, o1 = 0, p1 = 0, q1 = 0, r1 = 0;

void setup()
{
    lcd.begin(16, 2);
    Serial.begin(9600);
    pinMode(RED2, OUTPUT);
    pinMode(BLUE2, OUTPUT);
    pinMode(YELLOW2, OUTPUT);
    digitalWrite(RED2, HIGH);
    digitalWrite(BLUE2, HIGH);
    digitalWrite(YELLOW2, HIGH);
    lcd.setCursor(0, 0); // top left
    lcd.print("UNDERGR0UND CABLE ");
    lcd.setCursor(0, 1);
    lcd.print("FAULT OVER GSM ");
    delay(3000);
    lcd.clear();
    Serial.print("AT+CMGF=1 \r"); // set SMS mode to text
    delay(100);
    Serial.print("AT+CNMI=2,2,0,0,0 \r");
    delay(100);
    lcd.setCursor(0, 0); // top left
    lcd.print("R=0 Km");
    lcd.setCursor(9, 0); // top left
    lcd.print("Y=0 Km");
    lcd.setCursor(0, 1); // top left
    lcd.print("B=0 Km");
}
void loop()
{
    while (1)
    {
        REDR = analogRead(analogInPin0);
        YELLOWY = analogRead(analogInPin1);
        BLUEB = analogRead(analogInPin2);
        // Serial.println( REDR);
        RED1();

        YELLOW1();
        BLUE1();
    }
}

void RED1()
{

    if (RR == 0)
    {
        REDR = analogRead(analogInPin0);
        if (REDR >= 850 && REDR <= 856)
        {
            if (a1 == 0)
            {
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("R=30Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);

                digitalWrite(RED2, LOW);
                // Serial.println("R=30Km");
                lcd.setCursor(0, 0); // top left
                lcd.print("R=30Km");
                a1 = 1;
                RR = 1;
            }
        }
        else if (REDR >= 820 && REDR <= 825)
        {
            if (b1 == 0)
            {
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("R=25Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);

                digitalWrite(RED2, LOW);
                // Serial.println("R=25Km");
                lcd.setCursor(0, 0); // top left
                lcd.print("R=25Km");
                b1 = 1;
                RR = 1;
            }
        }
        else if (REDR >= 765 && REDR <= 770)
        {
            if (c1 == 0)
            {
                // Serial.println("R=20Km");
                lcd.setCursor(0, 0); // top left
                lcd.print("R=20Km");
                digitalWrite(RED2, LOW);

                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("R=20Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                c1 = 1;
                RR = 1;
            }
        }
        else if (REDR >= 670 && REDR <= 695)
        {
            // Serial.println("R=15Km");
            if (d1 == 0)
            {
                lcd.setCursor(0, 0); // top left
                lcd.print("R=15Km");
                digitalWrite(RED2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("R=15Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                d1 = 1;
                RR = 1;
            }
        }
        else if (REDR >= 510 && REDR <= 515)
        {
            // Serial.println("R=10Km");
            if (e1 == 0)
            {
                lcd.setCursor(0, 0); // top left
                lcd.print("R=10Km");
                digitalWrite(RED2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("R=10Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                e1 = 1;
                RR = 1;
            }
        }
        else if (REDR <= 400)
        {
            // Serial.println("R=5Km");
            if (f1 == 0)
            {

                lcd.setCursor(0, 0); // top left
                lcd.print("R=5Km");
                digitalWrite(RED2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("R=5Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                f1 = 1;
                RR = 1;
            }
        }
    }
}

void YELLOW1()
{

    if (YY == 0)
    {
        YELLOWY = analogRead(analogInPin1);
        if (YELLOWY >= 850 && YELLOWY <= 856)
        {
            if (g1 == 0)
            {

                lcd.setCursor(9, 0); // top left
                lcd.print("Y=30Km");
                digitalWrite(YELLOW2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("Y=30Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                g1 = 1;
                YY = 1;
            }
        }
        else if (YELLOWY >= 820 && YELLOWY <= 825)
        {

            if (h1 == 0)
            {
                lcd.setCursor(9, 0); // top left
                lcd.print("Y=25Km");
                digitalWrite(YELLOW2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("Y=25Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                h1 = 1;
                YY = 1;
            }
        }
        else if (YELLOWY >= 765 && YELLOWY <= 770)
        {

            if (i1 == 0)
            {
                lcd.setCursor(9, 0); // top left
                lcd.print("Y=20Km");
                digitalWrite(YELLOW2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("Y=20Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                i1 = 1;
                YY = 1;
            }
        }
        else if (YELLOWY >= 670 && YELLOWY <= 695)
        {

            if (j1 == 0)
                ;
            {
                lcd.setCursor(9, 0); // top left
                lcd.print("Y=15Km");
                digitalWrite(YELLOW2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("Y=15Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                j1 = 1;
                YY = 1;
            }
        }
        else if (YELLOWY >= 510 && YELLOWY <= 515)
        {

            if (k1 == 0)
            {
                lcd.setCursor(9, 0); // top left
                lcd.print("Y=10Km");
                digitalWrite(YELLOW2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("Y=10Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                k1 = 1;
                YY = 1;
            }
        }
        else if (YELLOWY <= 400)
        {

            if (l1 == 0)
            {
                lcd.setCursor(9, 0); // top left
                lcd.print("Y=5Km");
                digitalWrite(YELLOW2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("Y=5Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                l1 = 1;
                YY = 1;
            }
        }
    }
}

void BLUE1()
{
    if (BB == 0)
    {
        BLUEB = analogRead(analogInPin2);
        if (BLUEB >= 850 && BLUEB <= 856)
        {
            if (m1 == 0)
            {
                lcd.setCursor(0, 1); // top left
                lcd.print("B=30Km");
                digitalWrite(BLUE2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("B=30Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                m1 = 1;
                BB = 1;
            }
        }
        else if (BLUEB >= 820 && BLUEB <= 825)
        {

            if (n1 == 0)
                ;
            {
                lcd.setCursor(0, 1); // top left
                lcd.print("B=25Km");
                digitalWrite(BLUE2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("B=25Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                n1 = 1;
                BB = 1;
            }
        }
        else if (BLUEB >= 765 && BLUEB <= 770)
        {
            if (o1 == 0)
            {

                lcd.setCursor(0, 1); // top left
                lcd.print("B=20Km");
                digitalWrite(BLUE2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("B=20Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                o1 = 1;
                BB = 1;
            }
        }
        else if (BLUEB >= 670 && BLUEB <= 695)
        {

            if (p1 == 0)
            {
                lcd.setCursor(0, 1); // top left
                lcd.print("B=15Km");
                digitalWrite(BLUE2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("B=15Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                p1 = 1;
                BB = 1;
            }
        }
        else if (BLUEB >= 510 && BLUEB <= 515)
        {

            if (q1 == 0)
            {
                lcd.setCursor(0, 1); // top left
                lcd.print("B=10Km");
                digitalWrite(BLUE2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("B=10Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                q1 = 1;
                BB = 1;
            }
        }
        else if (BLUEB <= 400)
        {

            if (r1 == 0)
            {
                lcd.setCursor(0, 1); // top left
                lcd.print("B=5Km");
                digitalWrite(BLUE2, LOW);
                Serial.print("AT\r");
                delay(200);
                Serial.print("AT+CMGF=1\r");
                delay(200);
                Serial.print("AT+CNMI=2,2,0,0,0\r");
                delay(200);
                Serial.print("AT+CMGS=");
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.print(num);
                delay(200);
                Serial.print('"');
                delay(200);
                Serial.write(0x0D);
                delay(200);
                Serial.println("B=5Km");
                delay(200);
                Serial.write(0x1A);
                delay(200);
                r1 = 1;
                BB = 1;
            }
        }
    }
}
}