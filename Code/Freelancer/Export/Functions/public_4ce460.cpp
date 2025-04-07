#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ce460);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4ce47e _public_4ce47e

PROC_DECLARE(0x4ce460, internal_4ce460, public_4ce460);
extern "C" NAKED register_t __cdecl internal_4ce460()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        xor bl, bl
        call public_54baf0
        test eax, eax
        je public_4ce47e
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [esi]
        pop esi
        sete al
        pop ebx
        ret 
        public_4ce47e : nop
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4ce460)
    }
}

#undef public_4ce47e
