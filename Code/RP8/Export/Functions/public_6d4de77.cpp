#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4de77);

#define public_6d4ded0 _public_6d4ded0
#define public_6d4deec _public_6d4deec
#define public_6d4def9 _public_6d4def9
#define public_6d4defb _public_6d4defb
#define public_6d4df28 _public_6d4df28
#define public_6d4df2f _public_6d4df2f
#define public_6d4df33 _public_6d4df33
#define public_6d4df4e _public_6d4df4e
#define public_6d4df50 _public_6d4df50
#define public_6d4df7b _public_6d4df7b
#define public_6d4df84 _public_6d4df84
#define public_6d4df9d _public_6d4df9d
#define public_6d4df9f _public_6d4df9f
#define public_6d4dfbb _public_6d4dfbb
#define public_6d4dfc8 _public_6d4dfc8
#define public_6d4dfd3 _public_6d4dfd3
#define public_6d4dfe6 _public_6d4dfe6
#define public_6d4dfec _public_6d4dfec
#define public_6d4dfee _public_6d4dfee
#define public_6d4dff3 _public_6d4dff3

PROC_DECLARE(0x6d4de77, internal_6d4de77, public_6d4de77);
extern "C" NAKED register_t __cdecl internal_6d4de77()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x428
        mov edx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        lea ecx, ds:[edx+edx+0x18]
        sar ecx, 1
        mov dword ptr ss : [ebp-0x18], ecx
        lea ecx, ds:[edi+edi+0x1C]
        sar ecx, 1
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x20], ecx
        push esi
        mov esi, dword ptr ds : [eax+0x70]
        lea ecx, ds:[ebx+ebx+0x18]
        sar ecx, 1
        test esi, esi
        mov dword ptr ss : [ebp-0xC], esi
        mov dword ptr ss : [ebp-0x24], ecx
        mov dword ptr ss : [ebp-8], 0x7FFFFFFF
        jle public_6d4dfc8
        mov eax, dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0x14], eax
        public_6d4ded0 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x28]
        movzx eax, byte ptr ds : [eax+ecx]
        cmp eax, edx
        lea ecx, ds:[edx+0x18]
        jge public_6d4deec
        mov esi, eax
        sub esi, edx
        shl esi, 1
        imul esi, esi
        jmp public_6d4df2f
        public_6d4deec : nop
        cmp eax, ecx
        jle public_6d4df28
        mov esi, eax
        sub esi, ecx
        shl esi, 1
        imul esi, esi
        public_6d4def9 : nop
        sub eax, edx
        public_6d4defb : nop
        mov edx, dword ptr ss : [ebp-4]
        shl eax, 1
        mov ecx, eax
        imul ecx, eax
        mov eax, dword ptr ss : [ebp-0x10]
        movzx eax, byte ptr ds : [eax+edx]
        cmp eax, edi
        jge public_6d4df33
        mov edx, eax
        sub edx, edi
        lea edx, ds:[edx+edx*2]
        mov ebx, edx
        imul ebx, edx
        add esi, ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        lea edx, ds:[edi+0x1C]
        sub eax, edx
        jmp public_6d4df50
        public_6d4df28 : nop
        xor esi, esi
        cmp eax, dword ptr ss : [ebp-0x18]
        jg public_6d4def9
        public_6d4df2f : nop
        sub eax, ecx
        jmp public_6d4defb
        public_6d4df33 : nop
        lea edx, ds:[edi+0x1C]
        cmp eax, edx
        jle public_6d4df7b
        lea ebx, ds:[edi+0x1C]
        mov edx, eax
        sub edx, ebx
        lea edx, ds:[edx+edx*2]
        mov ebx, edx
        imul ebx, edx
        add esi, ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6d4df4e : nop
        sub eax, edi
        public_6d4df50 : nop
        lea eax, ds:[eax+eax*2]
        mov edx, eax
        imul edx, eax
        mov eax, dword ptr ss : [ebp-0x14]
        add ecx, edx
        mov edx, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ds : [eax+edx]
        cmp eax, ebx
        jge public_6d4df84
        mov edx, eax
        sub edx, ebx
        mov ebx, edx
        imul ebx, edx
        add esi, ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        lea edx, ds:[ebx+0x18]
        jmp public_6d4dff3
        public_6d4df7b : nop
        cmp eax, dword ptr ss : [ebp-0x20]
        jg public_6d4df4e
        sub eax, edx
        jmp public_6d4df50
        public_6d4df84 : nop
        lea edx, ds:[ebx+0x18]
        cmp eax, edx
        mov dword ptr ss : [ebp-0x1C], edx
        jle public_6d4dfee
        mov edx, eax
        sub edx, dword ptr ss : [ebp-0x1C]
        mov ebx, edx
        imul ebx, edx
        add esi, ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6d4df9d : nop
        sub eax, ebx
        public_6d4df9f : nop
        mov edx, eax
        imul edx, eax
        mov eax, dword ptr ss : [ebp-4]
        add ecx, edx
        cmp ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+eax*4-0x428], esi
        jge public_6d4dfbb
        mov dword ptr ss : [ebp-8], ecx
        public_6d4dfbb : nop
        inc eax
        cmp eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], eax
        jl public_6d4ded0
        public_6d4dfc8 : nop
        xor ecx, ecx
        xor eax, eax
        cmp dword ptr ss : [ebp-0xC], ecx
        pop esi
        pop ebx
        jle public_6d4dfec
        public_6d4dfd3 : nop
        mov edx, dword ptr ss : [ebp+ecx*4-0x428]
        cmp edx, dword ptr ss : [ebp-8]
        jg public_6d4dfe6
        mov edx, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [eax+edx], cl
        inc eax
        public_6d4dfe6 : nop
        inc ecx
        cmp ecx, dword ptr ss : [ebp-0xC]
        jl public_6d4dfd3
        public_6d4dfec : nop
        leave 
        ret 
        public_6d4dfee : nop
        cmp eax, dword ptr ss : [ebp-0x24]
        jg public_6d4df9d
        public_6d4dff3 : nop
        sub eax, edx
        jmp public_6d4df9f
        UNREACHABLE_TRAP(0x6d4de77)
    }
}

#undef public_6d4ded0
#undef public_6d4deec
#undef public_6d4def9
#undef public_6d4defb
#undef public_6d4df28
#undef public_6d4df2f
#undef public_6d4df33
#undef public_6d4df4e
#undef public_6d4df50
#undef public_6d4df7b
#undef public_6d4df84
#undef public_6d4df9d
#undef public_6d4df9f
#undef public_6d4dfbb
#undef public_6d4dfc8
#undef public_6d4dfd3
#undef public_6d4dfe6
#undef public_6d4dfec
#undef public_6d4dfee
#undef public_6d4dff3
