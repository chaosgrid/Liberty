#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aad80);

#define public_5aad83 _public_5aad83
#define public_5aad8f _public_5aad8f
#define public_5aad91 _public_5aad91
#define public_5aada6 _public_5aada6

PROC_DECLARE(0x5aad80, internal_5aad80, public_5aad80);
extern "C" NAKED register_t __cdecl internal_5aad80()
{
    __asm
    {
        xor eax, eax
        push ebx
        public_5aad83 : nop
        test eax, eax
        jne public_5aad8f
        mov eax, dword ptr ds : [ecx+0x1B8]
        jmp public_5aad91
        public_5aad8f : nop
        mov eax, dword ptr ds : [eax]
        public_5aad91 : nop
        test eax, eax
        je public_5aada6
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x200]
        test bl, bl
        je public_5aad83
        mov eax, edx
        pop ebx
        ret 
        public_5aada6 : nop
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5aad80)
    }
}

#undef public_5aad83
#undef public_5aad8f
#undef public_5aad91
#undef public_5aada6
