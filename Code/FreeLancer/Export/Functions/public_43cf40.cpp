#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43cf40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cf59 _public_43cf59

PROC_DECLARE(0x43cf40, internal_43cf40, public_43cf40);
extern "C" NAKED register_t __cdecl internal_43cf40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c6118]
        test byte ptr ss : [esp+8], 1
        je public_43cf59
        push esi
        call public_5b7e1d
        add esp, 4
        public_43cf59 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43cf40)
    }
}

#undef public_43cf59
