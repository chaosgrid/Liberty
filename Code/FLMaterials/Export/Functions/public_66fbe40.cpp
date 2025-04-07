#include "FLMaterials-PCH.h"


#define public_66fbe4d _public_66fbe4d

PROC_DECLARE(0x66fbe40, internal_66fbe40, public_66fbe40);
extern "C" NAKED register_t __cdecl internal_66fbe40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_66fbe4d
        xor eax, eax
        ret 4
        public_66fbe4d : nop
        lea eax, ds:[ecx+0x68]
        ret 4
        UNREACHABLE_TRAP(0x66fbe40)
    }
}

#undef public_66fbe4d
