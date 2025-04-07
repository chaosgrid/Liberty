#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006cb0);

#define public_10006cd8 _public_10006cd8
#define public_10006cf0 _public_10006cf0
#define public_10006d02 _public_10006d02
#define public_10006d14 _public_10006d14
#define public_10006d24 _public_10006d24
#define public_10006d2d _public_10006d2d
#define public_10006d3b _public_10006d3b
#define public_10006d42 _public_10006d42
#define public_10006d56 _public_10006d56
#define public_10006d66 _public_10006d66
#define public_10006d70 _public_10006d70
#define public_10006d82 _public_10006d82

PROC_DECLARE(0x10006cb0, internal_10006cb0, public_10006cb0);
extern "C" NAKED register_t __cdecl internal_10006cb0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        movzx edi, word ptr ds : [eax+2]
        or ebp, 0xFFFFFFFF
        xor esi, esi
        test edi, edi
        mov ebx, ecx
        mov ecx, 7
        mov edx, 4
        jne public_10006cd8
        mov ecx, 0x8A
        mov edx, 3
        public_10006cd8 : nop
        test ebx, ebx
        mov word ptr ds : [eax+ebx*4+6], 0xFFFF
        jl public_10006d82
        add eax, 6
        mov dword ptr ss : [esp+0x10], eax
        inc ebx
        nop 
        public_10006cf0 : nop
        mov eax, edi
        mov edi, dword ptr ss : [esp+0x10]
        movzx edi, word ptr ds : [edi]
        inc esi
        cmp esi, ecx
        jge public_10006d02
        cmp eax, edi
        je public_10006d70
        public_10006d02 : nop
        cmp esi, edx
        mov ecx, dword ptr ss : [esp+0x18]
        jge public_10006d14
        add word ptr ds : [ecx+eax*4+0xA74], si
        jmp public_10006d42
        public_10006d14 : nop
        test eax, eax
        je public_10006d2d
        cmp eax, ebp
        je public_10006d24
        inc word ptr ds : [ecx+eax*4+0xA74]
        public_10006d24 : nop
        inc word ptr ds : [ecx+0xAB4]
        jmp public_10006d42
        public_10006d2d : nop
        cmp esi, 0xA
        jg public_10006d3b
        inc word ptr ds : [ecx+0xAB8]
        jmp public_10006d42
        public_10006d3b : nop
        inc word ptr ds : [ecx+0xABC]
        public_10006d42 : nop
        xor esi, esi
        test edi, edi
        mov ebp, eax
        jne public_10006d56
        mov ecx, 0x8A
        mov edx, 3
        jmp public_10006d70
        public_10006d56 : nop
        cmp eax, edi
        jne public_10006d66
        mov ecx, 6
        mov edx, 3
        jmp public_10006d70
        public_10006d66 : nop
        mov ecx, 7
        mov edx, 4
        public_10006d70 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 4
        dec ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_10006cf0
        public_10006d82 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x10006cb0)
    }
}

#undef public_10006cd8
#undef public_10006cf0
#undef public_10006d02
#undef public_10006d14
#undef public_10006d24
#undef public_10006d2d
#undef public_10006d3b
#undef public_10006d42
#undef public_10006d56
#undef public_10006d66
#undef public_10006d70
#undef public_10006d82
