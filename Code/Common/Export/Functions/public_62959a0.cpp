#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62959a0);

#define public_62959b1 _public_62959b1
#define public_62959b3 _public_62959b3

PROC_DECLARE(0x62959a0, internal_62959a0, public_62959a0);
extern "C" NAKED register_t __cdecl internal_62959a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62959b1
        cmp dword ptr ds : [eax+0x14], 0x800
        je public_62959b3
        public_62959b1 : nop
        xor eax, eax
        public_62959b3 : nop
        ret 
        UNREACHABLE_TRAP(0x62959a0)
    }
}

#undef public_62959b1
#undef public_62959b3
