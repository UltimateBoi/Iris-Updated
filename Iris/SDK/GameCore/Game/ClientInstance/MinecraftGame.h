#pragma once

class MinecraftGame
{
public:
	bool canUseMoveKeys()
	{
		static unsigned int offset = 0x1A0; // offset sig here // Updated to 1.20.71
		//static unsigned int offset = 0x108; // 1.20.0.1
		return *reinterpret_cast<bool*>((uintptr_t)this + offset);
	}
};