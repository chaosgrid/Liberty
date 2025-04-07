#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711180);

#define public_671119a _public_671119a

PROC_DECLARE(0x6711180, internal_6711180, public_6711180);
extern "C" NAKED register_t __cdecl internal_6711180()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67193e0]
        test ecx, ecx
        je public_671119a
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        and edx, 0xFFFF
        push edx
        call dword ptr ds : [eax+0x24]
        public_671119a : nop
        ret 
        UNREACHABLE_TRAP(0x6711180)
    }
}

#undef public_671119a
