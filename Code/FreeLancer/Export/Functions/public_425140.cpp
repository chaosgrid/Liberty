#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4214a0);
CLANG_FORWARD_PROC_SYMBOL(public_425140);

PROC_DECLARE(0x425140, internal_425140, public_425140);
extern "C" NAKED register_t __cdecl internal_425140()
{
    __asm
    {
        call public_4214a0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ds : [public_610864], al
        ret 
        UNREACHABLE_TRAP(0x425140)
    }
}
