#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4e298 _public_6b4e298

PROC_DECLARE(0x6b4e280, internal_6b4e280, public_6b4e280);
extern "C" NAKED register_t __cdecl internal_6b4e280()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4e2a0
        test byte ptr ss : [esp+8], 1
        je public_6b4e298
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4e298 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4e280)
    }
}

#undef public_6b4e298
