#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f94b18 _public_6f94b18

PROC_DECLARE(0x6f94b00, internal_6f94b00, public_6f94b00);
extern "C" NAKED register_t __cdecl internal_6f94b00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ec7820
        test byte ptr ss : [esp+8], 1
        je public_6f94b18
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f94b18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f94b00)
    }
}

#undef public_6f94b18
