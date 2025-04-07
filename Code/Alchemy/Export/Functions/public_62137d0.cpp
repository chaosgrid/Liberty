#include "Alchemy-PCH.h"

PROC_DECLARE(0x62137d0, internal_62137d0, public_62137d0);
extern "C" NAKED register_t __cdecl internal_62137d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x62137d0)
    }
}
