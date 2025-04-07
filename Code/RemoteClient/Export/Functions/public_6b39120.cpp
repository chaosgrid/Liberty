#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d02);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b39138 _public_6b39138

PROC_DECLARE(0x6b39120, internal_6b39120, public_6b39120);
extern "C" NAKED register_t __cdecl internal_6b39120()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b69d02
        test byte ptr ss : [esp+8], 1
        je public_6b39138
        push esi
        call public_6b6a092
        add esp, 4
        public_6b39138 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b39120)
    }
}

#undef public_6b39138
