#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8dd0);

#define public_4f8dc9 _public_4f8dc9

PROC_DECLARE(0x4f8db0, internal_4f8db0, public_4f8db0);
extern "C" NAKED register_t __cdecl internal_4f8db0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4f8dd0
        test byte ptr ss : [esp+8], 1
        je public_4f8dc9
        push esi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_4f8dc9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f8db0)
    }
}

#undef public_4f8dc9
