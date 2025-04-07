#include "Alchemy-PCH.h"

PROC_DECLARE(0x623f6b0, internal_623f6b0, public_623f6b0);
extern "C" NAKED register_t __cdecl internal_623f6b0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcos 
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+4]
        fsin 
        fstp dword ptr ds : [eax+4]
        ret 
        UNREACHABLE_TRAP(0x623f6b0)
    }
}
