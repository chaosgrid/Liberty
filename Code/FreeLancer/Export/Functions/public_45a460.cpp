#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_45cf60);

#define public_45a46f _public_45a46f

PROC_DECLARE(0x45a460, internal_45a460, public_45a460);
extern "C" NAKED register_t __cdecl internal_45a460()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        je public_45a46f
        jmp public_45cf60
        public_45a46f : nop
        ret 
        UNREACHABLE_TRAP(0x45a460)
    }
}

#undef public_45a46f
