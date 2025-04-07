#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4be90);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4be88 _public_6b4be88

PROC_DECLARE(0x6b4be70, internal_6b4be70, public_6b4be70);
extern "C" NAKED register_t __cdecl internal_6b4be70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4be90
        test byte ptr ss : [esp+8], 1
        je public_6b4be88
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4be88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4be70)
    }
}

#undef public_6b4be88
