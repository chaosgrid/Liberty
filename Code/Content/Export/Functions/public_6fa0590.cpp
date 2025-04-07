#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2370);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0590);
CLANG_FORWARD_PROC_SYMBOL(public_6fa2650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3c60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4490);

#define public_6fa05b0 _public_6fa05b0
#define public_6fa05c3 _public_6fa05c3
#define public_6fa05c6 _public_6fa05c6
#define public_6fa05ca _public_6fa05ca
#define public_6fa0629 _public_6fa0629
#define public_6fa0641 _public_6fa0641
#define public_6fa064b _public_6fa064b
#define public_6fa064f _public_6fa064f
#define public_6fa0660 _public_6fa0660
#define public_6fa069b _public_6fa069b
#define public_6fa06aa _public_6fa06aa
#define public_6fa06cb _public_6fa06cb
#define public_6fa06ec _public_6fa06ec
#define public_6fa06fa _public_6fa06fa
#define public_6fa0719 _public_6fa0719
#define public_6fa0725 _public_6fa0725
#define public_6fa0741 _public_6fa0741
#define public_6fa075c _public_6fa075c
#define public_6fa0763 _public_6fa0763
#define public_6fa0786 _public_6fa0786

PROC_DECLARE(0x6fa0590, internal_6fa0590, public_6fa0590);
extern "C" NAKED register_t __cdecl internal_6fa0590()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6fa05ca
        lea esp, ss:[esp]
        public_6fa05b0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6fa05c3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6fa05c6
        public_6fa05c3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6fa05c6 : nop
        cmp ebp, edx
        jne public_6fa05b0
        public_6fa05ca : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6fa0741
        push 0
        push esi
        mov ecx, edi
        call public_6fa3c60
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6fa4490
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6fa0629
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6fa0629
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6fa0629
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa064f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa064f
        public_6fa0629 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6fa0641
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa064b
        public_6fa0641 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa064b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6fa064b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6fa064f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6fa0725
        lea ecx, ds:[ecx]
        public_6fa0660 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x40]
        test cl, cl
        jne public_6fa0725
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6fa06cb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6fa069b
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6fa0719
        public_6fa069b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa06aa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6fa06aa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6fa0719
        public_6fa06cb : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6fa06ec
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x40], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6fa0719
        public_6fa06ec : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa06fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6fa06fa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6fa0719 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6fa0660
        public_6fa0725 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6fa0741 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6fa075c
        cmp esi, dword ptr ds : [ecx]
        je public_6fa0763
        lea ecx, ss:[esp+0x10]
        call public_6ed2370
        mov edx, dword ptr ss : [esp+0x10]
        public_6fa075c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6fa0786
        public_6fa0763 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6fa2650
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6fa0786 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6fa0590)
    }
}

#undef public_6fa05b0
#undef public_6fa05c3
#undef public_6fa05c6
#undef public_6fa05ca
#undef public_6fa0629
#undef public_6fa0641
#undef public_6fa064b
#undef public_6fa064f
#undef public_6fa0660
#undef public_6fa069b
#undef public_6fa06aa
#undef public_6fa06cb
#undef public_6fa06ec
#undef public_6fa06fa
#undef public_6fa0719
#undef public_6fa0725
#undef public_6fa0741
#undef public_6fa075c
#undef public_6fa0763
#undef public_6fa0786
