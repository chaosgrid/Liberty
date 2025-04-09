#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_5298c0);

#define public_5298d4 _public_5298d4

PROC_DECLARE(0x5298c0, internal_5298c0, public_5298c0);
extern "C" NAKED register_t __cdecl internal_5298c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_5298d4
        call public_4f7a90
        mov dword ptr ds : [esi], 0
        public_5298d4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5298c0)
    }
}

#undef public_5298d4
