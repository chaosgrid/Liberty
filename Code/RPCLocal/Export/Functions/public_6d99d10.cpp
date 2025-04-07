#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d99d10, internal_6d99d10, public_6d99d10);
extern "C" NAKED register_t __cdecl internal_6d99d10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db404c]
        mov dword ptr ds : [public_6dbbee0], eax
        ret 
        UNREACHABLE_TRAP(0x6d99d10)
    }
}
