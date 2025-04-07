#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637a130);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_637a128 _public_637a128

PROC_DECLARE(0x637a110, internal_637a110, public_637a110);
extern "C" NAKED register_t __cdecl internal_637a110()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_637a130
        test byte ptr ss : [esp+8], 1
        je public_637a128
        push esi
        call public_6391d5a
        add esp, 4
        public_637a128 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x637a110)
    }
}

#undef public_637a128
