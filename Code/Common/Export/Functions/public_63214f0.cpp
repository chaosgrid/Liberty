#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_631f670);
CLANG_FORWARD_PROC_SYMBOL(public_631fdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63227c0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_632151f _public_632151f
#define public_632153c _public_632153c
#define public_632154b _public_632154b
#define public_6321562 _public_6321562
#define public_6321598 _public_6321598
#define public_632159c _public_632159c
#define public_63215dd _public_63215dd
#define public_63215e1 _public_63215e1
#define public_63215f8 _public_63215f8
#define public_6321607 _public_6321607
#define public_6321612 _public_6321612
#define public_6321632 _public_6321632
#define public_6321654 _public_6321654
#define public_6321661 _public_6321661
#define public_6321666 _public_6321666
#define public_632166b _public_632166b
#define public_632167e _public_632167e
#define public_6321685 _public_6321685
#define public_632168e _public_632168e

PROC_DECLARE(0x63214f0, internal_63214f0, public_63214f0);
extern "C" NAKED register_t __cdecl internal_63214f0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, offset public_64018c4
        mov edi, 0xFFFFFFFE
        call public_63227c0
        test al, al
        je public_632151f
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_632153c
        public_632151f : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_64018d8], eax
        public_632153c : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_632154b
        lea esi, ds:[eax+0x10]
        test esi, esi
        jne public_6321562
        public_632154b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6320290
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_632168e
        public_6321562 : nop
        mov ecx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        push edx
        mov ebp, 0xFFFFFFFD
        call public_631f670
        add esp, 0xC
        test eax, eax
        jne public_6321632
        mov eax, dword ptr ds : [esi+8]
        xor ebp, ebp
        test eax, eax
        je public_6321598
        fld dword ptr ds : [public_6399408]
        jmp public_632159c
        public_6321598 : nop
        fld dword ptr ss : [esp+0x24]
        public_632159c : nop
        fld dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [public_64018f0]
        fsub st, st(1)
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, offset public_64018ec
        fstp st(0)
        call public_6301640
        cmp dword ptr ss : [esp+0x28], edi
        je public_6321632
        fld dword ptr ds : [public_63a3ccc]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_63215dd
        fld dword ptr ds : [public_63a3ccc]
        jmp public_63215e1
        public_63215dd : nop
        fld dword ptr ss : [esp+0x24]
        public_63215e1 : nop
        fld dword ptr ds : [public_63a3cc8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_63215f8
        fstp st(0)
        fld dword ptr ds : [public_63a3cc8]
        public_63215f8 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [esi+0x80]
        cmp eax, ecx
        je public_6321612
        mov edx, dword ptr ds : [ebx]
        public_6321607 : nop
        cmp dword ptr ds : [eax], edx
        je public_6321661
        add eax, 8
        cmp eax, ecx
        jne public_6321607
        public_6321612 : nop
        mov ecx, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x80]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ds:[esi+0x78]
        push 1
        push eax
        call public_626b560
        public_6321632 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        pop ebx
        je public_6321685
        mov edx, dword ptr ds : [esi]
        cmp edx, 0xFFFFFFFF
        je public_632167e
        mov eax, dword ptr ds : [esi+0x7C]
        fld dword ptr ds : [public_6399408]
        mov ecx, dword ptr ds : [esi+0x80]
        cmp eax, ecx
        je public_632166b
        public_6321654 : nop
        cmp dword ptr ds : [eax], edx
        je public_6321666
        add eax, 8
        cmp eax, ecx
        jne public_6321654
        jmp public_632166b
        public_6321661 : nop
        fstp dword ptr ds : [eax+4]
        jmp public_6321632
        public_6321666 : nop
        fstp st(0)
        fld dword ptr ds : [eax+4]
        public_632166b : nop
        fcomp dword ptr ds : [public_63ed5d0]
        fnstsw ax
        test ah, 0x41
        jp public_6321685
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_632167e : nop
        mov ecx, esi
        call public_631fdd0
        public_6321685 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0xC
        ret 
        public_632168e : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x63214f0)
    }
}

#undef public_632151f
#undef public_632153c
#undef public_632154b
#undef public_6321562
#undef public_6321598
#undef public_632159c
#undef public_63215dd
#undef public_63215e1
#undef public_63215f8
#undef public_6321607
#undef public_6321612
#undef public_6321632
#undef public_6321654
#undef public_6321661
#undef public_6321666
#undef public_632166b
#undef public_632167e
#undef public_6321685
#undef public_632168e
