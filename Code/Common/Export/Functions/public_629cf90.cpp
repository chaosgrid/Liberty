#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629cf90);

#define public_629cfa1 _public_629cfa1
#define public_629cfa3 _public_629cfa3

PROC_DECLARE(0x629cf90, internal_629cf90, public_629cf90);
extern "C" NAKED register_t __cdecl internal_629cf90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629cfa1
        cmp dword ptr ds : [eax+0x14], 0x200
        je public_629cfa3
        public_629cfa1 : nop
        xor eax, eax
        public_629cfa3 : nop
        ret 
        UNREACHABLE_TRAP(0x629cf90)
    }
}

#undef public_629cfa1
#undef public_629cfa3
