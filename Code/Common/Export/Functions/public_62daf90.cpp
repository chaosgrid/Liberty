#include "Common-PCH.h"

PROC_DECLARE(0x62daf90, internal_62daf90, public_62daf90);
extern "C" NAKED register_t __cdecl internal_62daf90()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 6
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e12c
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x62daf90)
    }
}
