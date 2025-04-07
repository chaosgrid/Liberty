#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);

#define public_6ac8aaa _public_6ac8aaa
#define public_6ac8ab7 _public_6ac8ab7
#define public_6ac8ac3 _public_6ac8ac3
#define public_6ac8ad2 _public_6ac8ad2
#define public_6ac8ade _public_6ac8ade
#define public_6ac8ae8 _public_6ac8ae8
#define public_6ac8af4 _public_6ac8af4
#define public_6ac8b05 _public_6ac8b05
#define public_6ac8b0e _public_6ac8b0e

PROC_DECLARE(0x6ac8a90, internal_6ac8a90, public_6ac8a90);
extern "C" NAKED register_t __cdecl internal_6ac8a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        cmp eax, ecx
        push edi
        mov esi, ecx
        jbe public_6ac8ab7
        lea edx, ds:[ebx+eax*4-4]
        public_6ac8aaa : nop
        cmp dword ptr ds : [edx], 0
        jne public_6ac8ad2
        dec eax
        sub edx, 4
        cmp eax, ecx
        ja public_6ac8aaa
        public_6ac8ab7 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        jbe public_6ac8ae8
        lea ecx, ds:[edi+ecx*4-4]
        public_6ac8ac3 : nop
        cmp dword ptr ds : [ecx], 0
        jne public_6ac8ade
        dec esi
        sub ecx, 4
        cmp esi, eax
        ja public_6ac8ac3
        jmp public_6ac8ae8
        public_6ac8ad2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0x10
        public_6ac8ade : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_6ac8ae8 : nop
        test eax, eax
        je public_6ac8b05
        mov edx, ebx
        lea ecx, ds:[edi+eax*4-4]
        sub edx, edi
        public_6ac8af4 : nop
        mov esi, dword ptr ds : [edx+ecx]
        mov ebp, dword ptr ds : [ecx]
        cmp esi, ebp
        jne public_6ac8b0e
        dec eax
        sub ecx, 4
        test eax, eax
        jne public_6ac8af4
        public_6ac8b05 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_6ac8b0e : nop
        mov ecx, dword ptr ds : [ebx+eax*4-4]
        mov esi, dword ptr ds : [edi+eax*4-4]
        cmp esi, ecx
        pop edi
        sbb eax, eax
        pop esi
        and eax, 2
        pop ebp
        dec eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac8a90)
    }
}

#undef public_6ac8aaa
#undef public_6ac8ab7
#undef public_6ac8ac3
#undef public_6ac8ad2
#undef public_6ac8ade
#undef public_6ac8ae8
#undef public_6ac8af4
#undef public_6ac8b05
#undef public_6ac8b0e
