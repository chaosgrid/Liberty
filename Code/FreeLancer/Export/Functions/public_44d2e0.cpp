#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44d2f9 _public_44d2f9

PROC_DECLARE(0x44d2e0, internal_44d2e0, public_44d2e0);
extern "C" NAKED register_t __cdecl internal_44d2e0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5cc084
        je public_44d2f9
        push esi
        call public_5b7e1d
        add esp, 4
        public_44d2f9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44d2e0)
    }
}

#undef public_44d2f9
