#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6dad35e _public_6dad35e
#define public_6dad376 _public_6dad376
#define public_6dad3a0 _public_6dad3a0
#define public_6dad3ca _public_6dad3ca
#define public_6dad3f2 _public_6dad3f2
#define public_6dad424 _public_6dad424
#define public_6dad44e _public_6dad44e
#define public_6dad47c _public_6dad47c
#define public_6dad4a0 _public_6dad4a0
#define public_6dad4b3 _public_6dad4b3
#define public_6dad4dd _public_6dad4dd
#define public_6dad4ec _public_6dad4ec
#define public_6dad4fd _public_6dad4fd
#define public_6dad525 _public_6dad525
#define public_6dad54c _public_6dad54c
#define public_6dad568 _public_6dad568
#define public_6dad57d _public_6dad57d
#define public_6dad5a2 _public_6dad5a2
#define public_6dad5b9 _public_6dad5b9
#define public_6dad5eb _public_6dad5eb
#define public_6dad635 _public_6dad635
#define public_6dad63f _public_6dad63f
#define public_6dad67d _public_6dad67d
#define public_6dad689 _public_6dad689

PROC_DECLARE(0x6dad320, internal_6dad320, public_6dad320);
extern "C" NAKED register_t __cdecl internal_6dad320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        xor ebx, ebx
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6da13c0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dad35e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dad35e : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov edx, 0x17
        jbe public_6dad376
        mov dword ptr ds : [esi+0xC], edx
        public_6dad376 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x20], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad3a0
        mov dword ptr ds : [esi+0xC], edx
        public_6dad3a0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x24], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad3ca
        mov dword ptr ds : [esi+0xC], edx
        public_6dad3ca : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x28], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad3f2
        mov dword ptr ds : [esi+0xC], edx
        public_6dad3f2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        mov al, cl
        cmp al, bl
        mov byte ptr ds : [edi+0x74], cl
        je public_6dad4dd
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad424
        mov dword ptr ds : [esi+0xC], edx
        public_6dad424 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x2C], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad44e
        mov dword ptr ds : [esi+0xC], edx
        public_6dad44e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x30], ecx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad47c
        mov dword ptr ds : [esi+0xC], edx
        public_6dad47c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        xor eax, eax
        mov al, cl
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ds : [edi+0x5C], eax
        jle public_6dad4ec
        lea edx, ds:[edi+0x3C]
        public_6dad4a0 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 4
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        jbe public_6dad4b3
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dad4b3 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6dad635
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edx], ebx
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [edi+0x5C]
        inc ecx
        add edx, 4
        xor ebx, ebx
        cmp ecx, eax
        jl public_6dad4a0
        mov edx, 0x17
        jmp public_6dad4ec
        public_6dad4dd : nop
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov dword ptr ds : [edi+0x5C], ebx
        public_6dad4ec : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad4fd
        mov dword ptr ds : [esi+0xC], edx
        public_6dad4fd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x60], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6dad525
        mov dword ptr ds : [esi+0xC], edx
        public_6dad525 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [edi+0x64]
        cmp eax, ebx
        mov byte ptr ds : [edi+0x68], dl
        je public_6dad54c
        push eax
        call public_6db1dc2
        add esp, 4
        public_6dad54c : nop
        movsx eax, byte ptr ds : [edi+0x68]
        shl eax, 2
        push eax
        call public_6db1f8a
        mov dword ptr ds : [edi+0x64], eax
        mov al, byte ptr ds : [edi+0x68]
        add esp, 4
        xor ecx, ecx
        cmp al, bl
        jle public_6dad5a2
        public_6dad568 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dad57d
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dad57d : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6dad635
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0x64]
        add eax, 4
        mov dword ptr ds : [edx+ecx*4], ebx
        mov dword ptr ss : [ebp], eax
        movsx eax, byte ptr ds : [edi+0x68]
        inc ecx
        xor ebx, ebx
        cmp ecx, eax
        jl public_6dad568
        public_6dad5a2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dad5b9
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dad5b9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov cx, word ptr ds : [eax]
        add eax, 2
        movzx ecx, cx
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [edi+0x6C], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dad5eb
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dad5eb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6dad689
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        xor edx, edx
        mov dl, cl
        inc eax
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ebp
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        mov ecx, edi
        fmul qword ptr ds : [public_6db6558]
        fstp dword ptr ds : [edi+0x70]
        call public_6da13c0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dad63f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dad635 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6dad63f : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6dad67d
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dad67d : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dad689 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dad320)
    }
}

#undef public_6dad35e
#undef public_6dad376
#undef public_6dad3a0
#undef public_6dad3ca
#undef public_6dad3f2
#undef public_6dad424
#undef public_6dad44e
#undef public_6dad47c
#undef public_6dad4a0
#undef public_6dad4b3
#undef public_6dad4dd
#undef public_6dad4ec
#undef public_6dad4fd
#undef public_6dad525
#undef public_6dad54c
#undef public_6dad568
#undef public_6dad57d
#undef public_6dad5a2
#undef public_6dad5b9
#undef public_6dad5eb
#undef public_6dad635
#undef public_6dad63f
#undef public_6dad67d
#undef public_6dad689
