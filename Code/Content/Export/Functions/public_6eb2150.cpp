#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab740);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2150);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb2168 _public_6eb2168

PROC_DECLARE(0x6eb2150, internal_6eb2150, public_6eb2150);
extern "C" NAKED register_t __cdecl internal_6eb2150()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eab740
        test byte ptr ss : [esp+8], 1
        je public_6eb2168
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eb2168 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb2150)
    }
}

#undef public_6eb2168
