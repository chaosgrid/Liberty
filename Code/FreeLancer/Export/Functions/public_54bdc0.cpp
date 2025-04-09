#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_54bdc0);

#define public_54bddd _public_54bddd

PROC_DECLARE(0x54bdc0, internal_54bdc0, public_54bdc0);
extern "C" NAKED register_t __cdecl internal_54bdc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_54bddd
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi]
        call public_4f7a90
        mov dword ptr ds : [esi], 0
        public_54bddd : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x54bdc0)
    }
}

#undef public_54bddd
