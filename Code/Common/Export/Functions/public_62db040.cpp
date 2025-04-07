#include "Common-PCH.h"

PROC_DECLARE(0x62db040, internal_62db040, public_62db040);
extern "C" NAKED register_t __cdecl internal_62db040()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0x10
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_639e14c
        ret 
        UNREACHABLE_TRAP(0x62db040)
    }
}
