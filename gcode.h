// Header gaurd
#ifndef GCODE_H
#define GCODE_H


// Header files
extern "C" {
	#include <asf.h>
}


// Gcode class
class Gcode {

	// Public
	public :
	
		// Parameterized constructor
		Gcode(char *command = NULL);
		
		// Parse command
		bool parseCommand(char *command);
		
		// Clear command
		void clearCommand();
		
		// Is empty
		bool isEmpty() const;
		
		// Has parameter G
		bool hasParameterG() const;
		
		// Get parameter G
		uint8_t getParameterG() const;
		
		// Has parameter M
		bool hasParameterM() const;
		
		// Get parameter M
		uint16_t getParameterM() const;
		
		// Has parameter T
		bool hasParameterT() const;
		
		// Get parameter T
		uint8_t getParameterT() const;
		
		// Has parameter S
		bool hasParameterS() const;
		
		// Get parameter S
		int32_t getParameterS() const;
		
		// Has parameter P
		bool hasParameterP() const;
		
		// Get parameter P
		int32_t getParameterP() const;
		
		// Has parameter X
		bool hasParameterX() const;
		
		// Get parameter X
		float getParameterX() const;
		
		// Has parameter Y
		bool hasParameterY() const;
		
		// Get parameter Y
		float getParameterY() const;
		
		// Has parameter Z
		bool hasParameterZ() const;
		
		// Get parameter Z
		float getParameterZ() const;
		
		// Has parameter F
		bool hasParameterF() const;
		
		// Get parameter F
		float getParameterF() const;
		
		// Has parameter E
		bool hasParameterE() const;
		
		// Get parameter E
		float getParameterE() const;
		
		// Has parameter N
		bool hasParameterN() const;
		
		// Get parameter N
		uint32_t getParameterN() const;
		
		// Has host command
		bool hasHostCommand() const;
		
		// Get host command
		const char *getHostCommand() const;
		
		// Has valid checksum
		bool hasValidChecksum() const;
	
	// Private
	private :
	
		// Command parameters
		uint16_t commandParameters;
		
		// Values
		uint8_t valueG;
		uint16_t valueM;
		uint8_t valueT;
		int32_t valueS;
		int32_t valueP;
		float valueX;
		float valueY;
		float valueZ;
		float valueF;
		float valueE;
		uint32_t valueN;
		
		// Valid checksum
		bool validChecksum;
		
		// Host command
		char hostCommand[UDI_CDC_COMM_EP_SIZE];
};


#endif
