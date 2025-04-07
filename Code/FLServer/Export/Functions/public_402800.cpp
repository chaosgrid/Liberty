#include "FLServer-PCH.h"

PROC_DECLARE(0x402800, internal_402800, public_402800);
extern "C" NAKED register_t __cdecl internal_402800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c194]
        mov dword ptr ds : [public_425f88], eax
        ret 
        UNREACHABLE_TRAP(0x402800)
    }
}
