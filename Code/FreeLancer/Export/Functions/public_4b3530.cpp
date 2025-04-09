#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4b3dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4b40d0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_4b355d _public_4b355d
#define public_4b3570 _public_4b3570
#define public_4b359b _public_4b359b
#define public_4b35a8 _public_4b35a8
#define public_4b35ba _public_4b35ba
#define public_4b35d2 _public_4b35d2
#define public_4b35ea _public_4b35ea
#define public_4b3602 _public_4b3602
#define public_4b361b _public_4b361b
#define public_4b3635 _public_4b3635
#define public_4b3647 _public_4b3647
#define public_4b3665 _public_4b3665
#define public_4b3674 _public_4b3674
#define public_4b36af _public_4b36af
#define public_4b36ba _public_4b36ba
#define public_4b36d0 _public_4b36d0
#define public_4b36fc _public_4b36fc
#define public_4b3702 _public_4b3702
#define public_4b3738 _public_4b3738
#define public_4b377f _public_4b377f
#define public_4b3790 _public_4b3790
#define public_4b37d5 _public_4b37d5
#define public_4b3832 _public_4b3832
#define public_4b384c _public_4b384c
#define public_4b3876 _public_4b3876
#define public_4b3888 _public_4b3888
#define public_4b38a6 _public_4b38a6
#define public_4b38b6 _public_4b38b6
#define public_4b38e4 _public_4b38e4
#define public_4b38f7 _public_4b38f7
#define public_4b391b _public_4b391b
#define public_4b3921 _public_4b3921
#define public_4b3944 _public_4b3944
#define public_4b394e _public_4b394e

PROC_DECLARE(0x4b3530, internal_4b3530, public_4b3530);
extern "C" NAKED register_t __cdecl internal_4b3530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x204
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x210]
        push esi
        lea eax, ss:[ebp-0x26]
        cmp eax, 0x28
        push edi
        mov esi, ecx
        ja public_4b394e
/*FIXUP movzx eax, byte ptr ds : [eax+public_4b397c] @0x4b354f*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4b3960] @0x4b3556*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b48e
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b48e : nop
        je public_4b377f
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b48a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b48a : nop
        je public_4b394e
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b486
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b486 : nop
        je public_4b394e
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b482
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b482 : nop
        je public_4b394e
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b47e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b47e : nop
        je public_4b394e
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b47a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b47a : nop
        je public_4b394e
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b476
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b476 : nop
        je public_4b355d
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b472
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b472 : nop
        je public_4b355d
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b46e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b46e : nop
        je public_4b394e
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b46a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b46a : nop
        je public_4b394e
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b466
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b466 : nop
        je public_4b3665
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b462
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b462 : nop
        je public_4b394e
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b45e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b45e : nop
        je public_4b394e
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b45a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b45a : nop
        je public_4b394e
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b456
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b456 : nop
        je public_4b394e
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000b452
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b452 : nop
        je public_4b394e
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000b44e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b44e : nop
        je public_4b394e
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000b44a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b44a : nop
        je public_4b394e
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000b446
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b446 : nop
        je public_4b394e
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000b442
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b442 : nop
        je public_4b394e
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000b43e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b43e : nop
        je public_4b394e
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000b43a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b43a : nop
        je public_4b394e
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000b436
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b436 : nop
        je public_4b394e
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000b432
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b432 : nop
        je public_4b394e
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000b42e
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b42e : nop
        je public_4b3702
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000b42a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b42a : nop
        je public_4b394e
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000b426
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b426 : nop
        je public_4b394e
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000b422
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b422 : nop
        je public_4b394e
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000b41e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000b41e : nop
        je public_4b3738
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000b41a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b41a : nop
        je public_4b394e
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000b416
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b416 : nop
        je public_4b394e
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000b412
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b412 : nop
        je public_4b394e
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000b40e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b40e : nop
        je public_4b394e
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000b40a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b40a : nop
        je public_4b394e
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000b406
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b406 : nop
        je public_4b394e
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000b402
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b402 : nop
        je public_4b394e
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000b3fe
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b3fe : nop
        je public_4b394e
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000b3fa
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b3fa : nop
        je public_4b394e
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000b3f6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b3f6 : nop
        je public_4b394e
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000b3f2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000b3f2 : nop
        je public_4b394e
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000b3ee
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b3ee : nop
        je public_4b361b
  JMPTB int 3
        public_4b355d : nop
        mov ebx, dword ptr ss : [esp+0x21C]
        xor edi, edi
        lea eax, ds:[esi+0x394]
        lea esp, ss:[esp]
        public_4b3570 : nop
        cmp ebx, dword ptr ds : [eax-0x24]
        je public_4b359b
        cmp ebx, dword ptr ds : [eax]
        je public_4b359b
        cmp ebx, dword ptr ds : [eax+0x48]
        je public_4b359b
        cmp ebx, dword ptr ds : [eax-0x48]
        je public_4b359b
        inc edi
        add eax, 4
        cmp edi, 9
        jl public_4b3570
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b359b : nop
        cmp ebp, 0x2C
        jne public_4b35a8
        mov dword ptr ds : [esi+0x484], edi
        jmp public_4b35ba
        public_4b35a8 : nop
        cmp dword ptr ds : [esi+0x484], edi
        jne public_4b35ba
        mov dword ptr ds : [esi+0x484], 0xFFFFFFFF
        public_4b35ba : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x370]
        cmp ebx, ecx
        je public_4b35d2
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push ebp
        call dword ptr ds : [edx+0xA8]
        public_4b35d2 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x34C]
        cmp ebx, ecx
        je public_4b35ea
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push ebp
        call dword ptr ds : [eax+0xA8]
        public_4b35ea : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x394]
        cmp ebx, ecx
        je public_4b3602
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push ebp
        call dword ptr ds : [edx+0xA8]
        public_4b3602 : nop
        mov esi, dword ptr ds : [esi+edi*4+0x3DC]
        cmp ebx, esi
        je public_4b394e
        push 0
        push 0
        push ebp
        jmp public_4b3944
        public_4b361b : nop
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFC
        push 0
        push esi
        mov byte ptr ds : [esi+0x6C], al
        call public_59dd00
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_4b3647
        public_4b3635 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4b3635
        public_4b3647 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b3665 : nop
        mov ebx, dword ptr ss : [esp+0x220]
        xor edi, edi
        lea ebp, ds:[esi+0x34C]
        public_4b3674 : nop
        mov ecx, dword ptr ss : [esp+0x21C]
        cmp ecx, dword ptr ss : [ebp]
        jne public_4b36ba
        mov eax, dword ptr ds : [esi+0x340]
        mov edx, dword ptr ds : [esi+0x334]
        add eax, edi
        test edx, edx
        je public_4b36ba
        mov ecx, dword ptr ds : [esi+0x338]
        sub ecx, edx
        sar ecx, 5
        cmp eax, ecx
        jae public_4b36ba
        shl eax, 5
        test ebx, ebx
        jne public_4b36af
        mov byte ptr ds : [edx+eax+0x1C], 1
        jmp public_4b36ba
        public_4b36af : nop
        mov ecx, dword ptr ds : [esi+0x334]
        mov byte ptr ds : [ecx+eax+0x1C], 0
        public_4b36ba : nop
        inc edi
        add ebp, 4
        cmp edi, 9
        jl public_4b3674
        mov edi, dword ptr ds : [esi+0x334]
        xor ebx, ebx
        xor ecx, ecx
        xor edx, edx
        nop 
        public_4b36d0 : nop
        test edi, edi
        je public_4b3921
        mov eax, dword ptr ds : [esi+0x338]
        sub eax, edi
        sar eax, 5
        cmp ecx, eax
        jae public_4b3921
        mov eax, dword ptr ds : [esi+0x334]
        add eax, edx
        cmp byte ptr ds : [eax+0x1C], 0
        je public_4b36fc
        add ebx, dword ptr ds : [eax+0xC]
        public_4b36fc : nop
        inc ecx
        add edx, 0x20
        jmp public_4b36d0
        public_4b3702 : nop
        mov edx, dword ptr ss : [esp+0x21C]
        cmp edx, dword ptr ds : [esi+0x46C]
        jne public_4b394e
        mov eax, dword ptr ss : [esp+0x220]
        mov ecx, esi
        mov dword ptr ds : [esi+0x340], eax
        call public_4b3dd0
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b3738 : nop
        mov eax, dword ptr ss : [esp+0x21C]
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], eax
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        push 2
        call public_5645c0
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b377f : nop
        mov ecx, dword ptr ss : [esp+0x21C]
        xor edi, edi
        lea eax, ds:[esi+0x3DC]
        mov edi, edi
        public_4b3790 : nop
        cmp ecx, dword ptr ds : [eax-0x48]
        je public_4b37d5
        cmp ecx, dword ptr ds : [eax]
        je public_4b37d5
        inc edi
        add eax, 4
        cmp edi, 9
        jl public_4b3790
        cmp ecx, dword ptr ds : [esi+0x344]
        jne public_4b384c
        mov ecx, esi
        call public_4b40d0
        mov ecx, dword ptr ds : [public_67220c]
        push 0
        push ecx
        call public_489e80
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b37d5 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x34C]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 0x2F
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+edi*4+0x34C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        test eax, eax
        mov eax, dword ptr ds : [esi+edi*4+0x34C]
        mov ecx, esi
        je public_4b3832
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b3832 : nop
        push 1
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b384c : nop
        cmp ecx, dword ptr ds : [esi+0x348]
        jne public_4b38a6
        mov cl, byte ptr ds : [esi+0x6C]
        and cl, 0xFC
        push 0
        push esi
        mov byte ptr ds : [esi+0x6C], cl
        call public_59dd00
        push 0
        call public_4424f0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0xC
        test eax, eax
        je public_4b3888
        public_4b3876 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4b3876
        public_4b3888 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x204
        ret 0xC
        public_4b38a6 : nop
        cmp ecx, dword ptr ds : [esi+0x470]
        jne public_4b394e
        xor edx, edx
        xor edi, edi
        public_4b38b6 : nop
        mov ecx, dword ptr ds : [esi+0x334]
        test ecx, ecx
        je public_4b38e4
        mov eax, dword ptr ds : [esi+0x338]
        sub eax, ecx
        sar eax, 5
        cmp edx, eax
        jae public_4b38e4
        mov bl, byte ptr ds : [ecx+edi+0x1C]
        lea eax, ds:[ecx+edi+0x1C]
        test bl, bl
        sete cl
        inc edx
        mov byte ptr ds : [eax], cl
        add edi, 0x20
        jmp public_4b38b6
        public_4b38e4 : nop
        mov ecx, esi
        call public_4b3dd0
        mov edi, dword ptr ds : [esi+0x334]
        xor ebx, ebx
        xor ecx, ecx
        xor edx, edx
        public_4b38f7 : nop
        test edi, edi
        je public_4b3921
        mov eax, dword ptr ds : [esi+0x338]
        sub eax, edi
        sar eax, 5
        cmp ecx, eax
        jae public_4b3921
        mov eax, dword ptr ds : [esi+0x334]
        add eax, edx
        cmp byte ptr ds : [eax+0x1C], 0
        je public_4b391b
        add ebx, dword ptr ds : [eax+0xC]
        public_4b391b : nop
        inc ecx
        add edx, 0x20
        jmp public_4b38f7
        public_4b3921 : nop
        push ebx
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_5d0ec4 @0x4b3926*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edx
        call dword ptr ds : [public_5c70ec]
        mov esi, dword ptr ds : [esi+0x474]
        add esp, 0xC
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x1D
        public_4b3944 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        public_4b394e : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x204
        ret 0xC
        UNREACHABLE_TRAP(0x4b3530)
        ASM_EXPORT_ENTRY_SINGLE(0x4b394e, public_4b394e)
    }
}

#undef public_4b355d
#undef public_4b3570
#undef public_4b359b
#undef public_4b35a8
#undef public_4b35ba
#undef public_4b35d2
#undef public_4b35ea
#undef public_4b3602
#undef public_4b361b
#undef public_4b3635
#undef public_4b3647
#undef public_4b3665
#undef public_4b3674
#undef public_4b36af
#undef public_4b36ba
#undef public_4b36d0
#undef public_4b36fc
#undef public_4b3702
#undef public_4b3738
#undef public_4b377f
#undef public_4b3790
#undef public_4b37d5
#undef public_4b3832
#undef public_4b384c
#undef public_4b3876
#undef public_4b3888
#undef public_4b38a6
#undef public_4b38b6
#undef public_4b38e4
#undef public_4b38f7
#undef public_4b391b
#undef public_4b3921
#undef public_4b3944
#undef public_4b394e

#pragma init_seg(compiler)
extern "C" void const* const public_4b394e = __AsmFindLabelExport(&internal_4b3530, 0x4b394e);
