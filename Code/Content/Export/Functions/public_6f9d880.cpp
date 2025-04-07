#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9d970);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9d898 _public_6f9d898

PROC_DECLARE(0x6f9d880, internal_6f9d880, public_6f9d880);
extern "C" NAKED register_t __cdecl internal_6f9d880()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f9d970
        test byte ptr ss : [esp+8], 1
        je public_6f9d898
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f9d898 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f9d880)
    }
}

#undef public_6f9d898
