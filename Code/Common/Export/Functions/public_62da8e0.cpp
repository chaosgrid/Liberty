#include "Common-PCH.h"

PROC_DECLARE(0x62da8e0, internal_62da8e0, public_62da8e0);
extern "C" NAKED register_t __cdecl internal_62da8e0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], 0x437A0000
        ret 
        UNREACHABLE_TRAP(0x62da8e0)
    }
}
