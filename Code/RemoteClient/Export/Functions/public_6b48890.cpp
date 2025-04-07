#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b488b0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b488a8 _public_6b488a8

PROC_DECLARE(0x6b48890, internal_6b48890, public_6b48890);
extern "C" NAKED register_t __cdecl internal_6b48890()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b488b0
        test byte ptr ss : [esp+8], 1
        je public_6b488a8
        push esi
        call public_6b6a092
        add esp, 4
        public_6b488a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48890)
    }
}

#undef public_6b488a8
