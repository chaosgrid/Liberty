#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efebb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6efeba8 _public_6efeba8

PROC_DECLARE(0x6efeb90, internal_6efeb90, public_6efeb90);
extern "C" NAKED register_t __cdecl internal_6efeb90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6efebb0
        test byte ptr ss : [esp+8], 1
        je public_6efeba8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6efeba8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6efeb90)
    }
}

#undef public_6efeba8
