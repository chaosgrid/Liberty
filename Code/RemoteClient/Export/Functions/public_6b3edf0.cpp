#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3ee08 _public_6b3ee08

PROC_DECLARE(0x6b3edf0, internal_6b3edf0, public_6b3edf0);
extern "C" NAKED register_t __cdecl internal_6b3edf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b3ed00
        test byte ptr ss : [esp+8], 1
        je public_6b3ee08
        push esi
        call public_6b6a092
        add esp, 4
        public_6b3ee08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b3edf0)
    }
}

#undef public_6b3ee08
