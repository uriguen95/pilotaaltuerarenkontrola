
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>

#ifndef MATLAB_MEX_FILE

#include "Arduino.h"

const int sensor_pin = 15;
const int sample_num = 10;
int sample_array[sample_num]; // circular buffer
long sample_array_sum = 0;
float Ts = 60;

long last_time = 0;
double previous_dist = 0.0;
#endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
extern "C" void bloque1_Outputs_wrapper(real_T *dist1,
			const real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/

if (xD[0] == 1){
     
    #ifndef MATLAB_MEX_FILE
    // tiempo desde encendido menor que (ultima toma de tiempo + Ts) ???
    
    while(millis() < last_time + Ts) {}
    last_time = millis();
    
    sample_array_sum -= sample_array[0];
    
    for(int i=1; i <= sample_num-1; i++) {
        sample_array[i-1] = sample_array[i];
    }
    
    sample_array[sample_num-1] = analogRead(sensor_pin);
    sample_array_sum += sample_array[sample_num-1];
    
    float ADC_value = sample_array_sum / sample_num;
    float estimated_voltage = ADC_value * (5.0 / 1024);    
   
    float dist = 1.2502 * pow(estimated_voltage, 6) 
               - 16.396 * pow(estimated_voltage, 5) 
               + 84.983 * pow(estimated_voltage, 4) 
               - 225.46 * pow(estimated_voltage, 3) 
               + 330.80 * pow(estimated_voltage, 2) 
               - 272.10 * estimated_voltage 
               + 120.72;
      //Limitar distancia
      dist1[0] = dist;

    #endif

}
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
extern "C" void bloque1_Update_wrapper(real_T *dist1,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
*/

if (xD[0] == 0) {
     
    #ifndef MATLAB_MEX_FILE
  
    pinMode(sensor_pin, INPUT);
    //pinMode(servo_pin, OUTPUT);
        
    for(int i=0; i <= sample_num-1; i++) {
        sample_array[i] = analogRead(sensor_pin);
        sample_array_sum += sample_array[i];
        delay(60);
    }
    
    #endif

    xD[0] = 1;

}
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

