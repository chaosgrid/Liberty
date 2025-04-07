#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b380);
CLANG_FORWARD_PROC_SYMBOL(public_41bac0);
CLANG_FORWARD_PROC_SYMBOL(public_41bdc0);
CLANG_FORWARD_PROC_SYMBOL(public_433650);
CLANG_FORWARD_PROC_SYMBOL(public_4339a0);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_41b3a0 _public_41b3a0
#define public_41b3b3 _public_41b3b3
#define public_41b3b6 _public_41b3b6
#define public_41b3ba _public_41b3ba
#define public_41b419 _public_41b419
#define public_41b431 _public_41b431
#define public_41b43b _public_41b43b
#define public_41b43f _public_41b43f
#define public_41b450 _public_41b450
#define public_41b48b _public_41b48b
#define public_41b49a _public_41b49a
#define public_41b4bb _public_41b4bb
#define public_41b4dc _public_41b4dc
#define public_41b4ea _public_41b4ea
#define public_41b509 _public_41b509
#define public_41b515 _public_41b515
#define public_41b531 _public_41b531
#define public_41b54c _public_41b54c
#define public_41b553 _public_41b553
#define public_41b576 _public_41b576

PROC_DECLARE(0x41b380, internal_41b380, public_41b380);
extern "C" NAKED register_t __cdecl internal_41b380()
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
        je public_41b3ba
        lea esp, ss:[esp]
        public_41b3a0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_41b3b3
        mov ebp, dword ptr ss : [ebp]
        jmp public_41b3b6
        public_41b3b3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_41b3b6 : nop
        cmp ebp, edx
        jne public_41b3a0
        public_41b3ba : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_41b531
        push 0
        push esi
        mov ecx, edi
        call public_433650
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_41bdc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_41b419
        cmp ebp, dword ptr ds : [edi+8]
        jne public_41b419
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_41b419
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_41b43f
        mov dword ptr ds : [eax+8], ebx
        jmp public_41b43f
        public_41b419 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_41b431
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_41b43b
        public_41b431 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_41b43b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_41b43b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_41b43f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_41b515
        lea ecx, ds:[ecx]
        public_41b450 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_41b515
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_41b4bb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_41b48b
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_41b509
        public_41b48b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_41b49a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_41b49a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_41b509
        public_41b4bb : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_41b4dc
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_41b509
        public_41b4dc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_41b4ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_41b4ea : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_41b509 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_41b450
        public_41b515 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_41b531 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_41b54c
        cmp esi, dword ptr ds : [ecx]
        je public_41b553
        lea ecx, ss:[esp+0x10]
        call public_4339a0
        mov edx, dword ptr ss : [esp+0x10]
        public_41b54c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_41b576
        public_41b553 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_41bac0
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
        public_41b576 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x41b380)
    }
}

#undef public_41b3a0
#undef public_41b3b3
#undef public_41b3b6
#undef public_41b3ba
#undef public_41b419
#undef public_41b431
#undef public_41b43b
#undef public_41b43f
#undef public_41b450
#undef public_41b48b
#undef public_41b49a
#undef public_41b4bb
#undef public_41b4dc
#undef public_41b4ea
#undef public_41b509
#undef public_41b515
#undef public_41b531
#undef public_41b54c
#undef public_41b553
#undef public_41b576
