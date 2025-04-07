#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48d30);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48d28 _public_6b48d28

PROC_DECLARE(0x6b48d10, internal_6b48d10, public_6b48d10);
extern "C" NAKED register_t __cdecl internal_6b48d10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48d30
        test byte ptr ss : [esp+8], 1
        je public_6b48d28
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48d28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48d10)
    }
}

#undef public_6b48d28
