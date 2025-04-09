#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2970);
CLANG_FORWARD_PROC_SYMBOL(public_5a2df0);

PROC_DECLARE(0x5a2970, internal_5a2970, public_5a2970);
extern "C" NAKED register_t __cdecl internal_5a2970()
{
    __asm
    {
        mov ecx, offset public_67dd90
        call public_5a2df0
        mov ecx, offset public_67dd68
        call public_5a2df0
        mov byte ptr ds : [public_67dd8d], 1
        ret 
        UNREACHABLE_TRAP(0x5a2970)
    }
}
