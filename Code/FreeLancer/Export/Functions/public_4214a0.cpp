#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4214a0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

PROC_DECLARE(0x4214a0, internal_4214a0, public_4214a0);
extern "C" NAKED register_t __cdecl internal_4214a0()
{
    __asm
    {
        xor eax, eax
        push 0x3E
        mov dword ptr ds : [public_664990], eax
        mov dword ptr ds : [public_66498c], eax
        call public_5792b0
        add esp, 4
        neg eax
        sbb al, al
        inc al
        mov byte ptr ds : [public_610844], al
        ret 
        UNREACHABLE_TRAP(0x4214a0)
    }
}
