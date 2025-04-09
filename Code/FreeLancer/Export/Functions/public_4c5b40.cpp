#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c5fa0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c5b64 _public_4c5b64
#define public_4c5b82 _public_4c5b82
#define public_4c5b8d _public_4c5b8d
#define public_4c5b96 _public_4c5b96
#define public_4c5ba1 _public_4c5ba1
#define public_4c5bbd _public_4c5bbd
#define public_4c5bd4 _public_4c5bd4
#define public_4c5be1 _public_4c5be1
#define public_4c5bec _public_4c5bec
#define public_4c5bef _public_4c5bef
#define public_4c5c07 _public_4c5c07
#define public_4c5c12 _public_4c5c12
#define public_4c5c15 _public_4c5c15
#define public_4c5c2a _public_4c5c2a
#define public_4c5c35 _public_4c5c35
#define public_4c5c40 _public_4c5c40
#define public_4c5c43 _public_4c5c43
#define public_4c5c57 _public_4c5c57
#define public_4c5c63 _public_4c5c63
#define public_4c5c6f _public_4c5c6f
#define public_4c5c72 _public_4c5c72
#define public_4c5c90 _public_4c5c90
#define public_4c5ccf _public_4c5ccf
#define public_4c5ce2 _public_4c5ce2
#define public_4c5ced _public_4c5ced
#define public_4c5cf0 _public_4c5cf0
#define public_4c5cfb _public_4c5cfb
#define public_4c5d0e _public_4c5d0e
#define public_4c5d35 _public_4c5d35
#define public_4c5d4f _public_4c5d4f
#define public_4c5d75 _public_4c5d75
#define public_4c5d88 _public_4c5d88
#define public_4c5d95 _public_4c5d95
#define public_4c5d97 _public_4c5d97
#define public_4c5da2 _public_4c5da2
#define public_4c5db9 _public_4c5db9
#define public_4c5dd1 _public_4c5dd1
#define public_4c5dde _public_4c5dde
#define public_4c5de0 _public_4c5de0
#define public_4c5dec _public_4c5dec
#define public_4c5e16 _public_4c5e16
#define public_4c5e2e _public_4c5e2e
#define public_4c5e3e _public_4c5e3e
#define public_4c5e48 _public_4c5e48
#define public_4c5e6b _public_4c5e6b
#define public_4c5e7e _public_4c5e7e
#define public_4c5e89 _public_4c5e89
#define public_4c5e8c _public_4c5e8c
#define public_4c5e96 _public_4c5e96
#define public_4c5ebf _public_4c5ebf
#define public_4c5ed2 _public_4c5ed2
#define public_4c5edf _public_4c5edf
#define public_4c5ee1 _public_4c5ee1
#define public_4c5ee4 _public_4c5ee4
#define public_4c5ee7 _public_4c5ee7
#define public_4c5eee _public_4c5eee

PROC_DECLARE(0x4c5b40, internal_4c5b40, public_4c5b40);
extern "C" NAKED register_t __cdecl internal_4c5b40()
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
        call public_4c5fa0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_4c5b82
        mov eax, dword ptr ds : [esi+8]
        public_4c5b64 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4c5c07
        mov dword ptr ds : [ecx+4], eax
        jmp public_4c5c15
        public_4c5b82 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_4c5b8d
        mov eax, edx
        jmp public_4c5b64
        public_4c5b8d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_4c5ba1
        public_4c5b96 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_4c5b96
        public_4c5ba1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_4c5b64
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4c5bbd
        mov dword ptr ds : [eax+4], ecx
        jmp public_4c5bd4
        public_4c5bbd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_4c5bd4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4c5be1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4c5bef
        public_4c5be1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4c5bec
        mov dword ptr ds : [edx], ecx
        jmp public_4c5bef
        public_4c5bec : nop
        mov dword ptr ds : [edx+8], ecx
        public_4c5bef : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x54]
        mov dl, byte ptr ds : [ecx+0x54]
        mov byte ptr ds : [ecx+0x54], bl
        mov byte ptr ds : [esi+0x54], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_4c5c72
        public_4c5c07 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4c5c12
        mov dword ptr ds : [ecx], eax
        jmp public_4c5c15
        public_4c5c12 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4c5c15 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_4c5c43
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4c5c2a
        mov edx, dword ptr ds : [esi+4]
        jmp public_4c5c40
        public_4c5c2a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_4c5c40
        public_4c5c35 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_4c5c35
        public_4c5c40 : nop
        mov dword ptr ss : [ebp], edx
        public_4c5c43 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_4c5c72
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4c5c57
        mov edx, dword ptr ds : [esi+4]
        jmp public_4c5c6f
        public_4c5c57 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_4c5c6f
        public_4c5c63 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_4c5c63
        public_4c5c6f : nop
        mov dword ptr ss : [ebp+8], edx
        public_4c5c72 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x54]
        mov bl, 1
        cmp cl, bl
        jne public_4c5eee
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_4c5ee7
        nop 
        public_4c5c90 : nop
        cmp byte ptr ds : [eax+0x54], bl
        jne public_4c5ee7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4c5d4f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_4c5cfb
        mov byte ptr ds : [ecx+0x54], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4c5ccf
        mov dword ptr ds : [esi+4], ecx
        public_4c5ccf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4c5ce2
        mov dword ptr ds : [esi+4], edx
        jmp public_4c5cf0
        public_4c5ce2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4c5ced
        mov dword ptr ds : [esi], edx
        jmp public_4c5cf0
        public_4c5ced : nop
        mov dword ptr ds : [esi+8], edx
        public_4c5cf0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4c5cfb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_4c5d0e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        je public_4c5db9
        public_4c5d0e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_4c5dec
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4c5d35
        mov dword ptr ds : [esi+4], ecx
        public_4c5d35 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4c5dd1
        mov dword ptr ds : [esi+4], edx
        jmp public_4c5de0
        public_4c5d4f : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_4c5da2
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4c5d75
        mov dword ptr ds : [esi+4], ecx
        public_4c5d75 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4c5d88
        mov dword ptr ds : [esi+4], edx
        jmp public_4c5d97
        public_4c5d88 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4c5d95
        mov dword ptr ds : [esi+8], edx
        jmp public_4c5d97
        public_4c5d95 : nop
        mov dword ptr ds : [esi], edx
        public_4c5d97 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_4c5da2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_4c5e48
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_4c5e48
        public_4c5db9 : nop
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4c5c90
        jmp public_4c5ee7
        public_4c5dd1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4c5dde
        mov dword ptr ds : [esi+8], edx
        jmp public_4c5de0
        public_4c5dde : nop
        mov dword ptr ds : [esi], edx
        public_4c5de0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4c5dec : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4c5e16
        mov dword ptr ds : [esi+4], ecx
        public_4c5e16 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4c5e2e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4c5ee4
        public_4c5e2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4c5e3e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4c5ee4
        public_4c5e3e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4c5ee4
        public_4c5e48 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_4c5e96
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4c5e6b
        mov dword ptr ds : [esi+4], ecx
        public_4c5e6b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4c5e7e
        mov dword ptr ds : [esi+4], edx
        jmp public_4c5e8c
        public_4c5e7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4c5e89
        mov dword ptr ds : [esi], edx
        jmp public_4c5e8c
        public_4c5e89 : nop
        mov dword ptr ds : [esi+8], edx
        public_4c5e8c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_4c5e96 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4c5ebf
        mov dword ptr ds : [esi+4], ecx
        public_4c5ebf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4c5ed2
        mov dword ptr ds : [esi+4], edx
        jmp public_4c5ee1
        public_4c5ed2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4c5edf
        mov dword ptr ds : [esi+8], edx
        jmp public_4c5ee1
        public_4c5edf : nop
        mov dword ptr ds : [esi], edx
        public_4c5ee1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4c5ee4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_4c5ee7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x54], bl
        public_4c5eee : nop
        lea ecx, ds:[esi+0xC]
        call public_4c6010
        push esi
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x4c5b40)
    }
}

#undef public_4c5b64
#undef public_4c5b82
#undef public_4c5b8d
#undef public_4c5b96
#undef public_4c5ba1
#undef public_4c5bbd
#undef public_4c5bd4
#undef public_4c5be1
#undef public_4c5bec
#undef public_4c5bef
#undef public_4c5c07
#undef public_4c5c12
#undef public_4c5c15
#undef public_4c5c2a
#undef public_4c5c35
#undef public_4c5c40
#undef public_4c5c43
#undef public_4c5c57
#undef public_4c5c63
#undef public_4c5c6f
#undef public_4c5c72
#undef public_4c5c90
#undef public_4c5ccf
#undef public_4c5ce2
#undef public_4c5ced
#undef public_4c5cf0
#undef public_4c5cfb
#undef public_4c5d0e
#undef public_4c5d35
#undef public_4c5d4f
#undef public_4c5d75
#undef public_4c5d88
#undef public_4c5d95
#undef public_4c5d97
#undef public_4c5da2
#undef public_4c5db9
#undef public_4c5dd1
#undef public_4c5dde
#undef public_4c5de0
#undef public_4c5dec
#undef public_4c5e16
#undef public_4c5e2e
#undef public_4c5e3e
#undef public_4c5e48
#undef public_4c5e6b
#undef public_4c5e7e
#undef public_4c5e89
#undef public_4c5e8c
#undef public_4c5e96
#undef public_4c5ebf
#undef public_4c5ed2
#undef public_4c5edf
#undef public_4c5ee1
#undef public_4c5ee4
#undef public_4c5ee7
#undef public_4c5eee
