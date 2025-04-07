#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1bd0);

#define public_6ac1749 _public_6ac1749
#define public_6ac1767 _public_6ac1767

PROC_DECLARE(0x6ac1730, internal_6ac1730, public_6ac1730);
extern "C" NAKED register_t __cdecl internal_6ac1730()
{
    __asm
    {
        push 0x12C
        call dword ptr ds : [public_6ada040]
        mov eax, dword ptr ds : [public_6ae0930]
        test eax, eax
        jne public_6ac1749
        jmp public_6ac1bd0
        public_6ac1749 : nop
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac1767
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        test al, al
        jne public_6ac1767
        mov ecx, dword ptr ds : [public_6ae092c]
        mov edx, dword ptr ds : [ecx]
        jmp dword ptr ds : [edx+0x18]
        public_6ac1767 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6ac1730)
    }
}

#undef public_6ac1749
#undef public_6ac1767
