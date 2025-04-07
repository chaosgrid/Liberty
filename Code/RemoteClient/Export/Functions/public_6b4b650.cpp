#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b670);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4b668 _public_6b4b668

PROC_DECLARE(0x6b4b650, internal_6b4b650, public_6b4b650);
extern "C" NAKED register_t __cdecl internal_6b4b650()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4b670
        test byte ptr ss : [esp+8], 1
        je public_6b4b668
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4b668 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4b650)
    }
}

#undef public_6b4b668
