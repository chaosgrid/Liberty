#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d880);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f840);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3d8f0 _public_6f3d8f0
#define public_6f3d904 _public_6f3d904
#define public_6f3d90a _public_6f3d90a
#define public_6f3d918 _public_6f3d918
#define public_6f3d959 _public_6f3d959
#define public_6f3d972 _public_6f3d972
#define public_6f3d985 _public_6f3d985
#define public_6f3d990 _public_6f3d990
#define public_6f3d993 _public_6f3d993
#define public_6f3d998 _public_6f3d998
#define public_6f3d9c1 _public_6f3d9c1
#define public_6f3d9da _public_6f3d9da
#define public_6f3d9ed _public_6f3d9ed
#define public_6f3d9f7 _public_6f3d9f7
#define public_6f3da1a _public_6f3da1a
#define public_6f3da32 _public_6f3da32
#define public_6f3da45 _public_6f3da45
#define public_6f3da52 _public_6f3da52
#define public_6f3da54 _public_6f3da54
#define public_6f3da5a _public_6f3da5a
#define public_6f3da83 _public_6f3da83
#define public_6f3da96 _public_6f3da96
#define public_6f3daa1 _public_6f3daa1
#define public_6f3daa4 _public_6f3daa4
#define public_6f3daa6 _public_6f3daa6
#define public_6f3daa9 _public_6f3daa9
#define public_6f3dab5 _public_6f3dab5

PROC_DECLARE(0x6f3d880, internal_6f3d880, public_6f3d880);
extern "C" NAKED register_t __cdecl internal_6f3d880()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_6f57e9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f3f840
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f3d8f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f3d8f0
        lea ecx, ds:[edi+0xC]
        push ecx
        mov ecx, ebp
        call public_6f3fcc0
        test eax, eax
        jl public_6f3d8f0
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f3d90a
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3d90a
        public_6f3d8f0 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f3d904
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f3d90a
        public_6f3d904 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f3d90a
        mov dword ptr ds : [eax], ebx
        public_6f3d90a : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f3dab5
        public_6f3d918 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f3dab5
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f3d9f7
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6f3d959
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f3daa9
        public_6f3d959 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f3d998
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3d972
        mov dword ptr ds : [edx+4], eax
        public_6f3d972 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3d985
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3d993
        public_6f3d985 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f3d990
        mov dword ptr ds : [edx], ecx
        jmp public_6f3d993
        public_6f3d990 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3d993 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3d998 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f3d9c1
        mov dword ptr ds : [edi+4], ecx
        public_6f3d9c1 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3d9da
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3daa6
        public_6f3d9da : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3d9ed
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3daa6
        public_6f3d9ed : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3daa6
        public_6f3d9f7 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6f3da1a
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f3daa9
        public_6f3da1a : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f3da5a
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3da32
        mov dword ptr ds : [edx+4], eax
        public_6f3da32 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3da45
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3da54
        public_6f3da45 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f3da52
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3da54
        public_6f3da52 : nop
        mov dword ptr ds : [edx], ecx
        public_6f3da54 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3da5a : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f3da83
        mov dword ptr ds : [edi+4], ecx
        public_6f3da83 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3da96
        mov dword ptr ds : [edi+4], edx
        jmp public_6f3daa4
        public_6f3da96 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f3daa1
        mov dword ptr ds : [edi], edx
        jmp public_6f3daa4
        public_6f3daa1 : nop
        mov dword ptr ds : [edi+8], edx
        public_6f3daa4 : nop
        mov dword ptr ds : [edx], ecx
        public_6f3daa6 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f3daa9 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f3d918
        public_6f3dab5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f3d880)
    }
}

#undef public_6f3d8f0
#undef public_6f3d904
#undef public_6f3d90a
#undef public_6f3d918
#undef public_6f3d959
#undef public_6f3d972
#undef public_6f3d985
#undef public_6f3d990
#undef public_6f3d993
#undef public_6f3d998
#undef public_6f3d9c1
#undef public_6f3d9da
#undef public_6f3d9ed
#undef public_6f3d9f7
#undef public_6f3da1a
#undef public_6f3da32
#undef public_6f3da45
#undef public_6f3da52
#undef public_6f3da54
#undef public_6f3da5a
#undef public_6f3da83
#undef public_6f3da96
#undef public_6f3daa1
#undef public_6f3daa4
#undef public_6f3daa6
#undef public_6f3daa9
#undef public_6f3dab5
