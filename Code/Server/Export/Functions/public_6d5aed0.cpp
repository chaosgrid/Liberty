#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5aed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d5aee8 _public_6d5aee8

PROC_DECLARE(0x6d5aed0, internal_6d5aed0, public_6d5aed0);
extern "C" NAKED register_t __cdecl internal_6d5aed0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d572e0
        test byte ptr ss : [esp+8], 1
        je public_6d5aee8
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d5aee8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d5aed0)
    }
}

#undef public_6d5aee8
