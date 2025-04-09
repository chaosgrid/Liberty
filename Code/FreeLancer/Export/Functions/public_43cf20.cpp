#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43cf20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cf39 _public_43cf39

PROC_DECLARE(0x43cf20, internal_43cf20, public_43cf20);
extern "C" NAKED register_t __cdecl internal_43cf20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c6104]
        test byte ptr ss : [esp+8], 1
        je public_43cf39
        push esi
        call public_5b7e1d
        add esp, 4
        public_43cf39 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43cf20)
    }
}

#undef public_43cf39
