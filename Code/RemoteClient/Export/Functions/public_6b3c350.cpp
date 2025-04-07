#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c340);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3c368 _public_6b3c368

PROC_DECLARE(0x6b3c350, internal_6b3c350, public_6b3c350);
extern "C" NAKED register_t __cdecl internal_6b3c350()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b3c340
        test byte ptr ss : [esp+8], 1
        je public_6b3c368
        push esi
        call public_6b6a092
        add esp, 4
        public_6b3c368 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b3c350)
    }
}

#undef public_6b3c368
