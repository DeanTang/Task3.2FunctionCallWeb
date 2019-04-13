void setup() {
    pinMode(D6, OUTPUT);
    pinMode(D7, OUTPUT);
    
    Particle.function("light", light);
}

int light(String arg)
{
    if (arg == "ON")
    {
        digitalWrite(D6, HIGH);
        digitalWrite(D7, HIGH);
    }
    else
    {
        digitalWrite(D6, LOW);
        digitalWrite(D7, LOW);
    }
    return 0;
}

void loop() {
    
}
