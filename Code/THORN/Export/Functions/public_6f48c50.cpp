#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f48c68 _public_6f48c68

PROC_DECLARE(0x6f48c50, internal_6f48c50, public_6f48c50);
extern "C" NAKED register_t __cdecl internal_6f48c50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f48c70
        test byte ptr ss : [esp+8], 1
        je public_6f48c68
        push esi
        call public_6f57e26
        add esp, 4
        public_6f48c68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f48c50)
    }
}

#undef public_6f48c68
