#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4da630);
CLANG_FORWARD_PROC_SYMBOL(public_4e6140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e6158 _public_4e6158

PROC_DECLARE(0x4e6140, internal_4e6140, public_4e6140);
extern "C" NAKED register_t __cdecl internal_4e6140()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4da630
        test byte ptr ss : [esp+8], 1
        je public_4e6158
        push esi
        call public_5b7e1d
        add esp, 4
        public_4e6158 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4e6140)
    }
}

#undef public_4e6158
