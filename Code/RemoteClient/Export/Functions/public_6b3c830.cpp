#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c800);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3c848 _public_6b3c848

PROC_DECLARE(0x6b3c830, internal_6b3c830, public_6b3c830);
extern "C" NAKED register_t __cdecl internal_6b3c830()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b3c800
        test byte ptr ss : [esp+8], 1
        je public_6b3c848
        push esi
        call public_6b6a092
        add esp, 4
        public_6b3c848 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b3c830)
    }
}

#undef public_6b3c848
