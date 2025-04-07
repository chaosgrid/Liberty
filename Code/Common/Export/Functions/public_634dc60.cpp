#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634dc79 _public_634dc79

PROC_DECLARE(0x634dc60, internal_634dc60, public_634dc60);
extern "C" NAKED register_t __cdecl internal_634dc60()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a55cc
        je public_634dc79
        push esi
        call public_6391d5a
        add esp, 4
        public_634dc79 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634dc60)
    }
}

#undef public_634dc79
