#Target_name: Dependencies
#<TAB>Command
PROJECT  = average
SRC = Assignment1_Q2_TestVehicleDistanceVector.cpp Assignment1_Q2_VehicleDistanceVector.h Assignment1_Q2_VehicleDistanceVector.cpp
INC = Assignment1_Q2_VehicleDistanceVector.h
target : $(SRC) $(INC)
		g++ $(SRC) -lgtest -lgtest_main -lpthread

run : target
		  ./a.out
clean : 
	  		rm ./a.out