#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b721f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b73ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6b73f50);

#define public_6b72413 _public_6b72413
#define public_6b7241d _public_6b7241d
#define public_6b7241f _public_6b7241f
#define public_6b72436 _public_6b72436
#define public_6b72440 _public_6b72440
#define public_6b72444 _public_6b72444
#define public_6b72454 _public_6b72454
#define public_6b7245d _public_6b7245d
#define public_6b7246b _public_6b7246b
#define public_6b7249c _public_6b7249c
#define public_6b724ae _public_6b724ae
#define public_6b724b2 _public_6b724b2
#define public_6b724bc _public_6b724bc
#define public_6b724cc _public_6b724cc
#define public_6b724de _public_6b724de
#define public_6b724fd _public_6b724fd
#define public_6b72530 _public_6b72530
#define public_6b7257f _public_6b7257f
#define public_6b72583 _public_6b72583
#define public_6b72585 _public_6b72585
#define public_6b72592 _public_6b72592
#define public_6b725b0 _public_6b725b0
#define public_6b725d4 _public_6b725d4
#define public_6b725ff _public_6b725ff
#define public_6b72602 _public_6b72602
#define public_6b72620 _public_6b72620
#define public_6b72653 _public_6b72653
#define public_6b72655 _public_6b72655
#define public_6b72668 _public_6b72668
#define public_6b726a9 _public_6b726a9
#define public_6b726b1 _public_6b726b1
#define public_6b726bb _public_6b726bb
#define public_6b726de _public_6b726de
#define public_6b726e1 _public_6b726e1

PROC_DECLARE(0x6b723f0, internal_6b723f0, public_6b723f0);
extern "C" NAKED register_t __cdecl internal_6b723f0()
{
    __asm
    {
        sub esp, 0x21C
        mov eax, dword ptr ss : [esp+0x228]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        jne public_6b72413
        mov eax, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b7241f
        public_6b72413 : nop
        cmp eax, 0xFFFFFFFF
        je public_6b7241d
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b7241f
        public_6b7241d : nop
        xor eax, eax
        public_6b7241f : nop
        mov esi, dword ptr ss : [esp+0x230]
        mov dword ptr ss : [esp+0x10], 0
        mov edx, esi
        mov cl, byte ptr ds : [esi]
        test cl, cl
        je public_6b72454
        public_6b72436 : nop
        cmp cl, 0x5C
        je public_6b72440
        cmp cl, 0x2F
        jne public_6b72444
        public_6b72440 : nop
        mov dword ptr ss : [esp+0x10], edx
        public_6b72444 : nop
        mov cl, byte ptr ds : [edx+1]
        inc edx
        test cl, cl
        jne public_6b72436
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        jne public_6b7245d
        public_6b72454 : nop
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6b72592
        public_6b7245d : nop
        cmp edx, esi
        jne public_6b7246b
        inc edx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_6b72592
        public_6b7246b : nop
        sub edx, esi
        lea edi, ss:[esp+0x24]
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        test eax, eax
        mov byte ptr ss : [esp+edx+0x24], 0
        jne public_6b7249c
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        je public_6b72585
        public_6b7249c : nop
        mov cl, byte ptr ss : [esp+0x24]
        lea esi, ss:[esp+0x24]
        cmp cl, 0x5C
        je public_6b724ae
        cmp cl, 0x2F
        jne public_6b724b2
        public_6b724ae : nop
        lea esi, ss:[esp+0x25]
        public_6b724b2 : nop
        mov cl, byte ptr ds : [esi]
        test cl, cl
        je public_6b72585
        public_6b724bc : nop
        mov edx, dword ptr ds : [eax]
        shr edx, 0x1F
        test dl, 1
        je public_6b72583
        mov ebp, esi
        public_6b724cc : nop
        cmp cl, 0x5C
        je public_6b72530
        cmp cl, 0x2F
        je public_6b72530
        mov cl, byte ptr ss : [ebp+1]
        inc ebp
        test cl, cl
        jne public_6b724cc
        public_6b724de : nop
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ds:[eax+eax*2]
        lea eax, ss:[ebp+ecx*4]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x18], eax
        jae public_6b72583
        mov ebx, dword ptr ds : [public_6b79008]
        public_6b724fd : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax+8]
        add edi, ebp
        mov ecx, dword ptr ds : [edi]
        and ecx, 0x7FFFFFFF
        lea eax, ds:[ecx+edx+4]
        push eax
        push esi
        call ebx
        add esp, 8
        test eax, eax
        je public_6b7257f
        mov eax, dword ptr ss : [esp+0x18]
        add ebp, 0xC
        cmp ebp, eax
        jb public_6b724fd
        jmp public_6b72583
        public_6b72530 : nop
        cmp byte ptr ss : [ebp], 0
        je public_6b724de
        mov edx, ebp
        lea edi, ss:[esp+0x128]
        sub edx, esi
        push eax
        mov ecx, edx
        lea eax, ss:[esp+0x12C]
        mov ebx, ecx
        push eax
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+edx+0x130], 0
        call public_6b721f0
        test eax, eax
        je public_6b72585
        mov cl, byte ptr ss : [ebp+1]
        lea esi, ss:[ebp+1]
        test cl, cl
        jne public_6b724bc
        jmp public_6b72585
        public_6b7257f : nop
        mov eax, edi
        jmp public_6b72585
        public_6b72583 : nop
        xor eax, eax
        public_6b72585 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        public_6b72592 : nop
        test eax, eax
        jne public_6b725b0
        mov dword ptr ds : [edi+0x474], 0xA1
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x21C
        ret 0xC
        public_6b725b0 : nop
        mov edx, dword ptr ds : [eax]
        shr edx, 0x1F
        test dl, 1
        jne public_6b725d4
        mov dword ptr ds : [edi+0x474], 0xA1
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x21C
        ret 0xC
        public_6b725d4 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+4]
        add ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        je public_6b726de
        mov edx, dword ptr ds : [eax+8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        xor esi, esi
        lea ebp, ds:[edi+0x20]
        public_6b725ff : nop
        lea eax, ss:[ebp+4]
        public_6b72602 : nop
        cmp dword ptr ds : [eax], 0
        je public_6b72668
        inc esi
        add eax, 0x114
        inc ebx
        cmp esi, 4
        jl public_6b72602
        mov eax, dword ptr ss : [ebp]
        xor esi, esi
        test eax, eax
        je public_6b72620
        mov ebp, eax
        jmp public_6b725ff
        public_6b72620 : nop
        push 1
        push 0x454
        call dword ptr ds : [public_6b7906c]
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_6b72653
/*FIXUP push offset _public_6b73f50 @0x6b72636*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b73f50
        push 4
        lea eax, ds:[edi+4]
        push 0x114
        push eax
        call public_6b73ed0
        mov dword ptr ds : [edi], 0
        jmp public_6b72655
        public_6b72653 : nop
        xor edi, edi
        public_6b72655 : nop
        test edi, edi
        mov dword ptr ss : [ebp], edi
        je public_6b726a9
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebp, edi
        mov edi, dword ptr ss : [esp+0x14]
        jmp public_6b725ff
        public_6b72668 : nop
        lea eax, ds:[esi+esi*2]
        push 0x104
        shl eax, 3
        sub eax, esi
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea esi, ss:[ebp+edx*4+4]
        mov dword ptr ds : [esi], ecx
        lea ecx, ds:[esi+8]
        push ecx
        mov dword ptr ds : [esi+4], 0
        call dword ptr ds : [public_6b79074]
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        inc ebx
        mov dword ptr ds : [esi+0x110], edx
        cmp ebx, 0xFFFFFFFF
        jne public_6b726bb
        jmp public_6b726b1
        public_6b726a9 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        public_6b726b1 : nop
        mov dword ptr ds : [edi+0x474], 0x54
        public_6b726bb : nop
        cmp ebx, 0xFFFFFFFF
        mov esi, ebx
        je public_6b726e1
        mov ecx, dword ptr ss : [esp+0x234]
        mov eax, dword ptr ds : [edi]
        push ecx
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_6b726e1
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        public_6b726de : nop
        or esi, 0xFFFFFFFF
        public_6b726e1 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x21C
        ret 0xC
        UNREACHABLE_TRAP(0x6b723f0)
    }
}

#undef public_6b72413
#undef public_6b7241d
#undef public_6b7241f
#undef public_6b72436
#undef public_6b72440
#undef public_6b72444
#undef public_6b72454
#undef public_6b7245d
#undef public_6b7246b
#undef public_6b7249c
#undef public_6b724ae
#undef public_6b724b2
#undef public_6b724bc
#undef public_6b724cc
#undef public_6b724de
#undef public_6b724fd
#undef public_6b72530
#undef public_6b7257f
#undef public_6b72583
#undef public_6b72585
#undef public_6b72592
#undef public_6b725b0
#undef public_6b725d4
#undef public_6b725ff
#undef public_6b72602
#undef public_6b72620
#undef public_6b72653
#undef public_6b72655
#undef public_6b72668
#undef public_6b726a9
#undef public_6b726b1
#undef public_6b726bb
#undef public_6b726de
#undef public_6b726e1
