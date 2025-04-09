#include "FreeLancer-PCH.h"

PROC_DECLARE(0x525690, internal_525690, public_525690);
extern "C" NAKED register_t __cdecl internal_525690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0x20000000
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x525690)
    }
}
