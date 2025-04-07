#include "Common-PCH.h"

PROC_DECLARE(0x62e1540, internal_62e1540, public_62e1540);
extern "C" NAKED register_t __cdecl internal_62e1540()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x62e1540)
    }
}
