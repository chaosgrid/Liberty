#include "Alchemy-PCH.h"

PROC_DECLARE(0x6231df0, internal_6231df0, public_6231df0);
extern "C" NAKED register_t __cdecl internal_6231df0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6231df0)
    }
}
