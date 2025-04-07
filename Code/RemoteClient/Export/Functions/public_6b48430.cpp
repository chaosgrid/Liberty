#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48448 _public_6b48448

PROC_DECLARE(0x6b48430, internal_6b48430, public_6b48430);
extern "C" NAKED register_t __cdecl internal_6b48430()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48450
        test byte ptr ss : [esp+8], 1
        je public_6b48448
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48448 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48430)
    }
}

#undef public_6b48448
