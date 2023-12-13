################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include RTOS/subdir.mk
-include MCAL/Timer_Driver/subdir.mk
-include MCAL/PWM_DRIVE/subdir.mk
-include MCAL/Interrupt/subdir.mk
-include MCAL/DIO_DRIVE/subdir.mk
-include HAL/Stepper_Motor_Interface/subdir.mk
-include HAL/RGB_LED_Interface/subdir.mk
-include HAL/IR_Sensor_Interface/subdir.mk
-include HAL/DC_Motor_Interface/subdir.mk
-include HAL/Card_Reader_Interface/subdir.mk
-include HAL/BUZZER_Interface/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Gate_Projects.lss \

FLASH_IMAGE += \
Gate_Projects.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Gate_Projects.elf secondary-outputs

# Tool invocations
Gate_Projects.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Gate_Projects.map -mmcu=atmega32 -o "Gate_Projects.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Gate_Projects.lss: Gate_Projects.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Gate_Projects.elf  >"Gate_Projects.lss"
	@echo 'Finished building: $@'
	@echo ' '

Gate_Projects.hex: Gate_Projects.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Gate_Projects.elf  "Gate_Projects.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Gate_Projects.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Gate_Projects.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Gate_Projects.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
