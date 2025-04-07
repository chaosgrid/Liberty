#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56ae90);
CLANG_FORWARD_PROC_SYMBOL(public_56aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_56aea8 _public_56aea8

PROC_DECLARE(0x56ae90, internal_56ae90, public_56ae90);
extern "C" NAKED register_t __cdecl internal_56ae90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_56aeb0
        test byte ptr ss : [esp+8], 1
        je public_56aea8
        push esi
        call public_5b7e1d
        add esp, 4
        public_56aea8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x56ae90)
    }
}

#undef public_56aea8
