#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_47fd48 _public_47fd48

PROC_DECLARE(0x47fd30, internal_47fd30, public_47fd30);
extern "C" NAKED register_t __cdecl internal_47fd30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_477da0
        test byte ptr ss : [esp+8], 1
        je public_47fd48
        push esi
        call public_5b7e1d
        add esp, 4
        public_47fd48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x47fd30)
    }
}

#undef public_47fd48
