#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c370, internal_623c370, public_623c370);
extern "C" NAKED register_t __cdecl internal_623c370()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x623c370)
    }
}
