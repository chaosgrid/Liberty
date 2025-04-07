#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f6a858 _public_6f6a858

PROC_DECLARE(0x6f6a840, internal_6f6a840, public_6f6a840);
extern "C" NAKED register_t __cdecl internal_6f6a840()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f15350
        test byte ptr ss : [esp+8], 1
        je public_6f6a858
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f6a858 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f6a840)
    }
}

#undef public_6f6a858
