#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629cb50);

#define public_629cb61 _public_629cb61
#define public_629cb63 _public_629cb63

PROC_DECLARE(0x629cb50, internal_629cb50, public_629cb50);
extern "C" NAKED register_t __cdecl internal_629cb50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629cb61
        cmp dword ptr ds : [eax+0x14], 0x100
        je public_629cb63
        public_629cb61 : nop
        xor eax, eax
        public_629cb63 : nop
        ret 
        UNREACHABLE_TRAP(0x629cb50)
    }
}

#undef public_629cb61
#undef public_629cb63
