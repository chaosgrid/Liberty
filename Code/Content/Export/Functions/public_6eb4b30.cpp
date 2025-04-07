#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4b50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb4b48 _public_6eb4b48

PROC_DECLARE(0x6eb4b30, internal_6eb4b30, public_6eb4b30);
extern "C" NAKED register_t __cdecl internal_6eb4b30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eb4b50
        test byte ptr ss : [esp+8], 1
        je public_6eb4b48
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eb4b48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb4b30)
    }
}

#undef public_6eb4b48
