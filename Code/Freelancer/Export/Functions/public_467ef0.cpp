#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_467f09 _public_467f09

PROC_DECLARE(0x467ef0, internal_467ef0, public_467ef0);
extern "C" NAKED register_t __cdecl internal_467ef0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5cfd94
        je public_467f09
        push esi
        call public_5b7e1d
        add esp, 4
        public_467f09 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x467ef0)
    }
}

#undef public_467f09
