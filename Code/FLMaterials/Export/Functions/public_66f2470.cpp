#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f2470);

#define public_66f247f _public_66f247f
#define public_66f248a _public_66f248a

PROC_DECLARE(0x66f2470, internal_66f2470, public_66f2470);
extern "C" NAKED register_t __cdecl internal_66f2470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        je public_66f248a
        dec eax
        je public_66f247f
        xor eax, eax
        ret 
        public_66f247f : nop
        mov eax, dword ptr ss : [esp+4]
        shr eax, 2
        and eax, 3
        ret 
        public_66f248a : nop
        mov eax, dword ptr ss : [esp+4]
        and eax, 3
        ret 
        UNREACHABLE_TRAP(0x66f2470)
    }
}

#undef public_66f247f
#undef public_66f248a
