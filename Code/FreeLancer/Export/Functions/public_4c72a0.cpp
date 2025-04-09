#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c72a0, internal_4c72a0, public_4c72a0);
extern "C" NAKED register_t __cdecl internal_4c72a0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_673510], eax
        mov dword ptr ds : [public_673514], eax
        ret 
        UNREACHABLE_TRAP(0x4c72a0)
    }
}
