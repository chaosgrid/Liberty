#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298f20);

#define public_6298f31 _public_6298f31
#define public_6298f33 _public_6298f33

PROC_DECLARE(0x6298f20, internal_6298f20, public_6298f20);
extern "C" NAKED register_t __cdecl internal_6298f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6298f31
        cmp dword ptr ds : [eax+0x14], 0x80
        je public_6298f33
        public_6298f31 : nop
        xor eax, eax
        public_6298f33 : nop
        ret 
        UNREACHABLE_TRAP(0x6298f20)
    }
}

#undef public_6298f31
#undef public_6298f33
