#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4b088 _public_6b4b088

PROC_DECLARE(0x6b4b070, internal_6b4b070, public_6b4b070);
extern "C" NAKED register_t __cdecl internal_6b4b070()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4b090
        test byte ptr ss : [esp+8], 1
        je public_6b4b088
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4b088 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4b070)
    }
}

#undef public_6b4b088
