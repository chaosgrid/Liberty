#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41a5b0, internal_41a5b0, public_41a5b0);
extern "C" NAKED register_t __cdecl internal_41a5b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9024]
        mov dword ptr ds : [public_6166c8], eax
        ret 
        UNREACHABLE_TRAP(0x41a5b0)
    }
}
