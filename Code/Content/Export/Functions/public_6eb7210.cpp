#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb7228 _public_6eb7228

PROC_DECLARE(0x6eb7210, internal_6eb7210, public_6eb7210);
extern "C" NAKED register_t __cdecl internal_6eb7210()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eb7230
        test byte ptr ss : [esp+8], 1
        je public_6eb7228
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eb7228 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb7210)
    }
}

#undef public_6eb7228
