PROJECT = VehicleDistanceList

SRC = Assignment1_Q2_TestVehicleDistanceList.cpp Assignment1_Q2_VehicleDistanceList.h Assignment1_Q2_VehicleDistanceList.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*
