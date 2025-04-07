#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b0d);

#define public_6d15b1a _public_6d15b1a
#define public_6d15b23 _public_6d15b23
#define public_6d15b3d _public_6d15b3d
#define public_6d15b3f _public_6d15b3f
#define public_6d15b41 _public_6d15b41

PROC_DECLARE(0x6d15b0d, internal_6d15b0d, public_6d15b0d);
extern "C" NAKED register_t __cdecl internal_6d15b0d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], offset public_6d64040
        jmp public_6d15b23
        public_6d15b1a : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0xC
        mov dword ptr ss : [ebp-4], eax
        public_6d15b23 : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx], 0
        je public_6d15b3f
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ds : [edx]
        jne public_6d15b3d
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_6d15b41
        public_6d15b3d : nop
        jmp public_6d15b1a
        public_6d15b3f : nop
        xor eax, eax
        public_6d15b41 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d15b0d)
    }
}

#undef public_6d15b1a
#undef public_6d15b23
#undef public_6d15b3d
#undef public_6d15b3f
#undef public_6d15b41
