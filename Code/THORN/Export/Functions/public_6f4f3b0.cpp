#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f3b0);

#define public_6f4f3c2 _public_6f4f3c2
#define public_6f4f3d6 _public_6f4f3d6
#define public_6f4f3f6 _public_6f4f3f6
#define public_6f4f3fd _public_6f4f3fd

PROC_DECLARE(0x6f4f3b0, internal_6f4f3b0, public_6f4f3b0);
extern "C" NAKED register_t __cdecl internal_6f4f3b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        push esi
        xor eax, eax
        push edi
        mov dword ptr ds : [ecx+0x58], eax
        mov edi, 0x174
        public_6f4f3c2 : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [edx+0x60]
        mov ecx, dword ptr ds : [edx+edi]
        add edx, edi
        xor esi, esi
        test ecx, ecx
        jle public_6f4f3fd
        public_6f4f3d6 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_6f4f3f6
        cmp ecx, offset public_6f608b0
        je public_6f4f3f6
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+esi*4], offset public_6f608b0
        public_6f4f3f6 : nop
        mov ecx, dword ptr ds : [edx]
        inc esi
        cmp esi, ecx
        jl public_6f4f3d6
        public_6f4f3fd : nop
        add edi, 0xC
        cmp edi, 0x2E8
        jl public_6f4f3c2
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f3b0)
    }
}

#undef public_6f4f3c2
#undef public_6f4f3d6
#undef public_6f4f3f6
#undef public_6f4f3fd
