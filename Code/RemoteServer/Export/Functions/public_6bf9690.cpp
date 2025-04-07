#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bf96ce _public_6bf96ce
#define public_6bf96e6 _public_6bf96e6
#define public_6bf9710 _public_6bf9710
#define public_6bf973a _public_6bf973a
#define public_6bf9762 _public_6bf9762
#define public_6bf9794 _public_6bf9794
#define public_6bf97be _public_6bf97be
#define public_6bf97ec _public_6bf97ec
#define public_6bf9810 _public_6bf9810
#define public_6bf9823 _public_6bf9823
#define public_6bf984d _public_6bf984d
#define public_6bf985c _public_6bf985c
#define public_6bf986d _public_6bf986d
#define public_6bf9895 _public_6bf9895
#define public_6bf98bc _public_6bf98bc
#define public_6bf98d8 _public_6bf98d8
#define public_6bf98ed _public_6bf98ed
#define public_6bf9912 _public_6bf9912
#define public_6bf9929 _public_6bf9929
#define public_6bf995b _public_6bf995b
#define public_6bf99a5 _public_6bf99a5
#define public_6bf99af _public_6bf99af
#define public_6bf99ed _public_6bf99ed
#define public_6bf99f9 _public_6bf99f9

PROC_DECLARE(0x6bf9690, internal_6bf9690, public_6bf9690);
extern "C" NAKED register_t __cdecl internal_6bf9690()
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
        call public_6bebe90
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf96ce
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf96ce : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov edx, 0x17
        jbe public_6bf96e6
        mov dword ptr ds : [esi+0xC], edx
        public_6bf96e6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        jbe public_6bf9710
        mov dword ptr ds : [esi+0xC], edx
        public_6bf9710 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        jbe public_6bf973a
        mov dword ptr ds : [esi+0xC], edx
        public_6bf973a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        jbe public_6bf9762
        mov dword ptr ds : [esi+0xC], edx
        public_6bf9762 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        mov al, cl
        cmp al, bl
        mov byte ptr ds : [edi+0x74], cl
        je public_6bf984d
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6bf9794
        mov dword ptr ds : [esi+0xC], edx
        public_6bf9794 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        jbe public_6bf97be
        mov dword ptr ds : [esi+0xC], edx
        public_6bf97be : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        jbe public_6bf97ec
        mov dword ptr ds : [esi+0xC], edx
        public_6bf97ec : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        xor eax, eax
        mov al, cl
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ds : [edi+0x5C], eax
        jle public_6bf985c
        lea edx, ds:[edi+0x3C]
        public_6bf9810 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 4
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        jbe public_6bf9823
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf9823 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6bf99a5
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
        jl public_6bf9810
        mov edx, 0x17
        jmp public_6bf985c
        public_6bf984d : nop
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov dword ptr ds : [edi+0x5C], ebx
        public_6bf985c : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6bf986d
        mov dword ptr ds : [esi+0xC], edx
        public_6bf986d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        jbe public_6bf9895
        mov dword ptr ds : [esi+0xC], edx
        public_6bf9895 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
        mov eax, dword ptr ss : [ebp]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [edi+0x64]
        cmp eax, ebx
        mov byte ptr ds : [edi+0x68], dl
        je public_6bf98bc
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bf98bc : nop
        movsx eax, byte ptr ds : [edi+0x68]
        shl eax, 2
        push eax
        call public_6c09d26
        mov dword ptr ds : [edi+0x64], eax
        mov al, byte ptr ds : [edi+0x68]
        add esp, 4
        xor ecx, ecx
        cmp al, bl
        jle public_6bf9912
        public_6bf98d8 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bf98ed
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf98ed : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6bf99a5
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
        jl public_6bf98d8
        public_6bf9912 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf9929
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf9929 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        jbe public_6bf995b
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf995b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6bf99f9
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
        fmul qword ptr ds : [public_6c0e280]
        fstp dword ptr ds : [edi+0x70]
        call public_6bebeb0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf99af
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf99a5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bf99af : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
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
        jbe public_6bf99ed
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bf99ed : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bf99f9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf9690)
    }
}

#undef public_6bf96ce
#undef public_6bf96e6
#undef public_6bf9710
#undef public_6bf973a
#undef public_6bf9762
#undef public_6bf9794
#undef public_6bf97be
#undef public_6bf97ec
#undef public_6bf9810
#undef public_6bf9823
#undef public_6bf984d
#undef public_6bf985c
#undef public_6bf986d
#undef public_6bf9895
#undef public_6bf98bc
#undef public_6bf98d8
#undef public_6bf98ed
#undef public_6bf9912
#undef public_6bf9929
#undef public_6bf995b
#undef public_6bf99a5
#undef public_6bf99af
#undef public_6bf99ed
#undef public_6bf99f9
