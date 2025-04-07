#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5650d0);

#define public_5650e7 _public_5650e7

PROC_DECLARE(0x5650d0, internal_5650d0, public_5650d0);
extern "C" NAKED register_t __cdecl internal_5650d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_5650e7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], 0
        public_5650e7 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5650d0)
    }
}

#undef public_5650e7
