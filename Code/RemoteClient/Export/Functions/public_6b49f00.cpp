#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b5b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b49f18 _public_6b49f18

PROC_DECLARE(0x6b49f00, internal_6b49f00, public_6b49f00);
extern "C" NAKED register_t __cdecl internal_6b49f00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b5b7d0
        test byte ptr ss : [esp+8], 1
        je public_6b49f18
        push esi
        call public_6b6a092
        add esp, 4
        public_6b49f18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b49f00)
    }
}

#undef public_6b49f18
