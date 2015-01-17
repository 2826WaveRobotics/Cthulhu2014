# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace3_3
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/Cthulhu2014



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmByTurntable.o : $(PRJ_ROOT_DIR)/Commands/ArmByTurntable.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmPitchByJoystick.o : $(PRJ_ROOT_DIR)/Commands/ArmPitchByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoCatch.o : $(PRJ_ROOT_DIR)/Commands/AutoCatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_1_FireDriveToZone.o : $(PRJ_ROOT_DIR)/Commands/AutoMode_1_FireDriveToZone.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_DoubleBallFront_DriveForward.o : $(PRJ_ROOT_DIR)/Commands/AutoMode_DoubleBallFront_DriveForward.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoWinch.o : $(PRJ_ROOT_DIR)/Commands/AutoWinch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveStraight.o : $(PRJ_ROOT_DIR)/Commands/Auto_DriveStraight.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveTurn.o : $(PRJ_ROOT_DIR)/Commands/Auto_DriveTurn.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_ShootDrive.o : $(PRJ_ROOT_DIR)/Commands/Auto_ShootDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_Turret.o : $(PRJ_ROOT_DIR)/Commands/Auto_Turret.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Autonomous_Command.o : $(PRJ_ROOT_DIR)/Commands/Autonomous_Command.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CatchPosition.o : $(PRJ_ROOT_DIR)/Commands/CatchPosition.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CenterTurret.o : $(PRJ_ROOT_DIR)/Commands/CenterTurret.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisClose.o : $(PRJ_ROOT_DIR)/Commands/CharybdisClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisOpen.o : $(PRJ_ROOT_DIR)/Commands/CharybdisOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawClose.o : $(PRJ_ROOT_DIR)/Commands/ClawClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawOpen.o : $(PRJ_ROOT_DIR)/Commands/ClawOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CollectBall.o : $(PRJ_ROOT_DIR)/Commands/CollectBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DashboardUpdateCommand.o : $(PRJ_ROOT_DIR)/Commands/DashboardUpdateCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DepositBall.o : $(PRJ_ROOT_DIR)/Commands/DepositBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveByJoystick.o : $(PRJ_ROOT_DIR)/Commands/DriveByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftHigh.o : $(PRJ_ROOT_DIR)/Commands/DriveShiftHigh.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftLow.o : $(PRJ_ROOT_DIR)/Commands/DriveShiftLow.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveStraightByTime.o : $(PRJ_ROOT_DIR)/Commands/DriveStraightByTime.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangClose.o : $(PRJ_ROOT_DIR)/Commands/FangClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangOpen.o : $(PRJ_ROOT_DIR)/Commands/FangOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FeedMore.o : $(PRJ_ROOT_DIR)/Commands/FeedMore.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FindTarget.o : $(PRJ_ROOT_DIR)/Commands/FindTarget.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Fire.o : $(PRJ_ROOT_DIR)/Commands/Fire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence.o : $(PRJ_ROOT_DIR)/Commands/FireSequence.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_Line.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_Line.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_OnePoint.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_OnePoint.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussClose.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_TrussClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussFar.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_TrussFar.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/KillPID.o : $(PRJ_ROOT_DIR)/Commands/KillPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/RunCollector.o : $(PRJ_ROOT_DIR)/Commands/RunCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsFire.o : $(PRJ_ROOT_DIR)/Commands/SetLightsFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsPermissibleTrue.o : $(PRJ_ROOT_DIR)/Commands/SetLightsPermissibleTrue.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsTruss.o : $(PRJ_ROOT_DIR)/Commands/SetLightsTruss.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCarry.o : $(PRJ_ROOT_DIR)/Commands/SetPositionCarry.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCloseFire.o : $(PRJ_ROOT_DIR)/Commands/SetPositionCloseFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionFire.o : $(PRJ_ROOT_DIR)/Commands/SetPositionFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionGround.o : $(PRJ_ROOT_DIR)/Commands/SetPositionGround.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionHome.o : $(PRJ_ROOT_DIR)/Commands/SetPositionHome.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionLine.o : $(PRJ_ROOT_DIR)/Commands/SetPositionLine.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionOnePoint.o : $(PRJ_ROOT_DIR)/Commands/SetPositionOnePoint.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussClose.o : $(PRJ_ROOT_DIR)/Commands/SetPositionTrussClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussFar.o : $(PRJ_ROOT_DIR)/Commands/SetPositionTrussFar.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetSpecificAngle.o : $(PRJ_ROOT_DIR)/Commands/SetSpecificAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition45.o : $(PRJ_ROOT_DIR)/Commands/SetTrussPosition45.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition60.o : $(PRJ_ROOT_DIR)/Commands/SetTrussPosition60.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleCharybdis.o : $(PRJ_ROOT_DIR)/Commands/ToggleCharybdis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleClaw.o : $(PRJ_ROOT_DIR)/Commands/ToggleClaw.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleDriveGear.o : $(PRJ_ROOT_DIR)/Commands/ToggleDriveGear.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleFang.o : $(PRJ_ROOT_DIR)/Commands/ToggleFang.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTopRoller.o : $(PRJ_ROOT_DIR)/Commands/ToggleTopRoller.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTusk.o : $(PRJ_ROOT_DIR)/Commands/ToggleTusk.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleWinchPin.o : $(PRJ_ROOT_DIR)/Commands/ToggleWinchPin.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TopRollerByJoystick.o : $(PRJ_ROOT_DIR)/Commands/TopRollerByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Truss.o : $(PRJ_ROOT_DIR)/Commands/Truss.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequence.o : $(PRJ_ROOT_DIR)/Commands/TrussShotSequence.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequenceNEW.o : $(PRJ_ROOT_DIR)/Commands/TrussShotSequenceNEW.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByJoystick.o : $(PRJ_ROOT_DIR)/Commands/TurretByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByTurntable.o : $(PRJ_ROOT_DIR)/Commands/TurretByTurntable.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadLeft.o : $(PRJ_ROOT_DIR)/Commands/TurretLoadLeft.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadRight.o : $(PRJ_ROOT_DIR)/Commands/TurretLoadRight.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskClose.o : $(PRJ_ROOT_DIR)/Commands/TuskClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskOpen.o : $(PRJ_ROOT_DIR)/Commands/TuskOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForBall.o : $(PRJ_ROOT_DIR)/Commands/WatchForBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForGroundBall.o : $(PRJ_ROOT_DIR)/Commands/WatchForGroundBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WaveWait.o : $(PRJ_ROOT_DIR)/Commands/WaveWait.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchByJoystick.o : $(PRJ_ROOT_DIR)/Commands/WinchByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchPin.o : $(PRJ_ROOT_DIR)/Commands/WinchPin.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/ArmPitchWithPID.o : $(PRJ_ROOT_DIR)/Subsystems/ArmPitchWithPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/BallCollector.o : $(PRJ_ROOT_DIR)/Subsystems/BallCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Claw.o : $(PRJ_ROOT_DIR)/Subsystems/Claw.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/CompressorSubSystem.o : $(PRJ_ROOT_DIR)/Subsystems/CompressorSubSystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DashboardUpdater.o : $(PRJ_ROOT_DIR)/Subsystems/DashboardUpdater.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DriveWithPID.o : $(PRJ_ROOT_DIR)/Subsystems/DriveWithPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Lights.o : $(PRJ_ROOT_DIR)/Subsystems/Lights.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/TurretWithPID.o : $(PRJ_ROOT_DIR)/Subsystems/TurretWithPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmByTurntable.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmPitchByJoystick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoCatch.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_1_FireDriveToZone.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_DoubleBallFront_DriveForward.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoWinch.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveStraight.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveTurn.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_ShootDrive.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_Turret.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Autonomous_Command.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CatchPosition.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CenterTurret.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisClose.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisOpen.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawClose.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawOpen.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CollectBall.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DashboardUpdateCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DepositBall.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveByJoystick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftHigh.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftLow.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveStraightByTime.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangClose.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangOpen.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FeedMore.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FindTarget.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Fire.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_Line.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_OnePoint.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussClose.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussFar.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/KillPID.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/RunCollector.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsFire.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsPermissibleTrue.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsTruss.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCarry.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCloseFire.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionFire.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionGround.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionHome.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionLine.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionOnePoint.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussClose.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussFar.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetSpecificAngle.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition45.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition60.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleCharybdis.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleClaw.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleDriveGear.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleFang.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTopRoller.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTusk.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleWinchPin.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TopRollerByJoystick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Truss.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequence.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequenceNEW.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByJoystick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByTurntable.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadLeft.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadRight.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskClose.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskOpen.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForBall.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForGroundBall.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WaveWait.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchByJoystick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchPin.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/OI.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Robot.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/RobotMap.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/ArmPitchWithPID.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/BallCollector.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Claw.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/CompressorSubSystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DashboardUpdater.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DriveWithPID.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Lights.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Shooter.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/TurretWithPID.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBassedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBassedRobotTemplate_partialImage/$(MODE_DIR)

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmByTurntable.o : $(PRJ_ROOT_DIR)/Commands/ArmByTurntable.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmPitchByJoystick.o : $(PRJ_ROOT_DIR)/Commands/ArmPitchByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoCatch.o : $(PRJ_ROOT_DIR)/Commands/AutoCatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_1_FireDriveToZone.o : $(PRJ_ROOT_DIR)/Commands/AutoMode_1_FireDriveToZone.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_DoubleBallFront_DriveForward.o : $(PRJ_ROOT_DIR)/Commands/AutoMode_DoubleBallFront_DriveForward.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoWinch.o : $(PRJ_ROOT_DIR)/Commands/AutoWinch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveStraight.o : $(PRJ_ROOT_DIR)/Commands/Auto_DriveStraight.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveTurn.o : $(PRJ_ROOT_DIR)/Commands/Auto_DriveTurn.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_ShootDrive.o : $(PRJ_ROOT_DIR)/Commands/Auto_ShootDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_Turret.o : $(PRJ_ROOT_DIR)/Commands/Auto_Turret.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Autonomous_Command.o : $(PRJ_ROOT_DIR)/Commands/Autonomous_Command.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CatchPosition.o : $(PRJ_ROOT_DIR)/Commands/CatchPosition.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CenterTurret.o : $(PRJ_ROOT_DIR)/Commands/CenterTurret.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisClose.o : $(PRJ_ROOT_DIR)/Commands/CharybdisClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisOpen.o : $(PRJ_ROOT_DIR)/Commands/CharybdisOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawClose.o : $(PRJ_ROOT_DIR)/Commands/ClawClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawOpen.o : $(PRJ_ROOT_DIR)/Commands/ClawOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CollectBall.o : $(PRJ_ROOT_DIR)/Commands/CollectBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DashboardUpdateCommand.o : $(PRJ_ROOT_DIR)/Commands/DashboardUpdateCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DepositBall.o : $(PRJ_ROOT_DIR)/Commands/DepositBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveByJoystick.o : $(PRJ_ROOT_DIR)/Commands/DriveByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftHigh.o : $(PRJ_ROOT_DIR)/Commands/DriveShiftHigh.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftLow.o : $(PRJ_ROOT_DIR)/Commands/DriveShiftLow.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveStraightByTime.o : $(PRJ_ROOT_DIR)/Commands/DriveStraightByTime.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangClose.o : $(PRJ_ROOT_DIR)/Commands/FangClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangOpen.o : $(PRJ_ROOT_DIR)/Commands/FangOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FeedMore.o : $(PRJ_ROOT_DIR)/Commands/FeedMore.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FindTarget.o : $(PRJ_ROOT_DIR)/Commands/FindTarget.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Fire.o : $(PRJ_ROOT_DIR)/Commands/Fire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence.o : $(PRJ_ROOT_DIR)/Commands/FireSequence.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_Line.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_Line.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_OnePoint.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_OnePoint.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussClose.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_TrussClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussFar.o : $(PRJ_ROOT_DIR)/Commands/FireSequence_TrussFar.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/KillPID.o : $(PRJ_ROOT_DIR)/Commands/KillPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/RunCollector.o : $(PRJ_ROOT_DIR)/Commands/RunCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsFire.o : $(PRJ_ROOT_DIR)/Commands/SetLightsFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsPermissibleTrue.o : $(PRJ_ROOT_DIR)/Commands/SetLightsPermissibleTrue.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsTruss.o : $(PRJ_ROOT_DIR)/Commands/SetLightsTruss.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCarry.o : $(PRJ_ROOT_DIR)/Commands/SetPositionCarry.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCloseFire.o : $(PRJ_ROOT_DIR)/Commands/SetPositionCloseFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionFire.o : $(PRJ_ROOT_DIR)/Commands/SetPositionFire.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionGround.o : $(PRJ_ROOT_DIR)/Commands/SetPositionGround.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionHome.o : $(PRJ_ROOT_DIR)/Commands/SetPositionHome.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionLine.o : $(PRJ_ROOT_DIR)/Commands/SetPositionLine.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionOnePoint.o : $(PRJ_ROOT_DIR)/Commands/SetPositionOnePoint.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussClose.o : $(PRJ_ROOT_DIR)/Commands/SetPositionTrussClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussFar.o : $(PRJ_ROOT_DIR)/Commands/SetPositionTrussFar.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetSpecificAngle.o : $(PRJ_ROOT_DIR)/Commands/SetSpecificAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition45.o : $(PRJ_ROOT_DIR)/Commands/SetTrussPosition45.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition60.o : $(PRJ_ROOT_DIR)/Commands/SetTrussPosition60.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleCharybdis.o : $(PRJ_ROOT_DIR)/Commands/ToggleCharybdis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleClaw.o : $(PRJ_ROOT_DIR)/Commands/ToggleClaw.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleDriveGear.o : $(PRJ_ROOT_DIR)/Commands/ToggleDriveGear.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleFang.o : $(PRJ_ROOT_DIR)/Commands/ToggleFang.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTopRoller.o : $(PRJ_ROOT_DIR)/Commands/ToggleTopRoller.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTusk.o : $(PRJ_ROOT_DIR)/Commands/ToggleTusk.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleWinchPin.o : $(PRJ_ROOT_DIR)/Commands/ToggleWinchPin.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TopRollerByJoystick.o : $(PRJ_ROOT_DIR)/Commands/TopRollerByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Truss.o : $(PRJ_ROOT_DIR)/Commands/Truss.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequence.o : $(PRJ_ROOT_DIR)/Commands/TrussShotSequence.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequenceNEW.o : $(PRJ_ROOT_DIR)/Commands/TrussShotSequenceNEW.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByJoystick.o : $(PRJ_ROOT_DIR)/Commands/TurretByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByTurntable.o : $(PRJ_ROOT_DIR)/Commands/TurretByTurntable.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadLeft.o : $(PRJ_ROOT_DIR)/Commands/TurretLoadLeft.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadRight.o : $(PRJ_ROOT_DIR)/Commands/TurretLoadRight.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskClose.o : $(PRJ_ROOT_DIR)/Commands/TuskClose.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskOpen.o : $(PRJ_ROOT_DIR)/Commands/TuskOpen.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForBall.o : $(PRJ_ROOT_DIR)/Commands/WatchForBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForGroundBall.o : $(PRJ_ROOT_DIR)/Commands/WatchForGroundBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WaveWait.o : $(PRJ_ROOT_DIR)/Commands/WaveWait.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchByJoystick.o : $(PRJ_ROOT_DIR)/Commands/WinchByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchPin.o : $(PRJ_ROOT_DIR)/Commands/WinchPin.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/ArmPitchWithPID.o : $(PRJ_ROOT_DIR)/Subsystems/ArmPitchWithPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/BallCollector.o : $(PRJ_ROOT_DIR)/Subsystems/BallCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Claw.o : $(PRJ_ROOT_DIR)/Subsystems/Claw.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/CompressorSubSystem.o : $(PRJ_ROOT_DIR)/Subsystems/CompressorSubSystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DashboardUpdater.o : $(PRJ_ROOT_DIR)/Subsystems/DashboardUpdater.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DriveWithPID.o : $(PRJ_ROOT_DIR)/Subsystems/DriveWithPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Lights.o : $(PRJ_ROOT_DIR)/Subsystems/Lights.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/TurretWithPID.o : $(PRJ_ROOT_DIR)/Subsystems/TurretWithPID.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBassedRobotTemplate_partialImage = CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmByTurntable.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmPitchByJoystick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoCatch.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_1_FireDriveToZone.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_DoubleBallFront_DriveForward.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoWinch.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveStraight.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveTurn.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_ShootDrive.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_Turret.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Autonomous_Command.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CatchPosition.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CenterTurret.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisClose.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisOpen.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawClose.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawOpen.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CollectBall.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DashboardUpdateCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DepositBall.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveByJoystick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftHigh.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftLow.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveStraightByTime.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangClose.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangOpen.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FeedMore.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FindTarget.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Fire.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_Line.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_OnePoint.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussClose.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussFar.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/KillPID.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/RunCollector.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsFire.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsPermissibleTrue.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsTruss.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCarry.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCloseFire.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionFire.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionGround.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionHome.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionLine.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionOnePoint.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussClose.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussFar.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetSpecificAngle.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition45.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition60.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleCharybdis.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleClaw.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleDriveGear.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleFang.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTopRoller.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTusk.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleWinchPin.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TopRollerByJoystick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Truss.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequence.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequenceNEW.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByJoystick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByTurntable.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadLeft.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadRight.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskClose.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskOpen.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForBall.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForGroundBall.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WaveWait.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchByJoystick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchPin.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/OI.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Robot.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/RobotMap.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/ArmPitchWithPID.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/BallCollector.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Claw.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/CompressorSubSystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DashboardUpdater.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DriveWithPID.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Lights.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Shooter.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/TurretWithPID.o

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o : $(OBJECTS_CommandBassedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBassedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBassedRobotTemplate_partialImage" ]; then cd "CommandBassedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmByTurntable.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmPitchByJoystick.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoCatch.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_1_FireDriveToZone.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_DoubleBallFront_DriveForward.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoWinch.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveStraight.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveTurn.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_ShootDrive.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_Turret.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Autonomous_Command.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CatchPosition.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CenterTurret.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisClose.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisOpen.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawClose.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawOpen.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CollectBall.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DashboardUpdateCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DepositBall.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveByJoystick.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftHigh.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftLow.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveStraightByTime.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangClose.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangOpen.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FeedMore.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FindTarget.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Fire.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_Line.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_OnePoint.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussClose.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussFar.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/KillPID.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/RunCollector.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsFire.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsPermissibleTrue.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsTruss.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCarry.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCloseFire.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionFire.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionGround.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionHome.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionLine.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionOnePoint.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussClose.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussFar.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetSpecificAngle.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition45.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition60.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleCharybdis.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleClaw.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleDriveGear.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleFang.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTopRoller.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTusk.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleWinchPin.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TopRollerByJoystick.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Truss.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequence.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequenceNEW.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByJoystick.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByTurntable.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadLeft.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadRight.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskClose.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskOpen.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForBall.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForGroundBall.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WaveWait.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchByJoystick.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchPin.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/OI.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Robot.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/RobotMap.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/ArmPitchWithPID.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/BallCollector.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Claw.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/CompressorSubSystem.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DashboardUpdater.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DriveWithPID.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Lights.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Shooter.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/TurretWithPID.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmByTurntable.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ArmPitchByJoystick.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoCatch.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_1_FireDriveToZone.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoMode_DoubleBallFront_DriveForward.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/AutoWinch.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveStraight.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_DriveTurn.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_ShootDrive.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Auto_Turret.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Autonomous_Command.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CatchPosition.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CenterTurret.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisClose.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CharybdisOpen.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawClose.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ClawOpen.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/CollectBall.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DashboardUpdateCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DepositBall.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveByJoystick.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftHigh.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveShiftLow.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/DriveStraightByTime.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangClose.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FangOpen.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FeedMore.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FindTarget.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Fire.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_Line.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_OnePoint.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussClose.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/FireSequence_TrussFar.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/KillPID.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/RunCollector.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsFire.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsPermissibleTrue.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetLightsTruss.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCarry.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionCloseFire.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionFire.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionGround.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionHome.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionLine.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionOnePoint.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussClose.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetPositionTrussFar.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetSpecificAngle.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition45.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/SetTrussPosition60.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleCharybdis.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleClaw.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleDriveGear.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleFang.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTopRoller.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleTusk.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/ToggleWinchPin.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TopRollerByJoystick.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/Truss.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequence.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TrussShotSequenceNEW.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByJoystick.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretByTurntable.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadLeft.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TurretLoadRight.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskClose.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/TuskOpen.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForBall.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WatchForGroundBall.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WaveWait.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchByJoystick.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Commands/WinchPin.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/OI.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Robot.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/RobotMap.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/ArmPitchWithPID.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/BallCollector.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Claw.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/CompressorSubSystem.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DashboardUpdater.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/DriveWithPID.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Lights.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/Shooter.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Cthulhu2014/Subsystems/TurretWithPID.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
