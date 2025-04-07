#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d99d20, internal_6d99d20, public_6d99d20);
extern "C" NAKED register_t __cdecl internal_6d99d20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db404c]
        mov dword ptr ds : [public_6dbbee4], eax
        ret 
        UNREACHABLE_TRAP(0x6d99d20)
    }
}
