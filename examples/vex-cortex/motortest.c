#pragma config(Sensor, dgtl1,  encoder1,       sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  encoder2,       sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  encoder3,       sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  encoder4,       sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  encoder5,       sensorQuadEncoder)
#pragma config(Sensor, dgtl11, encoder6,        sensorQuadEncoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void clear_encoder();
void motor_Power(int speed);

task main()
{
	int encoder_1, encoder_2, encoder_3, encoder_4, encoder_5, encoder_6;
	int motor_1_Vs_motor_2, motor_1_Vs_motor_3, motor_1_Vs_motor_4, motor_1_Vs_motor_5, motor_1_Vs_motor_6;
	int motor_2_Vs_motor_3, motor_2_Vs_motor_4, motor_2_Vs_motor_5, motor_2_Vs_motor_6;
	int motor_3_Vs_motor_4, motor_3_Vs_motor_5, motor_3_Vs_motor_6;
	int motor_4_Vs_motor_5, motor_4_Vs_motor_6;
	int motor_5_Vs_motor_6;

clear_encoder();

encoder_1 = SensorValue[encoder1];
encoder_2 = SensorValue[encoder2];
encoder_3 = SensorValue[encoder3];
encoder_4 = SensorValue[encoder4];
encoder_5 = SensorValue[encoder5];
encoder_6 = SensorValue[encoder6];

motor_Power(127);

motor_1_Vs_motor_2 = abs( encoder_1 - encoder_2 );

motor_1_Vs_motor_3 = abs( encoder_1 - encoder_3 );

motor_1_Vs_motor_4 = abs( encoder_1 - encoder_4 );

motor_1_Vs_motor_5 = abs( encoder_1 - encoder_5 );

motor_1_Vs_motor_6 = abs( encoder_1 - encoder_6 );

motor_2_Vs_motor_3 = abs( encoder_2 - encoder_3 );

motor_2_Vs_motor_4 = abs( encoder_2 - encoder_4 );

motor_2_Vs_motor_5 = abs( encoder_2 - encoder_5 );

motor_2_Vs_motor_6 = abs( encoder_2 - encoder_6 );

motor_3_Vs_motor_4 = abs( encoder_3 - encoder_4 );

motor_3_Vs_motor_5 = abs( encoder_3 - encoder_5 );

motor_3_Vs_motor_6 = abs( encoder_3 - encoder_6 );

motor_4_Vs_motor_5 = abs( encoder_4 - encoder_5 );

motor_4_Vs_motor_6 = abs( encoder_4 - encoder_6 );

motor_5_Vs_motor_6 = abs( encoder_5 - encoder_6 );

}


void clear_encoder()
{
  SensorValue[encoder1] = 0;
  SensorValue[encoder2] = 0;
  SensorValue[encoder3] = 0;
  SensorValue[encoder4] = 0;
  SensorValue[encoder5] = 0;
  SensorValue[encoder6] = 0;
}

void motor_Power(int speed)
{
  motor[port1] = speed;
  motor[port2] = speed;
  motor[port3] = speed;
  motor[port4] = speed;
  motor[port5] = speed;
  motor[port6] = speed;
  motor[port7] = speed;
  motor[port8] = speed;
  motor[port9] = speed;
  motor[port10] = speed;
}
