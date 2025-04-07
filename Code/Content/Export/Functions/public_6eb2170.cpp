#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2170);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb2188 _public_6eb2188

PROC_DECLARE(0x6eb2170, internal_6eb2170, public_6eb2170);
extern "C" NAKED register_t __cdecl internal_6eb2170()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ead0b0
        test byte ptr ss : [esp+8], 1
        je public_6eb2188
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eb2188 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb2170)
    }
}

#undef public_6eb2188
