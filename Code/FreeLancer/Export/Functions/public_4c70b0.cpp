#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c70b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4c70ed _public_4c70ed

PROC_DECLARE(0x4c70b0, internal_4c70b0, public_4c70b0);
extern "C" NAKED register_t __cdecl internal_4c70b0()
{
    __asm
    {
        call public_54baf0
        test eax, eax
        je public_4c70ed
        add eax, 0xC
        test eax, eax
        je public_4c70ed
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4c70ed
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4c70ed
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_4c70ed
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c6464]
        public_4c70ed : nop
        ret 
        UNREACHABLE_TRAP(0x4c70b0)
    }
}

#undef public_4c70ed
