#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446ec0);

#define public_446ed4 _public_446ed4

PROC_DECLARE(0x446ec0, internal_446ec0, public_446ec0);
extern "C" NAKED register_t __cdecl internal_446ec0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_446ed4
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x88]
        public_446ed4 : nop
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x446ec0)
    }
}

#undef public_446ed4
