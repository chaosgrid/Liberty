#include "Common-PCH.h"

PROC_DECLARE(0x62db060, internal_62db060, public_62db060);
extern "C" NAKED register_t __cdecl internal_62db060()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0xA
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e154
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x62db060)
    }
}
