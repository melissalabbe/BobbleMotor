/*
 * Project BobbleMotor
 * Description: Turns on motor and bobbles bobblehead when team scores
 * Author: Melissa Labbe
 * Date: 06/03/17
 */

 /* motor is D0 */
 int motor = D0;

 // Declare pins and register Particle function
 void setup()
 {
    pinMode(motor, OUTPUT);

    // We are also going to declare a Particle.function
    // that will turn on the motor on request
    Particle.function("bobble", onBobble);

    // Make sure motor is off
    digitalWrite(motor, LOW);

 }

 void loop()
 {
    // No Op
 }

 // Turn on motor when API request is sent

 int onBobble(String command) {

     // Turn motor on
     digitalWrite(motor, HIGH);

     // Leave on for 10 seconds
      delay(10000);

      // Turn motor off
      digitalWrite(motor, LOW);

      return 1;

 }
