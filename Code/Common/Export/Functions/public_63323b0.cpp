#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63323b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63323d0 _public_63323d0
#define public_63323e0 _public_63323e0

PROC_DECLARE(0x63323b0, internal_63323b0, public_63323b0);
extern "C" NAKED register_t __cdecl internal_63323b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_63323d0
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        public_63323d0 : nop
        test byte ptr ss : [esp+8], 1
        je public_63323e0
        push esi
        call public_6391d5a
        add esp, 4
        public_63323e0 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63323b0)
    }
}

#undef public_63323d0
#undef public_63323e0
