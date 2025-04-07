#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48cc8 _public_6b48cc8

PROC_DECLARE(0x6b48cb0, internal_6b48cb0, public_6b48cb0);
extern "C" NAKED register_t __cdecl internal_6b48cb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48cd0
        test byte ptr ss : [esp+8], 1
        je public_6b48cc8
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48cc8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48cb0)
    }
}

#undef public_6b48cc8
