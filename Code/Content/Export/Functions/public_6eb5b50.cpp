#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5410);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5b50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb66f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb5b74 _public_6eb5b74
#define public_6eb5b92 _public_6eb5b92
#define public_6eb5b9d _public_6eb5b9d
#define public_6eb5ba6 _public_6eb5ba6
#define public_6eb5bb1 _public_6eb5bb1
#define public_6eb5bcd _public_6eb5bcd
#define public_6eb5be4 _public_6eb5be4
#define public_6eb5bf1 _public_6eb5bf1
#define public_6eb5bfc _public_6eb5bfc
#define public_6eb5bff _public_6eb5bff
#define public_6eb5c17 _public_6eb5c17
#define public_6eb5c22 _public_6eb5c22
#define public_6eb5c25 _public_6eb5c25
#define public_6eb5c3a _public_6eb5c3a
#define public_6eb5c45 _public_6eb5c45
#define public_6eb5c50 _public_6eb5c50
#define public_6eb5c53 _public_6eb5c53
#define public_6eb5c67 _public_6eb5c67
#define public_6eb5c73 _public_6eb5c73
#define public_6eb5c7f _public_6eb5c7f
#define public_6eb5c82 _public_6eb5c82
#define public_6eb5ca0 _public_6eb5ca0
#define public_6eb5cdf _public_6eb5cdf
#define public_6eb5cf2 _public_6eb5cf2
#define public_6eb5cfd _public_6eb5cfd
#define public_6eb5d00 _public_6eb5d00
#define public_6eb5d0b _public_6eb5d0b
#define public_6eb5d1e _public_6eb5d1e
#define public_6eb5d45 _public_6eb5d45
#define public_6eb5d5f _public_6eb5d5f
#define public_6eb5d85 _public_6eb5d85
#define public_6eb5d98 _public_6eb5d98
#define public_6eb5da5 _public_6eb5da5
#define public_6eb5da7 _public_6eb5da7
#define public_6eb5db2 _public_6eb5db2
#define public_6eb5dc9 _public_6eb5dc9
#define public_6eb5de1 _public_6eb5de1
#define public_6eb5dee _public_6eb5dee
#define public_6eb5df0 _public_6eb5df0
#define public_6eb5dfc _public_6eb5dfc
#define public_6eb5e26 _public_6eb5e26
#define public_6eb5e3e _public_6eb5e3e
#define public_6eb5e4e _public_6eb5e4e
#define public_6eb5e58 _public_6eb5e58
#define public_6eb5e7b _public_6eb5e7b
#define public_6eb5e8e _public_6eb5e8e
#define public_6eb5e99 _public_6eb5e99
#define public_6eb5e9c _public_6eb5e9c
#define public_6eb5ea6 _public_6eb5ea6
#define public_6eb5ecf _public_6eb5ecf
#define public_6eb5ee2 _public_6eb5ee2
#define public_6eb5eef _public_6eb5eef
#define public_6eb5ef1 _public_6eb5ef1
#define public_6eb5ef4 _public_6eb5ef4
#define public_6eb5ef7 _public_6eb5ef7
#define public_6eb5efe _public_6eb5efe

PROC_DECLARE(0x6eb5b50, internal_6eb5b50, public_6eb5b50);
extern "C" NAKED register_t __cdecl internal_6eb5b50()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6eb66f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6eb5b92
        mov eax, dword ptr ds : [esi+8]
        public_6eb5b74 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6eb5c17
        mov dword ptr ds : [ecx+4], eax
        jmp public_6eb5c25
        public_6eb5b92 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6eb5b9d
        mov eax, edx
        jmp public_6eb5b74
        public_6eb5b9d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6eb5bb1
        public_6eb5ba6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6eb5ba6
        public_6eb5bb1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eb5b74
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb5bcd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6eb5be4
        public_6eb5bcd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6eb5be4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6eb5bf1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb5bff
        public_6eb5bf1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6eb5bfc
        mov dword ptr ds : [edx], ecx
        jmp public_6eb5bff
        public_6eb5bfc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb5bff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov byte ptr ds : [esi+0x2C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6eb5c82
        public_6eb5c17 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6eb5c22
        mov dword ptr ds : [ecx], eax
        jmp public_6eb5c25
        public_6eb5c22 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6eb5c25 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6eb5c53
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb5c3a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eb5c50
        public_6eb5c3a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6eb5c50
        public_6eb5c45 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6eb5c45
        public_6eb5c50 : nop
        mov dword ptr ss : [ebp], edx
        public_6eb5c53 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6eb5c82
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb5c67
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eb5c7f
        public_6eb5c67 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6eb5c7f
        public_6eb5c73 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6eb5c73
        public_6eb5c7f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6eb5c82 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x2C]
        mov bl, 1
        cmp cl, bl
        jne public_6eb5efe
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6eb5ef7
        nop 
        public_6eb5ca0 : nop
        cmp byte ptr ds : [eax+0x2C], bl
        jne public_6eb5ef7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eb5d5f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6eb5d0b
        mov byte ptr ds : [ecx+0x2C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb5cdf
        mov dword ptr ds : [esi+4], ecx
        public_6eb5cdf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb5cf2
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb5d00
        public_6eb5cf2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eb5cfd
        mov dword ptr ds : [esi], edx
        jmp public_6eb5d00
        public_6eb5cfd : nop
        mov dword ptr ds : [esi+8], edx
        public_6eb5d00 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eb5d0b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6eb5d1e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        je public_6eb5dc9
        public_6eb5d1e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6eb5dfc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb5d45
        mov dword ptr ds : [esi+4], ecx
        public_6eb5d45 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb5de1
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb5df0
        public_6eb5d5f : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6eb5db2
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb5d85
        mov dword ptr ds : [esi+4], ecx
        public_6eb5d85 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb5d98
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb5da7
        public_6eb5d98 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb5da5
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb5da7
        public_6eb5da5 : nop
        mov dword ptr ds : [esi], edx
        public_6eb5da7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6eb5db2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6eb5e58
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6eb5e58
        public_6eb5dc9 : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eb5ca0
        jmp public_6eb5ef7
        public_6eb5de1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb5dee
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb5df0
        public_6eb5dee : nop
        mov dword ptr ds : [esi], edx
        public_6eb5df0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eb5dfc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb5e26
        mov dword ptr ds : [esi+4], ecx
        public_6eb5e26 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb5e3e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eb5ef4
        public_6eb5e3e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eb5e4e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eb5ef4
        public_6eb5e4e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eb5ef4
        public_6eb5e58 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6eb5ea6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb5e7b
        mov dword ptr ds : [esi+4], ecx
        public_6eb5e7b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb5e8e
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb5e9c
        public_6eb5e8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eb5e99
        mov dword ptr ds : [esi], edx
        jmp public_6eb5e9c
        public_6eb5e99 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eb5e9c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6eb5ea6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb5ecf
        mov dword ptr ds : [esi+4], ecx
        public_6eb5ecf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eb5ee2
        mov dword ptr ds : [esi+4], edx
        jmp public_6eb5ef1
        public_6eb5ee2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eb5eef
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb5ef1
        public_6eb5eef : nop
        mov dword ptr ds : [esi], edx
        public_6eb5ef1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb5ef4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eb5ef7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x2C], bl
        public_6eb5efe : nop
        lea ecx, ds:[esi+0xC]
        call public_6eb5410
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eb5b50)
    }
}

#undef public_6eb5b74
#undef public_6eb5b92
#undef public_6eb5b9d
#undef public_6eb5ba6
#undef public_6eb5bb1
#undef public_6eb5bcd
#undef public_6eb5be4
#undef public_6eb5bf1
#undef public_6eb5bfc
#undef public_6eb5bff
#undef public_6eb5c17
#undef public_6eb5c22
#undef public_6eb5c25
#undef public_6eb5c3a
#undef public_6eb5c45
#undef public_6eb5c50
#undef public_6eb5c53
#undef public_6eb5c67
#undef public_6eb5c73
#undef public_6eb5c7f
#undef public_6eb5c82
#undef public_6eb5ca0
#undef public_6eb5cdf
#undef public_6eb5cf2
#undef public_6eb5cfd
#undef public_6eb5d00
#undef public_6eb5d0b
#undef public_6eb5d1e
#undef public_6eb5d45
#undef public_6eb5d5f
#undef public_6eb5d85
#undef public_6eb5d98
#undef public_6eb5da5
#undef public_6eb5da7
#undef public_6eb5db2
#undef public_6eb5dc9
#undef public_6eb5de1
#undef public_6eb5dee
#undef public_6eb5df0
#undef public_6eb5dfc
#undef public_6eb5e26
#undef public_6eb5e3e
#undef public_6eb5e4e
#undef public_6eb5e58
#undef public_6eb5e7b
#undef public_6eb5e8e
#undef public_6eb5e99
#undef public_6eb5e9c
#undef public_6eb5ea6
#undef public_6eb5ecf
#undef public_6eb5ee2
#undef public_6eb5eef
#undef public_6eb5ef1
#undef public_6eb5ef4
#undef public_6eb5ef7
#undef public_6eb5efe
