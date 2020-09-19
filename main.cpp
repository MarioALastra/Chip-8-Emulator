#include "CPU.h"



//"horseWorldOnline.ch8"
int main()
{
	CPU* chip = new CPU();

	chip->LoadROM("horseWorldOnline.ch8");

	//for(int i = 0; i < MEMORY_SIZE; i++)
		//cout << i <<": "<< std::hex << (int)chip->memory[i] << endl;
	
	//cout << sizeof(chip->memory) << endl;

	while (true)
	{
		cout << "PC: " << std::hex << chip->PC << std::dec << endl;

		for (int i = 0; i < 16; i++)
		{
			cout << "V[" << i << "]:" << std::hex << chip->V[i] << std::dec << endl;
		}

		cout << "SP: " << std::hex << chip->SP << std::dec << endl;
		cout << "DT: " << std::hex << chip->DT << std::dec << endl;
		cout << "ST: " << std::hex << chip->ST << std::dec << endl;
		cout << "OP: " << std::hex << chip->opcode << std::dec << endl;

		chip->Cycle();
		std::system("cls");
	}

	return 0;
}

