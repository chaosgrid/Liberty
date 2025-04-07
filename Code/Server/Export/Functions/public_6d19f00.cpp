#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19f00);

#define public_6d19f15 _public_6d19f15

PROC_DECLARE(0x6d19f00, internal_6d19f00, public_6d19f00);
extern "C" NAKED register_t __cdecl internal_6d19f00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6d19f15
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_6d19f15 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d19f00)
    }
}

#undef public_6d19f15
