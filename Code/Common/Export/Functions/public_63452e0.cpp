#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345300);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63452f8 _public_63452f8

PROC_DECLARE(0x63452e0, internal_63452e0, public_63452e0);
extern "C" NAKED register_t __cdecl internal_63452e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6345300
        test byte ptr ss : [esp+8], 1
        je public_63452f8
        push esi
        call public_6391d5a
        add esp, 4
        public_63452f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63452e0)
    }
}

#undef public_63452f8
