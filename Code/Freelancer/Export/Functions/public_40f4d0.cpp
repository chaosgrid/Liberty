#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f4d0, internal_40f4d0, public_40f4d0);
extern "C" NAKED register_t __cdecl internal_40f4d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x78]
        fdiv dword ptr ds : [eax+0xA4]
        ret 4
        UNREACHABLE_TRAP(0x40f4d0)
    }
}
