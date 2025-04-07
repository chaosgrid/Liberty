#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f33e98 _public_6f33e98

PROC_DECLARE(0x6f33e80, internal_6f33e80, public_6f33e80);
extern "C" NAKED register_t __cdecl internal_6f33e80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f33fe0
        test byte ptr ss : [esp+8], 1
        je public_6f33e98
        push esi
        call public_6f57e26
        add esp, 4
        public_6f33e98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f33e80)
    }
}

#undef public_6f33e98
