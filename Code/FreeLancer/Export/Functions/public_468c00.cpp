#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_468c00);

#define public_468c1a _public_468c1a

PROC_DECLARE(0x468c00, internal_468c00, public_468c00);
extern "C" NAKED register_t __cdecl internal_468c00()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66da60]
        test ecx, ecx
        je public_468c1a
        push esi
        mov esi, ecx
        call public_4686e0
        mov ecx, esi
        pop esi
        jmp public_4684e0
        public_468c1a : nop
        ret 
        UNREACHABLE_TRAP(0x468c00)
    }
}

#undef public_468c1a
