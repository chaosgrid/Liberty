#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d869a0, internal_6d869a0, public_6d869a0);
extern "C" NAKED register_t __cdecl internal_6d869a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3760]
        mov dword ptr ds : [public_6dbbb00], eax
        ret 
        UNREACHABLE_TRAP(0x6d869a0)
    }
}
