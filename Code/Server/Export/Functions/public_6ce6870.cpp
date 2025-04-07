#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);

#define public_6ce6888 _public_6ce6888
#define public_6ce688a _public_6ce688a

PROC_DECLARE(0x6ce6870, internal_6ce6870, public_6ce6870);
extern "C" NAKED register_t __cdecl internal_6ce6870()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ce6888
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce688a
        public_6ce6888 : nop
        xor eax, eax
        public_6ce688a : nop
        ret 
        UNREACHABLE_TRAP(0x6ce6870)
    }
}

#undef public_6ce6888
#undef public_6ce688a
