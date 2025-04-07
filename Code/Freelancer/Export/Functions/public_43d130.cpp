#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a480);

#define public_43d149 _public_43d149

PROC_DECLARE(0x43d130, internal_43d130, public_43d130);
extern "C" NAKED register_t __cdecl internal_43d130()
{
    __asm
    {
        call public_46a480
        test al, al
        jne public_43d149
        push esi
        mov esi, dword ptr ds : [public_5c7280]
        push 0x10
        call esi
        push 0x11
        call esi
        pop esi
        public_43d149 : nop
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x43d130)
    }
}

#undef public_43d149
