#include "FreeLancer-PCH.h"

PROC_DECLARE(0x55fdd0, internal_55fdd0, public_55fdd0);
extern "C" NAKED register_t __cdecl internal_55fdd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1a1c]
        mov dword ptr ds : [public_679b6c], eax
        ret 
        UNREACHABLE_TRAP(0x55fdd0)
    }
}
