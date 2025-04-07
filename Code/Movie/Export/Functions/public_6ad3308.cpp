#include "Movie-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6ad3320);

PROC_DECLARE(0x6ad3308, internal_6ad3308, public_6ad3308);
extern "C" NAKED register_t __cdecl internal_6ad3308()
{
    __asm
    {
        fstp st(0)
        fld tbyte ptr ds : [public_6addbe0]
        cmp byte ptr ss : [ebp-0x90], 0
        jg public_6ad3320
        jmp public_6ad3319
        UNREACHABLE_TRAP(0x6ad3308)
    }
}
