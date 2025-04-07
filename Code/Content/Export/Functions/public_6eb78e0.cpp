#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb78f8 _public_6eb78f8

PROC_DECLARE(0x6eb78e0, internal_6eb78e0, public_6eb78e0);
extern "C" NAKED register_t __cdecl internal_6eb78e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eb7900
        test byte ptr ss : [esp+8], 1
        je public_6eb78f8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eb78f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb78e0)
    }
}

#undef public_6eb78f8
