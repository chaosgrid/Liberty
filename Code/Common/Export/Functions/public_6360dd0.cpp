#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6360de9 _public_6360de9

PROC_DECLARE(0x6360dd0, internal_6360dd0, public_6360dd0);
extern "C" NAKED register_t __cdecl internal_6360dd0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a5750
        je public_6360de9
        push esi
        call public_6391d5a
        add esp, 4
        public_6360de9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6360dd0)
    }
}

#undef public_6360de9
