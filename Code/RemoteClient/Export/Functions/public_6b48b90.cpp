#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48ba8 _public_6b48ba8

PROC_DECLARE(0x6b48b90, internal_6b48b90, public_6b48b90);
extern "C" NAKED register_t __cdecl internal_6b48b90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48bb0
        test byte ptr ss : [esp+8], 1
        je public_6b48ba8
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48ba8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48b90)
    }
}

#undef public_6b48ba8
