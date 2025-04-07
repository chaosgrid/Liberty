#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a5d70);
CLANG_FORWARD_PROC_SYMBOL(public_62a6c60);
CLANG_FORWARD_PROC_SYMBOL(public_62a72a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a6c84 _public_62a6c84
#define public_62a6ca2 _public_62a6ca2
#define public_62a6cad _public_62a6cad
#define public_62a6cb6 _public_62a6cb6
#define public_62a6cc1 _public_62a6cc1
#define public_62a6cdd _public_62a6cdd
#define public_62a6cf4 _public_62a6cf4
#define public_62a6d01 _public_62a6d01
#define public_62a6d0c _public_62a6d0c
#define public_62a6d0f _public_62a6d0f
#define public_62a6d27 _public_62a6d27
#define public_62a6d32 _public_62a6d32
#define public_62a6d35 _public_62a6d35
#define public_62a6d4a _public_62a6d4a
#define public_62a6d55 _public_62a6d55
#define public_62a6d60 _public_62a6d60
#define public_62a6d63 _public_62a6d63
#define public_62a6d77 _public_62a6d77
#define public_62a6d83 _public_62a6d83
#define public_62a6d8f _public_62a6d8f
#define public_62a6d92 _public_62a6d92
#define public_62a6db0 _public_62a6db0
#define public_62a6def _public_62a6def
#define public_62a6e02 _public_62a6e02
#define public_62a6e0d _public_62a6e0d
#define public_62a6e10 _public_62a6e10
#define public_62a6e1b _public_62a6e1b
#define public_62a6e2e _public_62a6e2e
#define public_62a6e55 _public_62a6e55
#define public_62a6e6f _public_62a6e6f
#define public_62a6e95 _public_62a6e95
#define public_62a6ea8 _public_62a6ea8
#define public_62a6eb5 _public_62a6eb5
#define public_62a6eb7 _public_62a6eb7
#define public_62a6ec2 _public_62a6ec2
#define public_62a6ed9 _public_62a6ed9
#define public_62a6ef1 _public_62a6ef1
#define public_62a6efe _public_62a6efe
#define public_62a6f00 _public_62a6f00
#define public_62a6f0c _public_62a6f0c
#define public_62a6f36 _public_62a6f36
#define public_62a6f4e _public_62a6f4e
#define public_62a6f5e _public_62a6f5e
#define public_62a6f68 _public_62a6f68
#define public_62a6f8b _public_62a6f8b
#define public_62a6f9e _public_62a6f9e
#define public_62a6fa9 _public_62a6fa9
#define public_62a6fac _public_62a6fac
#define public_62a6fb6 _public_62a6fb6
#define public_62a6fdf _public_62a6fdf
#define public_62a6ff2 _public_62a6ff2
#define public_62a6fff _public_62a6fff
#define public_62a7001 _public_62a7001
#define public_62a7004 _public_62a7004
#define public_62a7007 _public_62a7007
#define public_62a700e _public_62a700e

PROC_DECLARE(0x62a6c60, internal_62a6c60, public_62a6c60);
extern "C" NAKED register_t __cdecl internal_62a6c60()
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
        call public_62a72a0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62a6ca2
        mov eax, dword ptr ds : [esi+8]
        public_62a6c84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62a6d27
        mov dword ptr ds : [ecx+4], eax
        jmp public_62a6d35
        public_62a6ca2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62a6cad
        mov eax, edx
        jmp public_62a6c84
        public_62a6cad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        jne public_62a6cc1
        public_62a6cb6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        je public_62a6cb6
        public_62a6cc1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a6c84
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a6cdd
        mov dword ptr ds : [eax+4], ecx
        jmp public_62a6cf4
        public_62a6cdd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62a6cf4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62a6d01
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a6d0f
        public_62a6d01 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62a6d0c
        mov dword ptr ds : [edx], ecx
        jmp public_62a6d0f
        public_62a6d0c : nop
        mov dword ptr ds : [edx+8], ecx
        public_62a6d0f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x68]
        mov dl, byte ptr ds : [ecx+0x68]
        mov byte ptr ds : [ecx+0x68], bl
        mov byte ptr ds : [esi+0x68], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62a6d92
        public_62a6d27 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62a6d32
        mov dword ptr ds : [ecx], eax
        jmp public_62a6d35
        public_62a6d32 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62a6d35 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62a6d63
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62a6d4a
        mov edx, dword ptr ds : [esi+4]
        jmp public_62a6d60
        public_62a6d4a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        mov edx, eax
        jne public_62a6d60
        public_62a6d55 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        je public_62a6d55
        public_62a6d60 : nop
        mov dword ptr ss : [ebp], edx
        public_62a6d63 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62a6d92
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62a6d77
        mov edx, dword ptr ds : [esi+4]
        jmp public_62a6d8f
        public_62a6d77 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        mov edx, eax
        jne public_62a6d8f
        public_62a6d83 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x69]
        test bl, bl
        je public_62a6d83
        public_62a6d8f : nop
        mov dword ptr ss : [ebp+8], edx
        public_62a6d92 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x68]
        mov bl, 1
        cmp cl, bl
        jne public_62a700e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62a7007
        nop 
        public_62a6db0 : nop
        cmp byte ptr ds : [eax+0x68], bl
        jne public_62a7007
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62a6e6f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_62a6e1b
        mov byte ptr ds : [ecx+0x68], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x68], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a6def
        mov dword ptr ds : [esi+4], ecx
        public_62a6def : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a6e02
        mov dword ptr ds : [esi+4], edx
        jmp public_62a6e10
        public_62a6e02 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62a6e0d
        mov dword ptr ds : [esi], edx
        jmp public_62a6e10
        public_62a6e0d : nop
        mov dword ptr ds : [esi+8], edx
        public_62a6e10 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62a6e1b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_62a6e2e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x68], bl
        je public_62a6ed9
        public_62a6e2e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_62a6f0c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x68], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x68], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a6e55
        mov dword ptr ds : [esi+4], ecx
        public_62a6e55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a6ef1
        mov dword ptr ds : [esi+4], edx
        jmp public_62a6f00
        public_62a6e6f : nop
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_62a6ec2
        mov byte ptr ds : [ecx+0x68], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a6e95
        mov dword ptr ds : [esi+4], ecx
        public_62a6e95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a6ea8
        mov dword ptr ds : [esi+4], edx
        jmp public_62a6eb7
        public_62a6ea8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a6eb5
        mov dword ptr ds : [esi+8], edx
        jmp public_62a6eb7
        public_62a6eb5 : nop
        mov dword ptr ds : [esi], edx
        public_62a6eb7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62a6ec2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_62a6f68
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_62a6f68
        public_62a6ed9 : nop
        mov byte ptr ds : [ecx+0x68], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62a6db0
        jmp public_62a7007
        public_62a6ef1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a6efe
        mov dword ptr ds : [esi+8], edx
        jmp public_62a6f00
        public_62a6efe : nop
        mov dword ptr ds : [esi], edx
        public_62a6f00 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62a6f0c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x68]
        mov byte ptr ds : [ecx+0x68], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x68], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x68], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a6f36
        mov dword ptr ds : [esi+4], ecx
        public_62a6f36 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a6f4e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62a7004
        public_62a6f4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62a6f5e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62a7004
        public_62a6f5e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62a7004
        public_62a6f68 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x68], bl
        jne public_62a6fb6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x68], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x68], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a6f8b
        mov dword ptr ds : [esi+4], ecx
        public_62a6f8b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a6f9e
        mov dword ptr ds : [esi+4], edx
        jmp public_62a6fac
        public_62a6f9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62a6fa9
        mov dword ptr ds : [esi], edx
        jmp public_62a6fac
        public_62a6fa9 : nop
        mov dword ptr ds : [esi+8], edx
        public_62a6fac : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62a6fb6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x68]
        mov byte ptr ds : [ecx+0x68], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x68], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x68], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a6fdf
        mov dword ptr ds : [esi+4], ecx
        public_62a6fdf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a6ff2
        mov dword ptr ds : [esi+4], edx
        jmp public_62a7001
        public_62a6ff2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a6fff
        mov dword ptr ds : [esi+8], edx
        jmp public_62a7001
        public_62a6fff : nop
        mov dword ptr ds : [esi], edx
        public_62a7001 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62a7004 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62a7007 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x68], bl
        public_62a700e : nop
        lea ecx, ds:[esi+0xC]
        call public_62a5d70
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x62a6c60)
    }
}

#undef public_62a6c84
#undef public_62a6ca2
#undef public_62a6cad
#undef public_62a6cb6
#undef public_62a6cc1
#undef public_62a6cdd
#undef public_62a6cf4
#undef public_62a6d01
#undef public_62a6d0c
#undef public_62a6d0f
#undef public_62a6d27
#undef public_62a6d32
#undef public_62a6d35
#undef public_62a6d4a
#undef public_62a6d55
#undef public_62a6d60
#undef public_62a6d63
#undef public_62a6d77
#undef public_62a6d83
#undef public_62a6d8f
#undef public_62a6d92
#undef public_62a6db0
#undef public_62a6def
#undef public_62a6e02
#undef public_62a6e0d
#undef public_62a6e10
#undef public_62a6e1b
#undef public_62a6e2e
#undef public_62a6e55
#undef public_62a6e6f
#undef public_62a6e95
#undef public_62a6ea8
#undef public_62a6eb5
#undef public_62a6eb7
#undef public_62a6ec2
#undef public_62a6ed9
#undef public_62a6ef1
#undef public_62a6efe
#undef public_62a6f00
#undef public_62a6f0c
#undef public_62a6f36
#undef public_62a6f4e
#undef public_62a6f5e
#undef public_62a6f68
#undef public_62a6f8b
#undef public_62a6f9e
#undef public_62a6fa9
#undef public_62a6fac
#undef public_62a6fb6
#undef public_62a6fdf
#undef public_62a6ff2
#undef public_62a6fff
#undef public_62a7001
#undef public_62a7004
#undef public_62a7007
#undef public_62a700e
