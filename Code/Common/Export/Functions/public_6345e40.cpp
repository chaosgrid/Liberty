#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345e40);

#define public_6345e4e _public_6345e4e

PROC_DECLARE(0x6345e40, internal_6345e40, public_6345e40);
extern "C" NAKED register_t __cdecl internal_6345e40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x90]
        test eax, eax
        jne public_6345e4e
        or eax, 0xFFFFFFFF
        ret 
        public_6345e4e : nop
        xor ecx, ecx
        mov cx, word ptr ds : [eax+0x2A]
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6345e40)
    }
}

#undef public_6345e4e
