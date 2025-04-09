#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fce80, internal_4fce80, public_4fce80);
extern "C" NAKED register_t __cdecl internal_4fce80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9e18]
        mov dword ptr ds : [public_674f70], eax
        ret 
        UNREACHABLE_TRAP(0x4fce80)
    }
}
