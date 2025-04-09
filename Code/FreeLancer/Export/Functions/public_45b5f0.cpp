#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45b5f0, internal_45b5f0, public_45b5f0);
extern "C" NAKED register_t __cdecl internal_45b5f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cea04]
        mov dword ptr ds : [public_66d3e8], eax
        ret 
        UNREACHABLE_TRAP(0x45b5f0)
    }
}
