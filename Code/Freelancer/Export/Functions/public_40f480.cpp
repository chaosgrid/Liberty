#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f480, internal_40f480, public_40f480);
extern "C" NAKED register_t __cdecl internal_40f480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x98]
        ret 4
        UNREACHABLE_TRAP(0x40f480)
    }
}
