#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4582e0);
CLANG_FORWARD_PROC_SYMBOL(public_458860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_458885 _public_458885

PROC_DECLARE(0x458860, internal_458860, public_458860);
extern "C" NAKED register_t __cdecl internal_458860()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_66d320]
        test esi, esi
        je public_458885
        mov ecx, esi
        call public_4582e0
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_66d320], 0
        public_458885 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x458860)
    }
}

#undef public_458885
