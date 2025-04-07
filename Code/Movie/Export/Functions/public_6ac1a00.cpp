#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac10b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1ce0);

#define public_6ac1a10 _public_6ac1a10
#define public_6ac1a3e _public_6ac1a3e
#define public_6ac1a48 _public_6ac1a48
#define public_6ac1a5c _public_6ac1a5c
#define public_6ac1a61 _public_6ac1a61

PROC_DECLARE(0x6ac1a00, internal_6ac1a00, public_6ac1a00);
extern "C" NAKED register_t __cdecl internal_6ac1a00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0930]
        test eax, eax
        jne public_6ac1a10
        call public_6ac1ce0
        jmp public_6ac1a48
        public_6ac1a10 : nop
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac1a48
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac1a48
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6ae092c]
        test ecx, ecx
        je public_6ac1a3e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ac1a3e : nop
        mov dword ptr ds : [public_6ae092c], 0
        public_6ac1a48 : nop
        mov eax, dword ptr ds : [public_6ae0930]
        sub eax, 0
        je public_6ac1a5c
        sub eax, 2
        jne public_6ac1a61
        jmp public_6ac10b0
        public_6ac1a5c : nop
        jmp public_6ac1ce0
        public_6ac1a61 : nop
        ret 
        UNREACHABLE_TRAP(0x6ac1a00)
    }
}

#undef public_6ac1a10
#undef public_6ac1a3e
#undef public_6ac1a48
#undef public_6ac1a5c
#undef public_6ac1a61
