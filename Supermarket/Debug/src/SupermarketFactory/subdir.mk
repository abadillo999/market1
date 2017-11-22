################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/SupermarketFactory/PortugueseSupermarketFactory.cpp \
../src/SupermarketFactory/SpanishSupermarketFactory.cpp \
../src/SupermarketFactory/SupermarketFactory.cpp 

OBJS += \
./src/SupermarketFactory/PortugueseSupermarketFactory.o \
./src/SupermarketFactory/SpanishSupermarketFactory.o \
./src/SupermarketFactory/SupermarketFactory.o 

CPP_DEPS += \
./src/SupermarketFactory/PortugueseSupermarketFactory.d \
./src/SupermarketFactory/SpanishSupermarketFactory.d \
./src/SupermarketFactory/SupermarketFactory.d 


# Each subdirectory must supply rules for building sources it contributes
src/SupermarketFactory/%.o: ../src/SupermarketFactory/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


