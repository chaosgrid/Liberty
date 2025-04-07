#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_449418 _public_449418

PROC_DECLARE(0x449400, internal_449400, public_449400);
extern "C" NAKED register_t __cdecl internal_449400()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_449420
        test byte ptr ss : [esp+8], 1
        je public_449418
        push esi
        call public_5b7e1d
        add esp, 4
        public_449418 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x449400)
    }
}

#undef public_449418
