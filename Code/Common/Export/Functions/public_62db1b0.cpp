#include "Common-PCH.h"

PROC_DECLARE(0x62db1b0, internal_62db1b0, public_62db1b0);
extern "C" NAKED register_t __cdecl internal_62db1b0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0xC
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e17c
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x62db1b0)
    }
}
