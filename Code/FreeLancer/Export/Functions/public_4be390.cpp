#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be390);

#define public_4be3a4 _public_4be3a4

PROC_DECLARE(0x4be390, internal_4be390, public_4be390);
extern "C" NAKED register_t __cdecl internal_4be390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67244c]
        test eax, eax
        je public_4be3a4
        and byte ptr ds : [eax+0x6C], 0xFD
        mov byte ptr ds : [eax+0x159], 0
        public_4be3a4 : nop
        ret 
        UNREACHABLE_TRAP(0x4be390)
    }
}

#undef public_4be3a4
