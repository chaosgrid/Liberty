#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b457a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b45828 _public_6b45828

PROC_DECLARE(0x6b45810, internal_6b45810, public_6b45810);
extern "C" NAKED register_t __cdecl internal_6b45810()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b457a0
        test byte ptr ss : [esp+8], 1
        je public_6b45828
        push esi
        call public_6b6a092
        add esp, 4
        public_6b45828 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b45810)
    }
}

#undef public_6b45828
