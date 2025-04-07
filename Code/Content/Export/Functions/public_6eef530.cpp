#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eef530);
CLANG_FORWARD_PROC_SYMBOL(public_6eef550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eef548 _public_6eef548

PROC_DECLARE(0x6eef530, internal_6eef530, public_6eef530);
extern "C" NAKED register_t __cdecl internal_6eef530()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eef550
        test byte ptr ss : [esp+8], 1
        je public_6eef548
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eef548 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eef530)
    }
}

#undef public_6eef548
