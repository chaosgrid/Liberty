#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5980);

#define public_6eb5990 _public_6eb5990
#define public_6eb5997 _public_6eb5997

PROC_DECLARE(0x6eb5980, internal_6eb5980, public_6eb5980);
extern "C" NAKED register_t __cdecl internal_6eb5980()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+4]
        xor eax, eax
        test cl, 0x40
        je public_6eb5990
        mov eax, 4
        public_6eb5990 : nop
        test cl, cl
        jns public_6eb5997
        add eax, 4
        public_6eb5997 : nop
        ret 
        UNREACHABLE_TRAP(0x6eb5980)
    }
}

#undef public_6eb5990
#undef public_6eb5997
