#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212250, internal_6212250, public_6212250);
extern "C" NAKED register_t __cdecl internal_6212250()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6212250)
    }
}
