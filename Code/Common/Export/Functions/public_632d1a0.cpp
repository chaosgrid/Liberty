#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d1a0);
CLANG_FORWARD_PROC_SYMBOL(public_632d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632d20b _public_632d20b
#define public_632d21f _public_632d21f
#define public_632d225 _public_632d225
#define public_632d233 _public_632d233
#define public_632d274 _public_632d274
#define public_632d28d _public_632d28d
#define public_632d2a0 _public_632d2a0
#define public_632d2ab _public_632d2ab
#define public_632d2ae _public_632d2ae
#define public_632d2b3 _public_632d2b3
#define public_632d2dc _public_632d2dc
#define public_632d2f5 _public_632d2f5
#define public_632d308 _public_632d308
#define public_632d312 _public_632d312
#define public_632d335 _public_632d335
#define public_632d34d _public_632d34d
#define public_632d360 _public_632d360
#define public_632d36d _public_632d36d
#define public_632d36f _public_632d36f
#define public_632d375 _public_632d375
#define public_632d39e _public_632d39e
#define public_632d3b1 _public_632d3b1
#define public_632d3bc _public_632d3bc
#define public_632d3bf _public_632d3bf
#define public_632d3c1 _public_632d3c1
#define public_632d3c4 _public_632d3c4
#define public_632d3d0 _public_632d3d0

PROC_DECLARE(0x632d1a0, internal_632d1a0, public_632d1a0);
extern "C" NAKED register_t __cdecl internal_632d1a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_632d5e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_632d20b
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_632d20b
        mov cx, word ptr ss : [ebp]
        cmp cx, word ptr ds : [edi+0xC]
        jb public_632d20b
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_632d225
        mov dword ptr ds : [eax+8], ebx
        jmp public_632d225
        public_632d20b : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_632d21f
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_632d225
        public_632d21f : nop
        cmp edi, dword ptr ds : [eax]
        jne public_632d225
        mov dword ptr ds : [eax], ebx
        public_632d225 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_632d3d0
        public_632d233 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_632d3d0
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_632d312
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_632d274
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_632d3c4
        public_632d274 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_632d2b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_632d28d
        mov dword ptr ds : [edx+4], eax
        public_632d28d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_632d2a0
        mov dword ptr ds : [edx+4], ecx
        jmp public_632d2ae
        public_632d2a0 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_632d2ab
        mov dword ptr ds : [edx], ecx
        jmp public_632d2ae
        public_632d2ab : nop
        mov dword ptr ds : [edx+8], ecx
        public_632d2ae : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_632d2b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_632d2dc
        mov dword ptr ds : [edi+4], ecx
        public_632d2dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_632d2f5
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_632d3c1
        public_632d2f5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_632d308
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_632d3c1
        public_632d308 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_632d3c1
        public_632d312 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_632d335
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_632d3c4
        public_632d335 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_632d375
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_632d34d
        mov dword ptr ds : [edx+4], eax
        public_632d34d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_632d360
        mov dword ptr ds : [edx+4], ecx
        jmp public_632d36f
        public_632d360 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_632d36d
        mov dword ptr ds : [edx+8], ecx
        jmp public_632d36f
        public_632d36d : nop
        mov dword ptr ds : [edx], ecx
        public_632d36f : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_632d375 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_632d39e
        mov dword ptr ds : [edi+4], ecx
        public_632d39e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_632d3b1
        mov dword ptr ds : [edi+4], edx
        jmp public_632d3bf
        public_632d3b1 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_632d3bc
        mov dword ptr ds : [edi], edx
        jmp public_632d3bf
        public_632d3bc : nop
        mov dword ptr ds : [edi+8], edx
        public_632d3bf : nop
        mov dword ptr ds : [edx], ecx
        public_632d3c1 : nop
        mov dword ptr ds : [ecx+4], edx
        public_632d3c4 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_632d233
        public_632d3d0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x632d1a0)
    }
}

#undef public_632d20b
#undef public_632d21f
#undef public_632d225
#undef public_632d233
#undef public_632d274
#undef public_632d28d
#undef public_632d2a0
#undef public_632d2ab
#undef public_632d2ae
#undef public_632d2b3
#undef public_632d2dc
#undef public_632d2f5
#undef public_632d308
#undef public_632d312
#undef public_632d335
#undef public_632d34d
#undef public_632d360
#undef public_632d36d
#undef public_632d36f
#undef public_632d375
#undef public_632d39e
#undef public_632d3b1
#undef public_632d3bc
#undef public_632d3bf
#undef public_632d3c1
#undef public_632d3c4
#undef public_632d3d0
