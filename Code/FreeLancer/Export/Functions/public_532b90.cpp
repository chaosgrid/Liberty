#include "FreeLancer-PCH.h"

PROC_DECLARE(0x532b90, internal_532b90, public_532b90);
extern "C" NAKED register_t __cdecl internal_532b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de198]
        mov dword ptr ds : [public_67553c], eax
        ret 
        UNREACHABLE_TRAP(0x532b90)
    }
}
