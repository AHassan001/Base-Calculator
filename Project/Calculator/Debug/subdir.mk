################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Bin_to_dec.c \
../Bin_to_hex.c \
../Bin_to_oct.c \
../Dec_to_Hex.c \
../Dec_to_bin.c \
../Dec_to_oct.c \
../Hex_To_Dec_Trial.c \
../Hex_to_bin.c \
../Hex_to_oct.c \
../MATH.c \
../MainApplication.c \
../Oct_to_Hex.c \
../Oct_to_bin.c \
../Oct_to_dec.c 

OBJS += \
./Bin_to_dec.o \
./Bin_to_hex.o \
./Bin_to_oct.o \
./Dec_to_Hex.o \
./Dec_to_bin.o \
./Dec_to_oct.o \
./Hex_To_Dec_Trial.o \
./Hex_to_bin.o \
./Hex_to_oct.o \
./MATH.o \
./MainApplication.o \
./Oct_to_Hex.o \
./Oct_to_bin.o \
./Oct_to_dec.o 

C_DEPS += \
./Bin_to_dec.d \
./Bin_to_hex.d \
./Bin_to_oct.d \
./Dec_to_Hex.d \
./Dec_to_bin.d \
./Dec_to_oct.d \
./Hex_To_Dec_Trial.d \
./Hex_to_bin.d \
./Hex_to_oct.d \
./MATH.d \
./MainApplication.d \
./Oct_to_Hex.d \
./Oct_to_bin.d \
./Oct_to_dec.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -lm -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


