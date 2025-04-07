#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b634ee _public_6b634ee
#define public_6b63506 _public_6b63506
#define public_6b63530 _public_6b63530
#define public_6b6355a _public_6b6355a
#define public_6b63582 _public_6b63582
#define public_6b635b4 _public_6b635b4
#define public_6b635de _public_6b635de
#define public_6b6360c _public_6b6360c
#define public_6b63630 _public_6b63630
#define public_6b63643 _public_6b63643
#define public_6b6366d _public_6b6366d
#define public_6b6367c _public_6b6367c
#define public_6b6368d _public_6b6368d
#define public_6b636b5 _public_6b636b5
#define public_6b636dc _public_6b636dc
#define public_6b636f7 _public_6b636f7
#define public_6b6371a _public_6b6371a
#define public_6b63723 _public_6b63723
#define public_6b63738 _public_6b63738
#define public_6b6375d _public_6b6375d
#define public_6b63774 _public_6b63774
#define public_6b637a6 _public_6b637a6
#define public_6b637f0 _public_6b637f0
#define public_6b637fa _public_6b637fa
#define public_6b63838 _public_6b63838
#define public_6b63844 _public_6b63844

PROC_DECLARE(0x6b634b0, internal_6b634b0, public_6b634b0);
extern "C" NAKED register_t __cdecl internal_6b634b0()
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
        call public_6b4e780
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b634ee
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b634ee : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov edx, 0x17
        jbe public_6b63506
        mov dword ptr ds : [esi+0xC], edx
        public_6b63506 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        jbe public_6b63530
        mov dword ptr ds : [esi+0xC], edx
        public_6b63530 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        jbe public_6b6355a
        mov dword ptr ds : [esi+0xC], edx
        public_6b6355a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        jbe public_6b63582
        mov dword ptr ds : [esi+0xC], edx
        public_6b63582 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        mov al, cl
        cmp al, bl
        mov byte ptr ds : [edi+0x74], cl
        je public_6b6366d
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b635b4
        mov dword ptr ds : [esi+0xC], edx
        public_6b635b4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        jbe public_6b635de
        mov dword ptr ds : [esi+0xC], edx
        public_6b635de : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        jbe public_6b6360c
        mov dword ptr ds : [esi+0xC], edx
        public_6b6360c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        xor eax, eax
        mov al, cl
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ds : [edi+0x5C], eax
        jle public_6b6367c
        lea edx, ds:[edi+0x3C]
        public_6b63630 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 4
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        jbe public_6b63643
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b63643 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6b637f0
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
        jl public_6b63630
        mov edx, 0x17
        jmp public_6b6367c
        public_6b6366d : nop
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov dword ptr ds : [edi+0x5C], ebx
        public_6b6367c : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b6368d
        mov dword ptr ds : [esi+0xC], edx
        public_6b6368d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        jbe public_6b636b5
        mov dword ptr ds : [esi+0xC], edx
        public_6b636b5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp], eax
        movsx eax, cl
        mov byte ptr ds : [edi+0x68], cl
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[ecx+eax*4]
        cmp eax, dword ptr ds : [esi+4]
        jbe public_6b636dc
        mov dword ptr ds : [esi+0xC], edx
        public_6b636dc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
        mov eax, dword ptr ds : [edi+0x64]
        cmp eax, ebx
        je public_6b636f7
        push eax
        call public_6b6a092
        add esp, 4
        public_6b636f7 : nop
        movsx ecx, byte ptr ds : [edi+0x68]
        shl ecx, 2
        push ecx
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [edi+0x64], eax
        jne public_6b6371a
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 0xC
        public_6b6371a : nop
        mov al, byte ptr ds : [edi+0x68]
        xor ecx, ecx
        cmp al, bl
        jle public_6b6375d
        public_6b63723 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b63738
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b63738 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        jne public_6b637f0
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
        jl public_6b63723
        public_6b6375d : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b63774
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b63774 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        jbe public_6b637a6
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b637a6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6b63844
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
        fmul qword ptr ds : [public_6b6e948]
        fstp dword ptr ds : [edi+0x70]
        call public_6b4e7a0
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b637fa
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b637f0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b637fa : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
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
        jbe public_6b63838
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b63838 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b63844 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b634b0)
    }
}

#undef public_6b634ee
#undef public_6b63506
#undef public_6b63530
#undef public_6b6355a
#undef public_6b63582
#undef public_6b635b4
#undef public_6b635de
#undef public_6b6360c
#undef public_6b63630
#undef public_6b63643
#undef public_6b6366d
#undef public_6b6367c
#undef public_6b6368d
#undef public_6b636b5
#undef public_6b636dc
#undef public_6b636f7
#undef public_6b6371a
#undef public_6b63723
#undef public_6b63738
#undef public_6b6375d
#undef public_6b63774
#undef public_6b637a6
#undef public_6b637f0
#undef public_6b637fa
#undef public_6b63838
#undef public_6b63844
