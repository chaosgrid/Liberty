#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e040, internal_623e040, public_623e040);
extern "C" NAKED register_t __cdecl internal_623e040()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x623e040)
    }
}
