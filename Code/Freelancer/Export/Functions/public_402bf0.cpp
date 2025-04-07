#include "Freelancer-PCH.h"

PROC_DECLARE(0x402bf0, internal_402bf0, public_402bf0);
extern "C" NAKED register_t __cdecl internal_402bf0()
{
    __asm
    {
        mov dword ptr ds : [public_616490], 0
        ret 
        UNREACHABLE_TRAP(0x402bf0)
    }
}
