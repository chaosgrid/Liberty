#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79c0);
CLANG_FORWARD_PROC_SYMBOL(public_52fbe0);

#define public_52fbcd _public_52fbcd

PROC_DECLARE(0x52fbb0, internal_52fbb0, public_52fbb0);
extern "C" NAKED register_t __cdecl internal_52fbb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52fbe0
        test byte ptr ss : [esp+8], 1
        je public_52fbcd
        push 0x84
        push esi
        call public_4f79c0
        add esp, 8
        public_52fbcd : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52fbb0)
    }
}

#undef public_52fbcd
