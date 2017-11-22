################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CashRegister/CashRegister.cpp 

OBJS += \
./src/CashRegister/CashRegister.o 

CPP_DEPS += \
./src/CashRegister/CashRegister.d 


# Each subdirectory must supply rules for building sources it contributes
src/CashRegister/%.o: ../src/CashRegister/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


