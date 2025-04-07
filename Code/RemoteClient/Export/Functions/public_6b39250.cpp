#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39270);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b39268 _public_6b39268

PROC_DECLARE(0x6b39250, internal_6b39250, public_6b39250);
extern "C" NAKED register_t __cdecl internal_6b39250()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b39270
        test byte ptr ss : [esp+8], 1
        je public_6b39268
        push esi
        call public_6b6a092
        add esp, 4
        public_6b39268 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b39250)
    }
}

#undef public_6b39268
