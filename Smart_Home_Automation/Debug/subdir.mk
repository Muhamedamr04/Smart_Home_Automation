################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GPIO_messi.c \
../adc.c \
../app.c \
../buzzer.c \
../dc_motor.c \
../flame_sensor.c \
../lcd_m.c \
../ldr.c \
../led.c \
../lm35_sens.c \
../pwm.c 

OBJS += \
./GPIO_messi.o \
./adc.o \
./app.o \
./buzzer.o \
./dc_motor.o \
./flame_sensor.o \
./lcd_m.o \
./ldr.o \
./led.o \
./lm35_sens.o \
./pwm.o 

C_DEPS += \
./GPIO_messi.d \
./adc.d \
./app.d \
./buzzer.d \
./dc_motor.d \
./flame_sensor.d \
./lcd_m.d \
./ldr.d \
./led.d \
./lm35_sens.d \
./pwm.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


