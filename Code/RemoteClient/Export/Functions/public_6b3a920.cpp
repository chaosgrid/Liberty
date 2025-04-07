#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a910);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3a938 _public_6b3a938

PROC_DECLARE(0x6b3a920, internal_6b3a920, public_6b3a920);
extern "C" NAKED register_t __cdecl internal_6b3a920()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b3a910
        test byte ptr ss : [esp+8], 1
        je public_6b3a938
        push esi
        call public_6b6a092
        add esp, 4
        public_6b3a938 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b3a920)
    }
}

#undef public_6b3a938
