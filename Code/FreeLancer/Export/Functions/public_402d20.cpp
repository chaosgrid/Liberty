#include "FreeLancer-PCH.h"

PROC_DECLARE(0x402d20, internal_402d20, public_402d20);
extern "C" NAKED register_t __cdecl internal_402d20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_616490]
        mov dword ptr ds : [public_616474], eax
        ret 
        UNREACHABLE_TRAP(0x402d20)
    }
}
