#include "Alchemy-PCH.h"

PROC_DECLARE(0x6236a60, internal_6236a60, public_6236a60);
extern "C" NAKED register_t __cdecl internal_6236a60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6236a60)
    }
}
