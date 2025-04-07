#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a02a0);

#define public_62a02aa _public_62a02aa

PROC_DECLARE(0x62a02a0, internal_62a02a0, public_62a02a0);
extern "C" NAKED register_t __cdecl internal_62a02a0()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x14], 3
        je public_62a02aa
        mov eax, dword ptr ds : [ecx+8]
        ret 
        public_62a02aa : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x62a02a0)
    }
}

#undef public_62a02aa
