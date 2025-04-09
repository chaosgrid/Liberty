#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46fa50);

#define public_46fa72 _public_46fa72

PROC_DECLARE(0x46fa50, internal_46fa50, public_46fa50);
extern "C" NAKED register_t __cdecl internal_46fa50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_46fa72
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        public_46fa72 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x46fa50)
    }
}

#undef public_46fa72
