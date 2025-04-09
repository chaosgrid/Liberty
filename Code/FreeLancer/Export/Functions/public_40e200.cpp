#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_40e200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_40e218 _public_40e218

PROC_DECLARE(0x40e200, internal_40e200, public_40e200);
extern "C" NAKED register_t __cdecl internal_40e200()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_407000
        test byte ptr ss : [esp+8], 1
        je public_40e218
        push esi
        call public_5b7e1d
        add esp, 4
        public_40e218 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40e200)
    }
}

#undef public_40e218
