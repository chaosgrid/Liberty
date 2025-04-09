#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_42e160);

#define public_40e99f _public_40e99f
#define public_40e9ab _public_40e9ab

PROC_DECLARE(0x40e990, internal_40e990, public_40e990);
extern "C" NAKED register_t __cdecl internal_40e990()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_40e99f
        call public_42e160
        public_40e99f : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_40e9ab
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_40e9ab : nop
        mov eax, dword ptr ds : [esi+0x54]
        dec eax
        mov dword ptr ds : [esi+0x54], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40e990)
    }
}

#undef public_40e99f
#undef public_40e9ab
