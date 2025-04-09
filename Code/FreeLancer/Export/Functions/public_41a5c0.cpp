#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41a5c0, internal_41a5c0, public_41a5c0);
extern "C" NAKED register_t __cdecl internal_41a5c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9028]
        mov dword ptr ds : [public_6166c4], eax
        ret 
        UNREACHABLE_TRAP(0x41a5c0)
    }
}
