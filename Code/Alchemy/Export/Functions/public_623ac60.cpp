#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ac60, internal_623ac60, public_623ac60);
extern "C" NAKED register_t __cdecl internal_623ac60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x623ac60)
    }
}
