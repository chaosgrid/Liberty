#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbca0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecb619 _public_6ecb619
#define public_6ecb62d _public_6ecb62d
#define public_6ecb633 _public_6ecb633
#define public_6ecb641 _public_6ecb641
#define public_6ecb682 _public_6ecb682
#define public_6ecb69b _public_6ecb69b
#define public_6ecb6ae _public_6ecb6ae
#define public_6ecb6b9 _public_6ecb6b9
#define public_6ecb6bc _public_6ecb6bc
#define public_6ecb6c1 _public_6ecb6c1
#define public_6ecb6ea _public_6ecb6ea
#define public_6ecb703 _public_6ecb703
#define public_6ecb716 _public_6ecb716
#define public_6ecb720 _public_6ecb720
#define public_6ecb743 _public_6ecb743
#define public_6ecb75b _public_6ecb75b
#define public_6ecb76e _public_6ecb76e
#define public_6ecb77b _public_6ecb77b
#define public_6ecb77d _public_6ecb77d
#define public_6ecb783 _public_6ecb783
#define public_6ecb7ac _public_6ecb7ac
#define public_6ecb7bf _public_6ecb7bf
#define public_6ecb7ca _public_6ecb7ca
#define public_6ecb7cd _public_6ecb7cd
#define public_6ecb7cf _public_6ecb7cf
#define public_6ecb7d2 _public_6ecb7d2
#define public_6ecb7de _public_6ecb7de

PROC_DECLARE(0x6ecb5b0, internal_6ecb5b0, public_6ecb5b0);
extern "C" NAKED register_t __cdecl internal_6ecb5b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov esi, ecx
        call public_6ed0c5c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x18], 0
        mov byte ptr ds : [ebx+0x19], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ecbca0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ecb619
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ecb619
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6ecb619
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ecb633
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ecb633
        public_6ecb619 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ecb62d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ecb633
        public_6ecb62d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ecb633
        mov dword ptr ds : [eax], ebx
        public_6ecb633 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ecb7de
        public_6ecb641 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6ecb7de
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ecb720
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x18], 0
        jne public_6ecb682
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ecb7d2
        public_6ecb682 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ecb6c1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ecb69b
        mov dword ptr ds : [edx+4], eax
        public_6ecb69b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ecb6ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ecb6bc
        public_6ecb6ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ecb6b9
        mov dword ptr ds : [edx], ecx
        jmp public_6ecb6bc
        public_6ecb6b9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ecb6bc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ecb6c1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ecb6ea
        mov dword ptr ds : [edi+4], ecx
        public_6ecb6ea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecb703
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb7cf
        public_6ecb703 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ecb716
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb7cf
        public_6ecb716 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb7cf
        public_6ecb720 : nop
        cmp byte ptr ds : [edx+0x18], 0
        jne public_6ecb743
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ecb7d2
        public_6ecb743 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ecb783
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ecb75b
        mov dword ptr ds : [edx+4], eax
        public_6ecb75b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ecb76e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ecb77d
        public_6ecb76e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ecb77b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb77d
        public_6ecb77b : nop
        mov dword ptr ds : [edx], ecx
        public_6ecb77d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ecb783 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ecb7ac
        mov dword ptr ds : [edi+4], ecx
        public_6ecb7ac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecb7bf
        mov dword ptr ds : [edi+4], edx
        jmp public_6ecb7cd
        public_6ecb7bf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ecb7ca
        mov dword ptr ds : [edi], edx
        jmp public_6ecb7cd
        public_6ecb7ca : nop
        mov dword ptr ds : [edi+8], edx
        public_6ecb7cd : nop
        mov dword ptr ds : [edx], ecx
        public_6ecb7cf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ecb7d2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ecb641
        public_6ecb7de : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ecb5b0)
    }
}

#undef public_6ecb619
#undef public_6ecb62d
#undef public_6ecb633
#undef public_6ecb641
#undef public_6ecb682
#undef public_6ecb69b
#undef public_6ecb6ae
#undef public_6ecb6b9
#undef public_6ecb6bc
#undef public_6ecb6c1
#undef public_6ecb6ea
#undef public_6ecb703
#undef public_6ecb716
#undef public_6ecb720
#undef public_6ecb743
#undef public_6ecb75b
#undef public_6ecb76e
#undef public_6ecb77b
#undef public_6ecb77d
#undef public_6ecb783
#undef public_6ecb7ac
#undef public_6ecb7bf
#undef public_6ecb7ca
#undef public_6ecb7cd
#undef public_6ecb7cf
#undef public_6ecb7d2
#undef public_6ecb7de
