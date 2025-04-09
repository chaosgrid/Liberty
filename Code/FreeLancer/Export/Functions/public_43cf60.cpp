#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43cf60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cf79 _public_43cf79

PROC_DECLARE(0x43cf60, internal_43cf60, public_43cf60);
extern "C" NAKED register_t __cdecl internal_43cf60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c6124]
        test byte ptr ss : [esp+8], 1
        je public_43cf79
        push esi
        call public_5b7e1d
        add esp, 4
        public_43cf79 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43cf60)
    }
}

#undef public_43cf79
