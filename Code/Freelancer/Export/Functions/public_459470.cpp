#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_459470);
CLANG_FORWARD_PROC_SYMBOL(public_459b60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba1df);

#define public_4594f1 _public_4594f1
#define public_459520 _public_459520
#define public_4595b0 _public_4595b0
#define public_4595c4 _public_4595c4
#define public_4595d4 _public_4595d4
#define public_459603 _public_459603
#define public_45960b _public_45960b
#define public_45963a _public_45963a
#define public_459652 _public_459652
#define public_459654 _public_459654
#define public_459669 _public_459669
#define public_45967e _public_45967e
#define public_4596ed _public_4596ed
#define public_4596fe _public_4596fe
#define public_459713 _public_459713
#define public_459738 _public_459738
#define public_4597a7 _public_4597a7
#define public_4597b8 _public_4597b8
#define public_4597cd _public_4597cd
#define public_4597ec _public_4597ec

PROC_DECLARE(0x459470, internal_459470, public_459470);
extern "C" NAKED register_t __cdecl internal_459470()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5ba1df @0x459478*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba1df
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16B4
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        push ebp
        lea eax, ss:[esp+0x5C]
/*FIXUP push offset public_5ce7d0 @0x45949a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce7d0
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x15C]
        call dword ptr ds : [public_5c605c]
        push ebp
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0x164]
        mov dword ptr ss : [esp+0x16D4], ebp
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_45967e
        lea ecx, ss:[esp+0x15C]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_45967e
/*FIXUP public_4594f1 : nop
        push offset public_5ce7bc @0x4594f1*/
  FIXUP public_4594f1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce7bc
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_459669
        lea ecx, ss:[esp+0x15C]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_459669
/*FIXUP public_459520 : nop
        push offset public_5ce780 @0x459520*/
  FIXUP public_459520 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce780
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_459654
        push ebp
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov esi, dword ptr ds : [public_5c6024]
        push 1
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x1C], eax
        call esi
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        push 2
        lea ecx, ss:[esp+0x160]
        mov edi, eax
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov bl, al
        test bl, 0x40
        mov byte ptr ss : [esp+0x48], bl
        je public_4595d4
        push 1
        lea ecx, ss:[esp+0x160]
        call esi
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ss : [esp+0x24], 0
        jne public_4595b0
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ss : [esp+0x24], 0
        jmp public_4595c4
        public_4595b0 : nop
        push eax
        lea edx, ss:[esp+0x28]
        push 0x10
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x20], eax
        public_4595c4 : nop
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [public_5c62a0]
        add esp, 4
        mov edi, eax
        public_4595d4 : nop
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_41bd10
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        mov edx, dword ptr ss : [esp+0x18]
        je public_459603
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_459603
        lea ecx, ss:[esp+0x1C]
        jmp public_45960b
        public_459603 : nop
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x10]
        public_45960b : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, eax
        jne public_45963a
        mov eax, dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x54]
        push edx
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ebp
        call public_459b60
        jmp public_459652
        public_45963a : nop
        push 0xC
        call public_5b7e84
        mov dword ptr ds : [eax], edi
        mov byte ptr ds : [eax+4], bl
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+8], ecx
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        public_459652 : nop
        xor ebp, ebp
        public_459654 : nop
        lea ecx, ss:[esp+0x15C]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_459520
        public_459669 : nop
        lea ecx, ss:[esp+0x15C]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_4594f1
        public_45967e : nop
        lea edx, ss:[esp+0x1584]
        mov dword ptr ss : [esp+0x16CC], 1
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x158C]
        mov byte ptr ss : [esp+0x16D4], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1594], 0xFFFFFFFF
        mov ebx, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_459713
        cmp dword ptr ss : [esp+0x1598], ebp
        je public_4596fe
        mov eax, dword ptr ss : [esp+0x159C]
        cmp eax, ebp
        je public_4596ed
        push eax
        call ebx
        mov dword ptr ss : [esp+0x159C], ebp
        mov dword ptr ss : [esp+0x15A0], ebp
        public_4596ed : nop
        mov edx, dword ptr ss : [esp+0x1598]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1598], ebp
        public_4596fe : nop
        mov eax, dword ptr ss : [esp+0x1594]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1594], 0xFFFFFFFF
        public_459713 : nop
        mov eax, dword ptr ss : [esp+0x159C]
        cmp eax, ebp
        mov edi, dword ptr ds : [public_5c71d8]
        je public_459738
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x159C], ebp
        mov dword ptr ss : [esp+0x15A0], ebp
        public_459738 : nop
        push 1
        lea ecx, ss:[esp+0x1588]
        mov dword ptr ss : [esp+0x15A8], ebp
        mov byte ptr ss : [esp+0x16D0], 1
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea ecx, ss:[esp+0x164]
        mov dword ptr ss : [esp+0x16D4], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x16C], 0xFFFFFFFF
        je public_4597cd
        cmp dword ptr ss : [esp+0x170], ebp
        je public_4597b8
        mov eax, dword ptr ss : [esp+0x174]
        cmp eax, ebp
        je public_4597a7
        push eax
        call ebx
        mov dword ptr ss : [esp+0x174], ebp
        mov dword ptr ss : [esp+0x178], ebp
        public_4597a7 : nop
        mov eax, dword ptr ss : [esp+0x170]
        push eax
        call esi
        mov dword ptr ss : [esp+0x170], ebp
        public_4597b8 : nop
        mov ecx, dword ptr ss : [esp+0x16C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x16C], 0xFFFFFFFF
        public_4597cd : nop
        mov eax, dword ptr ss : [esp+0x174]
        cmp eax, ebp
        je public_4597ec
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x174], ebp
        mov dword ptr ss : [esp+0x178], ebp
        public_4597ec : nop
        push 1
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x180], ebp
        mov dword ptr ss : [esp+0x16D0], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x16C4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16C0
        ret 
        UNREACHABLE_TRAP(0x459470)
    }
}

#undef public_4594f1
#undef public_459520
#undef public_4595b0
#undef public_4595c4
#undef public_4595d4
#undef public_459603
#undef public_45960b
#undef public_45963a
#undef public_459652
#undef public_459654
#undef public_459669
#undef public_45967e
#undef public_4596ed
#undef public_4596fe
#undef public_459713
#undef public_459738
#undef public_4597a7
#undef public_4597b8
#undef public_4597cd
#undef public_4597ec
