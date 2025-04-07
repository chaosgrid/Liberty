#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420cb0);

#define public_420ccf _public_420ccf

PROC_DECLARE(0x420cb0, internal_420cb0, public_420cb0);
extern "C" NAKED register_t __cdecl internal_420cb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_420ccf
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+0x1C], 0
        public_420ccf : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x420cb0)
    }
}

#undef public_420ccf
