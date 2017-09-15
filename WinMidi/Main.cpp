#include <Windows.h>

#include "WinMidi.h"

int APIENTRY WinMain(HINSTANCE instance, HINSTANCE prev, LPSTR cmd_str, int cmd_show)
{
	WinMidi process;
	process.Initialise(instance);

	if (*cmd_str)
		process.LoadMIDIFile(cmd_str);

	return process.Run(cmd_show);
}
