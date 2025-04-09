#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51dfa0, internal_51dfa0, public_51dfa0);
extern "C" NAKED register_t __cdecl internal_51dfa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc134]
        mov dword ptr ds : [public_6752c0], eax
        ret 
        UNREACHABLE_TRAP(0x51dfa0)
    }
}
