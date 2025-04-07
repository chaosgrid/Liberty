#include "FLMaterials-PCH.h"


#define public_66f2cde _public_66f2cde

PROC_DECLARE(0x66f2cd0, internal_66f2cd0, public_66f2cd0);
extern "C" NAKED register_t __cdecl internal_66f2cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_66f2cde
        mov dword ptr ds : [eax], 0
        public_66f2cde : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x66f2cd0)
    }
}

#undef public_66f2cde
