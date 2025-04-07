#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef87a8 _public_6ef87a8

PROC_DECLARE(0x6ef8790, internal_6ef8790, public_6ef8790);
extern "C" NAKED register_t __cdecl internal_6ef8790()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ef4bb0
        test byte ptr ss : [esp+8], 1
        je public_6ef87a8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ef87a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef8790)
    }
}

#undef public_6ef87a8
