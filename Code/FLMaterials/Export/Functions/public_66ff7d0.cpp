#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66ff7e5 _public_66ff7e5
#define public_66ff804 _public_66ff804

PROC_DECLARE(0x66ff7d0, internal_66ff7d0, public_66ff7d0);
extern "C" NAKED register_t __cdecl internal_66ff7d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x84]
        test eax, eax
        jbe public_66ff7e5
        dec eax
        mov dword ptr ds : [ecx+0x84], eax
        public_66ff7e5 : nop
        mov eax, dword ptr ds : [ecx+0x84]
        test eax, eax
        jne public_66ff804
        push ecx
        mov dword ptr ds : [ecx+0x84], 1
        call public_6700710
        add esp, 4
        xor eax, eax
        public_66ff804 : nop
        ret 4
        UNREACHABLE_TRAP(0x66ff7d0)
    }
}

#undef public_66ff7e5
#undef public_66ff804
