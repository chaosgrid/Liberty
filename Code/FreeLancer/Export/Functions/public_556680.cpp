#include "FreeLancer-PCH.h"

PROC_DECLARE(0x556680, internal_556680, public_556680);
extern "C" NAKED register_t __cdecl internal_556680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x38]
        fdiv dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x556680)
    }
}
