#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63330f0);
CLANG_FORWARD_PROC_SYMBOL(public_6333110);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6333108 _public_6333108

PROC_DECLARE(0x63330f0, internal_63330f0, public_63330f0);
extern "C" NAKED register_t __cdecl internal_63330f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6333110
        test byte ptr ss : [esp+8], 1
        je public_6333108
        push esi
        call public_6391d5a
        add esp, 4
        public_6333108 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63330f0)
    }
}

#undef public_6333108
