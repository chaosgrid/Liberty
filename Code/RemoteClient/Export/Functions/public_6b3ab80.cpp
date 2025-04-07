#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ab70);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3ab98 _public_6b3ab98

PROC_DECLARE(0x6b3ab80, internal_6b3ab80, public_6b3ab80);
extern "C" NAKED register_t __cdecl internal_6b3ab80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b3ab70
        test byte ptr ss : [esp+8], 1
        je public_6b3ab98
        push esi
        call public_6b6a092
        add esp, 4
        public_6b3ab98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b3ab80)
    }
}

#undef public_6b3ab98
