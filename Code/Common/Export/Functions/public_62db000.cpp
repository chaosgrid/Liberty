#include "Common-PCH.h"

PROC_DECLARE(0x62db000, internal_62db000, public_62db000);
extern "C" NAKED register_t __cdecl internal_62db000()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 8
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e13c
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x62db000)
    }
}
