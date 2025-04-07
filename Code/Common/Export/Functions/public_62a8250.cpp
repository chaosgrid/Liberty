#include "Common-PCH.h"

PROC_DECLARE(0x62a8250, internal_62a8250, public_62a8250);
extern "C" NAKED register_t __cdecl internal_62a8250()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_639e004
        ret 
        UNREACHABLE_TRAP(0x62a8250)
    }
}
