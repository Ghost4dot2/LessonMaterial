#pragma once

enum class Nerd {NONE, NERD, KEY};
enum class Headlamp {NOHAT = 4, LAMP, BRIGHT_LAMP};

class Inventory
{
private:
	bool mirror;
	Nerd mtgNerd;
	Headlamp lamp;
public:
	/*
	Inventory()
	{
		mirror = false;
		mtgNerd = Nerd::NONE;
		lamp = Headlamp::NOHAT;
	} */
	
	Inventory(bool isMirror) :	mirror(isMirror), mtgNerd(Nerd::NONE), lamp(Headlamp::NOHAT)
	{
	}

	~Inventory()
	{}
	bool getMirror();
	bool getMirror(int avalue);
	Nerd getMTGNerd();
	Headlamp getLamp();

	void setMirror(bool hasMirror);
	void setMTGNerd(Nerd nerdState);
	void setLamp(Headlamp lampState);

	
};

