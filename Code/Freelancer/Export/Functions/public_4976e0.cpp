#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4976e0);
CLANG_FORWARD_PROC_SYMBOL(public_49a8f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_497700 _public_497700
#define public_497716 _public_497716
#define public_497721 _public_497721
#define public_497727 _public_497727
#define public_497771 _public_497771
#define public_49778b _public_49778b
#define public_497799 _public_497799
#define public_4977c0 _public_4977c0
#define public_4977d8 _public_4977d8
#define public_4977f7 _public_4977f7
#define public_497815 _public_497815
#define public_49781e _public_49781e
#define public_497826 _public_497826
#define public_497845 _public_497845
#define public_497865 _public_497865
#define public_497869 _public_497869
#define public_497888 _public_497888
#define public_49789c _public_49789c
#define public_4978a2 _public_4978a2
#define public_4978ac _public_4978ac
#define public_4978b0 _public_4978b0

PROC_DECLARE(0x4976e0, internal_4976e0, public_4976e0);
extern "C" NAKED register_t __cdecl internal_4976e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ds : [ecx+0x810]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_497727
        nop 
        lea esp, ss:[esp]
        public_497700 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        cmp edx, esi
        jne public_497716
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ss : [esp+0x20]
        je public_4978a2
        public_497716 : nop
        cmp edx, dword ptr ss : [esp+0x20]
        jne public_497721
        cmp dword ptr ds : [ecx+4], esi
        je public_49778b
        public_497721 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        jne public_497700
        public_497727 : nop
        push 0x10
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ss : [ebp+8], 1
        mov byte ptr ss : [ebp+9], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_4c4830
        mov ecx, dword ptr ds : [esi+0x64]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        cmp edi, eax
        je public_497799
        call public_4c4fb0
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_4977d8
        public_497771 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_49a8f0
        cmp eax, dword ptr ds : [esi+0x64]
        je public_497799
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, eax
        jl public_497771
        jmp public_4977d8
        public_49778b : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ecx+9], 1
        pop ebx
        add esp, 8
        ret 8
        public_497799 : nop
        call public_4c4830
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [ecx]
        mov edi, eax
        call dword ptr ds : [edx]
        cmp edi, eax
        je public_497815
        call public_4c4fb0
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_4977d8
        lea ebx, ds:[ebx]
        public_4977c0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_49a8f0
        cmp eax, dword ptr ds : [ebx+0x64]
        je public_497815
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, eax
        jl public_4977c0
        public_4977d8 : nop
        call public_4c4830
        mov ecx, dword ptr ds : [esi+0x64]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        cmp edi, eax
        je public_497826
        call public_4c4690
        mov ebx, eax
        xor edi, edi
        test ebx, ebx
        jle public_497869
        public_4977f7 : nop
        push edi
        call public_4c46a0
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        mov ebp, eax
        call dword ptr ds : [edx]
        cmp dword ptr ss : [ebp+0xC], eax
        je public_49781e
        inc edi
        cmp edi, ebx
        jl public_4977f7
        jmp public_497865
        public_497815 : nop
        mov dword ptr ss : [ebp+0xC], 2
        jmp public_497869
        public_49781e : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x20]
        public_497826 : nop
        call public_4c4830
        mov ecx, dword ptr ds : [ebx+0x64]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        cmp esi, eax
        je public_4978b0
        call public_4c4690
        mov ebp, eax
        xor esi, esi
        test ebp, ebp
        jle public_497865
        public_497845 : nop
        push esi
        call public_4c46a0
        mov ecx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        mov edi, eax
        call dword ptr ds : [edx]
        cmp dword ptr ds : [edi+0xC], eax
        je public_4978ac
        inc esi
        cmp esi, ebp
        jl public_497845
        public_497865 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_497869 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ebx+0x810]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_497888
        mov edi, eax
        public_497888 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_49789c
        mov dword ptr ds : [eax], ebp
        public_49789c : nop
        inc dword ptr ds : [ebx+0x814]
        public_4978a2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4978ac : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_4978b0 : nop
        mov dword ptr ss : [ebp+0xC], 1
        jmp public_497869
        UNREACHABLE_TRAP(0x4976e0)
    }
}

#undef public_497700
#undef public_497716
#undef public_497721
#undef public_497727
#undef public_497771
#undef public_49778b
#undef public_497799
#undef public_4977c0
#undef public_4977d8
#undef public_4977f7
#undef public_497815
#undef public_49781e
#undef public_497826
#undef public_497845
#undef public_497865
#undef public_497869
#undef public_497888
#undef public_49789c
#undef public_4978a2
#undef public_4978ac
#undef public_4978b0
