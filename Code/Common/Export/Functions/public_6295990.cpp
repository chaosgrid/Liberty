#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295990);

#define public_629599f _public_629599f

PROC_DECLARE(0x6295990, internal_6295990, public_6295990);
extern "C" NAKED register_t __cdecl internal_6295990()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x4C]
        xor edx, edx
        cmp eax, edx
        je public_629599f
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [ecx+0x4C], edx
        public_629599f : nop
        ret 
        UNREACHABLE_TRAP(0x6295990)
    }
}

#undef public_629599f
