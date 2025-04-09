#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x5b3870, internal_5b3870, public_5b3870);
extern "C" NAKED register_t __cdecl internal_5b3870()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5ca230]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov dword ptr ds : [public_615c6c], eax
        ret 
        UNREACHABLE_TRAP(0x5b3870)
    }
}
