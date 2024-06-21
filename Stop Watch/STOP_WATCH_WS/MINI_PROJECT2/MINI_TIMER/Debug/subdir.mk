################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MINI_TIMER1.c \
../MINI_TIMER_DISPLAY_6_SEGMENTS.c \
../MINI_TIMER_DISPLAY_MY_SEGMENTS.c \
../MINI_TIMER_INT0.c \
../MINI_TIMER_INT1.c \
../MINI_TIMER_INT2.c \
../MINI_TIMER_MAIN.c 

OBJS += \
./MINI_TIMER1.o \
./MINI_TIMER_DISPLAY_6_SEGMENTS.o \
./MINI_TIMER_DISPLAY_MY_SEGMENTS.o \
./MINI_TIMER_INT0.o \
./MINI_TIMER_INT1.o \
./MINI_TIMER_INT2.o \
./MINI_TIMER_MAIN.o 

C_DEPS += \
./MINI_TIMER1.d \
./MINI_TIMER_DISPLAY_6_SEGMENTS.d \
./MINI_TIMER_DISPLAY_MY_SEGMENTS.d \
./MINI_TIMER_INT0.d \
./MINI_TIMER_INT1.d \
./MINI_TIMER_INT2.d \
./MINI_TIMER_MAIN.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


