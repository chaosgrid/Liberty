#include "Alchemy-PCH.h"

PROC_DECLARE(0x6223e30, internal_6223e30, public_6223e30);
extern "C" NAKED register_t __cdecl internal_6223e30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6223e30)
    }
}
