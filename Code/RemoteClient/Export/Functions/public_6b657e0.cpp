#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b6582b _public_6b6582b
#define public_6b65844 _public_6b65844
#define public_6b65882 _public_6b65882
#define public_6b658b4 _public_6b658b4
#define public_6b658d0 _public_6b658d0
#define public_6b658e9 _public_6b658e9
#define public_6b65922 _public_6b65922
#define public_6b6594d _public_6b6594d
#define public_6b6595f _public_6b6595f
#define public_6b65987 _public_6b65987
#define public_6b659ad _public_6b659ad
#define public_6b659bf _public_6b659bf
#define public_6b659ea _public_6b659ea
#define public_6b659f7 _public_6b659f7
#define public_6b65a0c _public_6b65a0c
#define public_6b65a0e _public_6b65a0e
#define public_6b65a24 _public_6b65a24
#define public_6b65a4c _public_6b65a4c
#define public_6b65a5e _public_6b65a5e
#define public_6b65a87 _public_6b65a87
#define public_6b65a94 _public_6b65a94
#define public_6b65aa9 _public_6b65aa9
#define public_6b65aab _public_6b65aab
#define public_6b65ac1 _public_6b65ac1
#define public_6b65ae9 _public_6b65ae9
#define public_6b65afb _public_6b65afb
#define public_6b65b24 _public_6b65b24
#define public_6b65b31 _public_6b65b31
#define public_6b65b46 _public_6b65b46
#define public_6b65b48 _public_6b65b48
#define public_6b65b54 _public_6b65b54
#define public_6b65b67 _public_6b65b67
#define public_6b65b7d _public_6b65b7d
#define public_6b65b90 _public_6b65b90
#define public_6b65ba9 _public_6b65ba9
#define public_6b65bed _public_6b65bed
#define public_6b65bf2 _public_6b65bf2
#define public_6b65bfa _public_6b65bfa
#define public_6b65bfe _public_6b65bfe
#define public_6b65c0a _public_6b65c0a
#define public_6b65c23 _public_6b65c23
#define public_6b65c2d _public_6b65c2d
#define public_6b65c37 _public_6b65c37
#define public_6b65c43 _public_6b65c43
#define public_6b65c55 _public_6b65c55
#define public_6b65c5f _public_6b65c5f
#define public_6b65c6d _public_6b65c6d
#define public_6b65c9b _public_6b65c9b
#define public_6b65cb1 _public_6b65cb1
#define public_6b65cc6 _public_6b65cc6
#define public_6b65cd4 _public_6b65cd4
#define public_6b65cde _public_6b65cde
#define public_6b65cf0 _public_6b65cf0
#define public_6b65cf7 _public_6b65cf7
#define public_6b65cfd _public_6b65cfd
#define public_6b65d06 _public_6b65d06
#define public_6b65d12 _public_6b65d12
#define public_6b65d20 _public_6b65d20
#define public_6b65d2e _public_6b65d2e
#define public_6b65d38 _public_6b65d38
#define public_6b65d42 _public_6b65d42
#define public_6b65d53 _public_6b65d53
#define public_6b65d60 _public_6b65d60
#define public_6b65d6a _public_6b65d6a
#define public_6b65d6e _public_6b65d6e
#define public_6b65d89 _public_6b65d89
#define public_6b65d96 _public_6b65d96
#define public_6b65dd7 _public_6b65dd7
#define public_6b65de3 _public_6b65de3

PROC_DECLARE(0x6b657e0, internal_6b657e0, public_6b657e0);
extern "C" NAKED register_t __cdecl internal_6b657e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        lea ebp, ds:[esi+0x10]
        push ebp
        push eax
        mov dword ptr ss : [ebp+8], ecx
        lea edi, ds:[esi+0x18]
        push edi
        mov ecx, esi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b6582b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b6582b : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b65844
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b65844 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        je public_6b6594d
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b65882
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b65882 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov ebx, dword ptr ds : [edi]
        push ebx
        lea ecx, ds:[esi+0x24]
        call public_6b3a160
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b658b4
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b658b4 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        xor bl, bl
        test cl, cl
        mov byte ptr ss : [esp+0x24], cl
        mov dword ptr ds : [edi], eax
        jbe public_6b65922
        public_6b658d0 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b658e9
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b658e9 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65d89
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi+0x38]
        push 1
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[esi+0x30]
        push eax
        call dword ptr ds : [public_6b6b024]
        mov al, byte ptr ss : [esp+0x24]
        inc bl
        cmp bl, al
        jb public_6b658d0
        public_6b65922 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push ebp
        push eax
        lea eax, ds:[esi+0x18]
        push eax
        mov ecx, esi
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b65d96
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b6594d : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov ebx, 0x17
        jbe public_6b6595f
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b6595f : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        inc eax
        test dl, 1
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        je public_6b659ad
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b65987
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65987 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        movsx ecx, cl
        mov dword ptr ss : [esp+0x24], ecx
        inc eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6b6e9f0]
        fstp dword ptr ds : [esi+0x24]
        jmp public_6b65a0c
        public_6b659ad : nop
        test dl, 2
        je public_6b659ea
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b659bf
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b659bf : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        movsx eax, cx
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6b6e9e8]
        fstp dword ptr ds : [esi+0x24]
        jmp public_6b65a0e
        public_6b659ea : nop
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b659f7
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b659f7 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x24], ecx
        add eax, 4
        public_6b65a0c : nop
        mov dword ptr ds : [edi], eax
        public_6b65a0e : nop
        test dl, 4
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        je public_6b65a4c
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b65a24
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65a24 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        movsx eax, cl
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6b6e9f0]
        fstp dword ptr ds : [esi+0x28]
        jmp public_6b65aab
        public_6b65a4c : nop
        test dl, 8
        je public_6b65a87
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b65a5e
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65a5e : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        movsx ecx, cx
        mov dword ptr ss : [esp+0x24], ecx
        add eax, 2
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6b6e9e8]
        fstp dword ptr ds : [esi+0x28]
        jmp public_6b65aa9
        public_6b65a87 : nop
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b65a94
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65a94 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x28], ecx
        add eax, 4
        public_6b65aa9 : nop
        mov dword ptr ds : [edi], eax
        public_6b65aab : nop
        test dl, 0x10
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        je public_6b65ae9
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b65ac1
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65ac1 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        movsx eax, cl
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6b6e9f0]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_6b65b48
        public_6b65ae9 : nop
        test dl, 0x20
        je public_6b65b24
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b65afb
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65afb : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        movsx ecx, cx
        mov dword ptr ss : [esp+0x24], ecx
        add eax, 2
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6b6e9e8]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_6b65b46
        public_6b65b24 : nop
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6b65b31
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65b31 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x2C], ecx
        add eax, 4
        public_6b65b46 : nop
        mov dword ptr ds : [edi], eax
        public_6b65b48 : nop
        test dl, 0x40
        je public_6b65b54
        mov byte ptr ss : [esp+0x24], 1
        jmp public_6b65b7d
        public_6b65b54 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b65b67
        mov dword ptr ss : [ebp+0xC], ebx
        public_6b65b67 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65de3
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ds : [edi], eax
        public_6b65b7d : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        jbe public_6b65922
        mov edi, edi
        public_6b65b90 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b65ba9
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b65ba9 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b65d89
        mov eax, dword ptr ds : [esi+0x18]
        xor ebx, ebx
        mov bx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+0x3C]
        sub ecx, eax
        sar ecx, 1
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, eax
        jae public_6b65cb1
        mov edx, dword ptr ds : [esi+0x34]
        test edx, edx
        je public_6b65bed
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ecx, 1
        ja public_6b65bf2
        public_6b65bed : nop
        mov ecx, 1
        public_6b65bf2 : nop
        test edx, edx
        jne public_6b65bfa
        xor eax, eax
        jmp public_6b65bfe
        public_6b65bfa : nop
        sub eax, edx
        sar eax, 1
        public_6b65bfe : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6b65c0a
        xor eax, eax
        public_6b65c0a : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6b6a134
        mov ecx, dword ptr ds : [esi+0x34]
        add esp, 4
        cmp ecx, edi
        mov ebx, eax
        mov dword ptr ss : [esp+0x18], ebx
        je public_6b65c37
        public_6b65c23 : nop
        test eax, eax
        je public_6b65c2d
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_6b65c2d : nop
        add ecx, 2
        add eax, 2
        cmp ecx, edi
        jne public_6b65c23
        public_6b65c37 : nop
        test eax, eax
        je public_6b65c43
        mov cx, word ptr ss : [esp+0x14]
        mov word ptr ds : [eax], cx
        public_6b65c43 : nop
        mov edx, dword ptr ds : [esi+0x38]
        cmp edi, edx
        lea ecx, ds:[eax+2]
        je public_6b65c6d
        mov ebx, ecx
        sub ebx, eax
        lea eax, ds:[ebx+edi-2]
        public_6b65c55 : nop
        test ecx, ecx
        je public_6b65c5f
        mov di, word ptr ds : [eax]
        mov word ptr ds : [ecx], di
        public_6b65c5f : nop
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6b65c55
        mov ebx, dword ptr ss : [esp+0x18]
        public_6b65c6d : nop
        mov edx, dword ptr ds : [esi+0x34]
        push edx
        call public_6b6a092
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ebx+eax*2]
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x34]
        add esp, 4
        test ecx, ecx
        jne public_6b65c9b
        xor eax, eax
        lea edx, ds:[ebx+eax*2+2]
        mov dword ptr ds : [esi+0x38], edx
        mov dword ptr ds : [esi+0x34], ebx
        jmp public_6b65d6e
        public_6b65c9b : nop
        mov eax, dword ptr ds : [esi+0x38]
        sub eax, ecx
        sar eax, 1
        lea edx, ds:[ebx+eax*2+2]
        mov dword ptr ds : [esi+0x38], edx
        mov dword ptr ds : [esi+0x34], ebx
        jmp public_6b65d6e
        public_6b65cb1 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 1
        cmp ecx, 1
        jae public_6b65d12
        cmp edi, eax
        lea ecx, ds:[edi+2]
        je public_6b65cde
        lea edx, ds:[ecx-2]
        public_6b65cc6 : nop
        test ecx, ecx
        je public_6b65cd4
        mov bx, word ptr ds : [edx]
        mov word ptr ds : [ecx], bx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6b65cd4 : nop
        add edx, 2
        add ecx, 2
        cmp edx, eax
        jne public_6b65cc6
        public_6b65cde : nop
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, ecx
        sub edx, edi
        sar edx, 1
        mov eax, 1
        sub eax, edx
        je public_6b65cfd
        public_6b65cf0 : nop
        test ecx, ecx
        je public_6b65cf7
        mov word ptr ds : [ecx], bx
        public_6b65cf7 : nop
        add ecx, 2
        dec eax
        jne public_6b65cf0
        public_6b65cfd : nop
        mov ecx, dword ptr ds : [esi+0x38]
        cmp edi, ecx
        mov eax, edi
        je public_6b65d6a
        public_6b65d06 : nop
        mov word ptr ds : [eax], bx
        add eax, 2
        cmp eax, ecx
        jne public_6b65d06
        jmp public_6b65d6a
        public_6b65d12 : nop
        lea ecx, ds:[eax-2]
        cmp ecx, eax
        mov edx, eax
        je public_6b65d38
        nop 
        lea esp, ss:[esp]
        public_6b65d20 : nop
        test edx, edx
        je public_6b65d2e
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [edx], bx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6b65d2e : nop
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6b65d20
        public_6b65d38 : nop
        mov ecx, dword ptr ds : [esi+0x38]
        lea eax, ds:[ecx-2]
        cmp edi, eax
        je public_6b65d53
        public_6b65d42 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edi
        mov word ptr ds : [ecx], dx
        jne public_6b65d42
        public_6b65d53 : nop
        lea ecx, ds:[edi+2]
        cmp edi, ecx
        mov eax, edi
        je public_6b65d6a
        lea esp, ss:[esp]
        public_6b65d60 : nop
        mov word ptr ds : [eax], bx
        add eax, 2
        cmp eax, ecx
        jne public_6b65d60
        public_6b65d6a : nop
        add dword ptr ds : [esi+0x38], 2
        public_6b65d6e : nop
        mov al, byte ptr ss : [esp+0x13]
        mov cl, byte ptr ss : [esp+0x24]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x13], al
        jb public_6b65b90
        jmp public_6b65922
        public_6b65d89 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b65d96 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ss : [ebp]
        add edx, 2
        add ebx, edx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add eax, 2
        cmp ebp, eax
        jbe public_6b65dd7
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6b65dd7 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b65de3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6b657e0)
    }
}

#undef public_6b6582b
#undef public_6b65844
#undef public_6b65882
#undef public_6b658b4
#undef public_6b658d0
#undef public_6b658e9
#undef public_6b65922
#undef public_6b6594d
#undef public_6b6595f
#undef public_6b65987
#undef public_6b659ad
#undef public_6b659bf
#undef public_6b659ea
#undef public_6b659f7
#undef public_6b65a0c
#undef public_6b65a0e
#undef public_6b65a24
#undef public_6b65a4c
#undef public_6b65a5e
#undef public_6b65a87
#undef public_6b65a94
#undef public_6b65aa9
#undef public_6b65aab
#undef public_6b65ac1
#undef public_6b65ae9
#undef public_6b65afb
#undef public_6b65b24
#undef public_6b65b31
#undef public_6b65b46
#undef public_6b65b48
#undef public_6b65b54
#undef public_6b65b67
#undef public_6b65b7d
#undef public_6b65b90
#undef public_6b65ba9
#undef public_6b65bed
#undef public_6b65bf2
#undef public_6b65bfa
#undef public_6b65bfe
#undef public_6b65c0a
#undef public_6b65c23
#undef public_6b65c2d
#undef public_6b65c37
#undef public_6b65c43
#undef public_6b65c55
#undef public_6b65c5f
#undef public_6b65c6d
#undef public_6b65c9b
#undef public_6b65cb1
#undef public_6b65cc6
#undef public_6b65cd4
#undef public_6b65cde
#undef public_6b65cf0
#undef public_6b65cf7
#undef public_6b65cfd
#undef public_6b65d06
#undef public_6b65d12
#undef public_6b65d20
#undef public_6b65d2e
#undef public_6b65d38
#undef public_6b65d42
#undef public_6b65d53
#undef public_6b65d60
#undef public_6b65d6a
#undef public_6b65d6e
#undef public_6b65d89
#undef public_6b65d96
#undef public_6b65dd7
#undef public_6b65de3
