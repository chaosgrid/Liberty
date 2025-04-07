#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214850, internal_6214850, public_6214850);
extern "C" NAKED register_t __cdecl internal_6214850()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6214850)
    }
}
