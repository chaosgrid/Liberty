#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d869b0, internal_6d869b0, public_6d869b0);
extern "C" NAKED register_t __cdecl internal_6d869b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3764]
        mov dword ptr ds : [public_6dbba28], eax
        ret 
        UNREACHABLE_TRAP(0x6d869b0)
    }
}
