#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f7960);

#define public_66f7970 _public_66f7970
#define public_66f7977 _public_66f7977

PROC_DECLARE(0x66f7960, internal_66f7960, public_66f7960);
extern "C" NAKED register_t __cdecl internal_66f7960()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+4]
        xor eax, eax
        test cl, 0x40
        je public_66f7970
        mov eax, 4
        public_66f7970 : nop
        test cl, cl
        jns public_66f7977
        add eax, 4
        public_66f7977 : nop
        ret 
        UNREACHABLE_TRAP(0x66f7960)
    }
}

#undef public_66f7970
#undef public_66f7977
