#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f3b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f810);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627f419 _public_627f419
#define public_627f42d _public_627f42d
#define public_627f433 _public_627f433
#define public_627f441 _public_627f441
#define public_627f482 _public_627f482
#define public_627f49b _public_627f49b
#define public_627f4ae _public_627f4ae
#define public_627f4b9 _public_627f4b9
#define public_627f4bc _public_627f4bc
#define public_627f4c1 _public_627f4c1
#define public_627f4ea _public_627f4ea
#define public_627f503 _public_627f503
#define public_627f516 _public_627f516
#define public_627f520 _public_627f520
#define public_627f543 _public_627f543
#define public_627f55b _public_627f55b
#define public_627f56e _public_627f56e
#define public_627f57b _public_627f57b
#define public_627f57d _public_627f57d
#define public_627f583 _public_627f583
#define public_627f5ac _public_627f5ac
#define public_627f5bf _public_627f5bf
#define public_627f5ca _public_627f5ca
#define public_627f5cd _public_627f5cd
#define public_627f5cf _public_627f5cf
#define public_627f5d2 _public_627f5d2
#define public_627f5de _public_627f5de

PROC_DECLARE(0x627f3b0, internal_627f3b0, public_627f3b0);
extern "C" NAKED register_t __cdecl internal_627f3b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_627f810
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_627f419
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_627f419
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_627f419
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_627f433
        mov dword ptr ds : [eax+8], ebx
        jmp public_627f433
        public_627f419 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_627f42d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_627f433
        public_627f42d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_627f433
        mov dword ptr ds : [eax], ebx
        public_627f433 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_627f5de
        public_627f441 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_627f5de
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_627f520
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_627f482
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_627f5d2
        public_627f482 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_627f4c1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_627f49b
        mov dword ptr ds : [edx+4], eax
        public_627f49b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_627f4ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_627f4bc
        public_627f4ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_627f4b9
        mov dword ptr ds : [edx], ecx
        jmp public_627f4bc
        public_627f4b9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_627f4bc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_627f4c1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_627f4ea
        mov dword ptr ds : [edi+4], ecx
        public_627f4ea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_627f503
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_627f5cf
        public_627f503 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_627f516
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_627f5cf
        public_627f516 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_627f5cf
        public_627f520 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_627f543
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_627f5d2
        public_627f543 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_627f583
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_627f55b
        mov dword ptr ds : [edx+4], eax
        public_627f55b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_627f56e
        mov dword ptr ds : [edx+4], ecx
        jmp public_627f57d
        public_627f56e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_627f57b
        mov dword ptr ds : [edx+8], ecx
        jmp public_627f57d
        public_627f57b : nop
        mov dword ptr ds : [edx], ecx
        public_627f57d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_627f583 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_627f5ac
        mov dword ptr ds : [edi+4], ecx
        public_627f5ac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_627f5bf
        mov dword ptr ds : [edi+4], edx
        jmp public_627f5cd
        public_627f5bf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_627f5ca
        mov dword ptr ds : [edi], edx
        jmp public_627f5cd
        public_627f5ca : nop
        mov dword ptr ds : [edi+8], edx
        public_627f5cd : nop
        mov dword ptr ds : [edx], ecx
        public_627f5cf : nop
        mov dword ptr ds : [ecx+4], edx
        public_627f5d2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_627f441
        public_627f5de : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x627f3b0)
    }
}

#undef public_627f419
#undef public_627f42d
#undef public_627f433
#undef public_627f441
#undef public_627f482
#undef public_627f49b
#undef public_627f4ae
#undef public_627f4b9
#undef public_627f4bc
#undef public_627f4c1
#undef public_627f4ea
#undef public_627f503
#undef public_627f516
#undef public_627f520
#undef public_627f543
#undef public_627f55b
#undef public_627f56e
#undef public_627f57b
#undef public_627f57d
#undef public_627f583
#undef public_627f5ac
#undef public_627f5bf
#undef public_627f5ca
#undef public_627f5cd
#undef public_627f5cf
#undef public_627f5d2
#undef public_627f5de
