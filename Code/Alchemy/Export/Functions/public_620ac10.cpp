#include "Alchemy-PCH.h"


#define public_620ac1f _public_620ac1f
#define public_620ac36 _public_620ac36

PROC_DECLARE(0x620ac10, internal_620ac10, public_620ac10);
extern "C" NAKED register_t __cdecl internal_620ac10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jbe public_620ac1f
        dec eax
        mov dword ptr ds : [ecx+0xC], eax
        public_620ac1f : nop
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_620ac36
        mov dword ptr ds : [ecx+0xC], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x48]
        xor eax, eax
        public_620ac36 : nop
        ret 4
        UNREACHABLE_TRAP(0x620ac10)
    }
}

#undef public_620ac1f
#undef public_620ac36
