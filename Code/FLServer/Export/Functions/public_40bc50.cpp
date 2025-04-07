#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40bc70);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40bc68 _public_40bc68

PROC_DECLARE(0x40bc50, internal_40bc50, public_40bc50);
extern "C" NAKED register_t __cdecl internal_40bc50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40bc70
        test byte ptr ss : [esp+8], 1
        je public_40bc68
        push esi
        call public_418978
        add esp, 4
        public_40bc68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40bc50)
    }
}

#undef public_40bc68
