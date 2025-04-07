#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7220);

#define public_65f7230 _public_65f7230
#define public_65f7237 _public_65f7237

PROC_DECLARE(0x65f7220, internal_65f7220, public_65f7220);
extern "C" NAKED register_t __cdecl internal_65f7220()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+4]
        xor eax, eax
        test cl, 0x40
        je public_65f7230
        mov eax, 4
        public_65f7230 : nop
        test cl, cl
        jns public_65f7237
        add eax, 4
        public_65f7237 : nop
        ret 
        UNREACHABLE_TRAP(0x65f7220)
    }
}

#undef public_65f7230
#undef public_65f7237
