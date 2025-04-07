#include "Common-PCH.h"


#define public_6332f9a _public_6332f9a

PROC_DECLARE(0x6332f80, internal_6332f80, public_6332f80);
extern "C" NAKED register_t __cdecl internal_6332f80()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a4980
        je public_6332f9a
        push esi
        call dword ptr ds : [public_639932c]
        add esp, 4
        public_6332f9a : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6332f80)
    }
}

#undef public_6332f9a
