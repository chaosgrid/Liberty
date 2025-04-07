#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_556a79 _public_556a79

PROC_DECLARE(0x556a60, internal_556a60, public_556a60);
extern "C" NAKED register_t __cdecl internal_556a60()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5e1354
        je public_556a79
        push esi
        call public_5b7e1d
        add esp, 4
        public_556a79 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x556a60)
    }
}

#undef public_556a79
