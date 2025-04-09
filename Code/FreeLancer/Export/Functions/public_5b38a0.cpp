#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b38a0);

#define public_5b38bf _public_5b38bf

PROC_DECLARE(0x5b38a0, internal_5b38a0, public_5b38a0);
extern "C" NAKED register_t __cdecl internal_5b38a0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov byte ptr ds : [public_67ed3c], 1
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_5b38bf
        mov byte ptr ds : [public_67ed3c], 0
        public_5b38bf : nop
        ret 
        UNREACHABLE_TRAP(0x5b38a0)
    }
}

#undef public_5b38bf
