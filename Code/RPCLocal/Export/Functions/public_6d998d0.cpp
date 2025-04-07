#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d998d0, internal_6d998d0, public_6d998d0);
extern "C" NAKED register_t __cdecl internal_6d998d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db402c]
        mov dword ptr ds : [public_6dbbed0], eax
        ret 
        UNREACHABLE_TRAP(0x6d998d0)
    }
}
