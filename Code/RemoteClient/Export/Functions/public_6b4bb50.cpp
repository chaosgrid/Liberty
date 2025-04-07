#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4bb70);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4bb68 _public_6b4bb68

PROC_DECLARE(0x6b4bb50, internal_6b4bb50, public_6b4bb50);
extern "C" NAKED register_t __cdecl internal_6b4bb50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4bb70
        test byte ptr ss : [esp+8], 1
        je public_6b4bb68
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4bb68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4bb50)
    }
}

#undef public_6b4bb68
