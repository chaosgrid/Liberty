#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84200);

PROC_DECLARE(0x6d84200, internal_6d84200, public_6d84200);
extern "C" NAKED register_t __cdecl internal_6d84200()
{
    __asm
    {
        movsx eax, byte ptr ds : [ecx+0x68]
        ret 
        UNREACHABLE_TRAP(0x6d84200)
    }
}
