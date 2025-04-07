#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b470);

#define public_6f4b492 _public_6f4b492

PROC_DECLARE(0x6f4b470, internal_6f4b470, public_6f4b470);
extern "C" NAKED register_t __cdecl internal_6f4b470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4b492
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        mov ecx, dword ptr ds : [edx+eax-0x10]
        test ecx, ecx
        jne public_6f4b492
        mov eax, 1
        ret 
        public_6f4b492 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4b470)
    }
}

#undef public_6f4b492
