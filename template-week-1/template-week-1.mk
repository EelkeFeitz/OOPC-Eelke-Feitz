##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=template-week-1
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk"
ProjectPath            :="C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=eelke
Date                   :=24/05/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-32/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="template-week-1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
LinkOptions            :=  -lgdi32 -static-libgcc -static-libstdc++ 
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)../Catch/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-32/bin/ar.exe rcu
CXX      := C:/TDM-GCC-32/bin/g++.exe
CC       := C:/TDM-GCC-32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -std=c++11 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/circle.cpp$(ObjectSuffix) $(IntermediateDirectory)/FilledRectangle.cpp$(ObjectSuffix) $(IntermediateDirectory)/house.cpp$(ObjectSuffix) $(IntermediateDirectory)/line.cpp$(ObjectSuffix) $(IntermediateDirectory)/raam.cpp$(ObjectSuffix) $(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) $(IntermediateDirectory)/window.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/circle.cpp$(ObjectSuffix): circle.cpp $(IntermediateDirectory)/circle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/circle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/circle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/circle.cpp$(DependSuffix): circle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/circle.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/circle.cpp$(DependSuffix) -MM circle.cpp

$(IntermediateDirectory)/circle.cpp$(PreprocessSuffix): circle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/circle.cpp$(PreprocessSuffix) circle.cpp

$(IntermediateDirectory)/FilledRectangle.cpp$(ObjectSuffix): FilledRectangle.cpp $(IntermediateDirectory)/FilledRectangle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/FilledRectangle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FilledRectangle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FilledRectangle.cpp$(DependSuffix): FilledRectangle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FilledRectangle.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FilledRectangle.cpp$(DependSuffix) -MM FilledRectangle.cpp

$(IntermediateDirectory)/FilledRectangle.cpp$(PreprocessSuffix): FilledRectangle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FilledRectangle.cpp$(PreprocessSuffix) FilledRectangle.cpp

$(IntermediateDirectory)/house.cpp$(ObjectSuffix): house.cpp $(IntermediateDirectory)/house.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/house.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/house.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/house.cpp$(DependSuffix): house.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/house.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/house.cpp$(DependSuffix) -MM house.cpp

$(IntermediateDirectory)/house.cpp$(PreprocessSuffix): house.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/house.cpp$(PreprocessSuffix) house.cpp

$(IntermediateDirectory)/line.cpp$(ObjectSuffix): line.cpp $(IntermediateDirectory)/line.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/line.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/line.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/line.cpp$(DependSuffix): line.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/line.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/line.cpp$(DependSuffix) -MM line.cpp

$(IntermediateDirectory)/line.cpp$(PreprocessSuffix): line.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/line.cpp$(PreprocessSuffix) line.cpp

$(IntermediateDirectory)/raam.cpp$(ObjectSuffix): raam.cpp $(IntermediateDirectory)/raam.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/raam.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/raam.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/raam.cpp$(DependSuffix): raam.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/raam.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/raam.cpp$(DependSuffix) -MM raam.cpp

$(IntermediateDirectory)/raam.cpp$(PreprocessSuffix): raam.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/raam.cpp$(PreprocessSuffix) raam.cpp

$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix): rectangle.cpp $(IntermediateDirectory)/rectangle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/rectangle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rectangle.cpp$(DependSuffix): rectangle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/rectangle.cpp$(DependSuffix) -MM rectangle.cpp

$(IntermediateDirectory)/rectangle.cpp$(PreprocessSuffix): rectangle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rectangle.cpp$(PreprocessSuffix) rectangle.cpp

$(IntermediateDirectory)/window.cpp$(ObjectSuffix): window.cpp $(IntermediateDirectory)/window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/eelke/Documents/School/Vervolgopleiding/Hogeschool Utrecht/Leerjaar 1/Blok 4/OOPC/Git Huiswerk/template-week-1/window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/window.cpp$(DependSuffix): window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/window.cpp$(DependSuffix) -MM window.cpp

$(IntermediateDirectory)/window.cpp$(PreprocessSuffix): window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/window.cpp$(PreprocessSuffix) window.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


