#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a27e0);

#define public_5a27f4 _public_5a27f4

PROC_DECLARE(0x5a27e0, internal_5a27e0, public_5a27e0);
extern "C" NAKED register_t __cdecl internal_5a27e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_5a27f4
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_5a27f4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5a27e0)
    }
}

#undef public_5a27f4
