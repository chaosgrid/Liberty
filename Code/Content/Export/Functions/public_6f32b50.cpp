#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32b50);

#define public_6f32b6b _public_6f32b6b

PROC_DECLARE(0x6f32b50, internal_6f32b50, public_6f32b50);
extern "C" NAKED register_t __cdecl internal_6f32b50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6f32b6b
        mov eax, dword ptr ds : [ecx+0x34]
        test eax, eax
        je public_6f32b6b
        mov eax, dword ptr ds : [ecx+0x38]
        test eax, eax
        je public_6f32b6b
        mov eax, 1
        ret 
        public_6f32b6b : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f32b50)
    }
}

#undef public_6f32b6b
