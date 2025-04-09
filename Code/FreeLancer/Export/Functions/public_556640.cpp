#include "Freelancer-PCH.h"

PROC_DECLARE(0x556640, internal_556640, public_556640);
extern "C" NAKED register_t __cdecl internal_556640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x556640)
    }
}
