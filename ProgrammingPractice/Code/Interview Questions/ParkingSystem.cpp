#include "../../Helper Functions/Helper.hpp"


//==========================================
//MINIMAL Parking System
//==========================================

class Vehicle;

enum VehicleType
{
	eBike,
	eCar,
	eBus,
	eNone
};

struct VehicleProperties
{
private:
	VehicleType m_type;

public:
	int			m_numSlots = 0;
	bool		m_isParked = false;

};

struct ParkSlot
{
public:
	bool			m_isOccupied;
	float			m_timeRemaining;
	Vehicle			m_VehicleInSlot;

	ParkSlot()
	{

	}

	ParkSlot(Vehicle a_vehicle, VehicleType a_type) : m_VehicleInSlot(a_vehicle), m_typeAllowed(a_type)
	{

	}

private:
	VehicleType		m_typeAllowed;
};


class ParkingLot
{
private:
	//Limit for the slots in a lot.
	int m_ParkingLimit = 10;

public:
	std::stack<ParkSlot> AvailableSlots;

	std::vector<ParkSlot> FilledSlots;

	//if levels were there
	std::vector<std::stack<ParkSlot>> levels;
};



class Vehicle
{

public:
	bool m_isParked = false;
	VehicleType m_typeofVehicle;
	float m_duration = 0.0f;
	
	virtual VehicleType getType()
	{
		return VehicleType::eNone;
	}

	virtual float GetTimeRemaining()
	{
		return 0.0f;
	}


};

class Car : public Vehicle
{
	Car()
	{
		m_typeofVehicle = VehicleType::eCar;
		m_isParked = false;
		m_duration = 100.0f;
	}

	virtual VehicleType getType()
	{
		return m_typeofVehicle;
	}

	virtual float GetTimeRemaining()
	{
		return m_duration;
	}
};


int main()
{
	STDPRINTLINE("Hello world!");


	return 0;
}