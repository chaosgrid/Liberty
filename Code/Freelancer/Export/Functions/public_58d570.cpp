#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d570);

#define public_58d58d _public_58d58d

PROC_DECLARE(0x58d570, internal_58d570, public_58d570);
extern "C" NAKED register_t __cdecl internal_58d570()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x4FC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_58d58d
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x4FC], eax
        public_58d58d : nop
        ret 4
        UNREACHABLE_TRAP(0x58d570)
    }
}

#undef public_58d58d
