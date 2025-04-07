#include "Common-PCH.h"

PROC_DECLARE(0x62db250, internal_62db250, public_62db250);
extern "C" NAKED register_t __cdecl internal_62db250()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0x12
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e18c
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x62db250)
    }
}
