#include "Alchemy-PCH.h"

PROC_DECLARE(0x622e9e0, internal_622e9e0, public_622e9e0);
extern "C" NAKED register_t __cdecl internal_622e9e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x622e9e0)
    }
}
