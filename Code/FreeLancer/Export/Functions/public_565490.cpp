#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404720);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_565490);
CLANG_FORWARD_PROC_SYMBOL(public_5657d0);
CLANG_FORWARD_PROC_SYMBOL(public_565800);
CLANG_FORWARD_PROC_SYMBOL(public_5658d0);
CLANG_FORWARD_PROC_SYMBOL(public_5659b0);
CLANG_FORWARD_PROC_SYMBOL(public_575570);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7030);
CLANG_FORWARD_PROC_SYMBOL(public_5b7050);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1f63);

#define public_565586 _public_565586
#define public_5655ad _public_5655ad
#define public_5655be _public_5655be
#define public_5655cb _public_5655cb
#define public_5655e2 _public_5655e2
#define public_5655eb _public_5655eb
#define public_565611 _public_565611
#define public_56562a _public_56562a
#define public_565641 _public_565641
#define public_565693 _public_565693
#define public_56569a _public_56569a
#define public_5656fa _public_5656fa
#define public_56576f _public_56576f
#define public_565773 _public_565773
#define public_5657ad _public_5657ad
#define public_5657af _public_5657af

PROC_DECLARE(0x565490, internal_565490, public_565490);
extern "C" NAKED register_t __cdecl internal_565490()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1f63 @0x565498*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1f63
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [ecx+0x14]
        sub esp, 0x80
        push ebx
        push ebp
        lea ebp, ds:[ecx+0x14]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        jne public_5657ad
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x60], offset public_5c7388
        rep stosd
        or edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x6C], 0x80000000
        mov dword ptr ss : [esp+0x70], 1
        mov dword ptr ss : [esp+0x78], 3
        mov dword ptr ss : [esp+0x7C], 0x8000080
        mov dword ptr ss : [esp+0x68], offset public_67c18c
        mov dword ptr ss : [esp+0x5C], 0x34
        mov dword ptr ss : [esp+0x8C], edi
        mov dword ptr ss : [esp+0x14], ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x98], ebx
        call public_526a20
        mov eax, dword ptr ds : [public_5c6dd8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_56562a
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_575570
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov ecx, dword ptr ss : [esp+0xA0]
        push edi
        push ecx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0xA0], 1
        call public_5658d0
        test eax, eax
        jge public_565586
        mov byte ptr ss : [esp+0x98], 2
        jmp public_565611
        public_565586 : nop
        mov esi, dword ptr ss : [esp+0x28]
        push ebx
        call public_5b7010
        mov dword ptr ss : [esp+0x14], eax
        mov al, byte ptr ds : [esi+2]
        and al, 7
        add esp, 4
        cmp al, 1
        jne public_5655ad
        cmp byte ptr ds : [esi+1], al
        jne public_5655ad
        push ebx
        push ebx
        push ebx
        push ebx
        push 8
        jmp public_5655eb
        public_5655ad : nop
        cmp byte ptr ds : [esi+0x10], 0x10
        jne public_5655be
        push ebx
        push 5
        push 5
        push 5
        push 0x10
        jmp public_5655eb
        public_5655be : nop
        cmp al, 3
        jne public_5655cb
        push ebx
        push ebx
        push ebx
        push 8
        push 8
        jmp public_5655eb
        public_5655cb : nop
        mov ecx, esi
        call public_5657d0
        test eax, eax
        je public_5655e2
        push 8
        push 8
        push 8
        push 8
        push 0x20
        jmp public_5655eb
        public_5655e2 : nop
        push ebx
        push 8
        push 8
        push 8
        push 0x18
        public_5655eb : nop
        lea ecx, ss:[esp+0x24]
        call public_5b7050
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7030
        mov ecx, dword ptr ds : [eax+4]
        add esp, 4
        cmp ecx, 0x20
        jae public_565641
        mov byte ptr ss : [esp+0x98], 3
        public_565611 : nop
        lea ecx, ss:[esp+0x1C]
        call public_5659b0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x98], bl
        call public_526a20
        public_56562a : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x98], edi
        call public_526a20
        xor al, al
        jmp public_5657af
        public_565641 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_5b7030
        mov eax, dword ptr ds : [eax+4]
        movsx ecx, word ptr ds : [esi+0xC]
        add esp, 4
        push 8
        push 8
        lea edi, ds:[eax+7]
        push 8
        shr edi, 3
        push 8
        imul edi, ecx
        push 0x20
        lea ecx, ss:[esp+0x2C]
        call public_5b7050
        mov dl, byte ptr ds : [esi+2]
        and dl, 7
        cmp dl, 1
        jne public_565693
        mov ecx, esi
        call public_565800
        movzx ecx, byte ptr ds : [esi]
        add eax, 6
        lea edx, ds:[eax+esi]
        lea eax, ds:[edx+eax*2]
        add ecx, eax
        jmp public_56569a
        public_565693 : nop
        movzx ecx, byte ptr ds : [esi]
        lea ecx, ds:[ecx+esi+0x12]
        public_56569a : nop
        movsx eax, word ptr ds : [esi+0xE]
        movsx edx, word ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [public_5c6de0]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x48], ecx
        lea esi, ss:[esp+0x18]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x34], offset public_5e2788
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x30], 0x2C
        mov dword ptr ss : [esp+0x58], offset _public_404720
        je public_5656fa
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp], ebx
        public_5656fa : nop
        mov eax, dword ptr ds : [public_5c6d64]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_565773
/*FIXUP push offset public_5e2754 @0x565711*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2754
        push 0x1FF
/*FIXUP push offset public_5e2724 @0x56571b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x565725*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x98], 4
        call public_5659b0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x98], bl
        call public_526a20
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        je public_56576f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_56576f : nop
        xor al, al
        jmp public_5657af
        public_565773 : nop
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x98], 5
        call public_5659b0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x98], bl
        call public_526a20
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        je public_5657ad
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_5657ad : nop
        mov al, 1
        public_5657af : nop
        mov ecx, dword ptr ss : [esp+0x90]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 4
        UNREACHABLE_TRAP(0x565490)
    }
}

#undef public_565586
#undef public_5655ad
#undef public_5655be
#undef public_5655cb
#undef public_5655e2
#undef public_5655eb
#undef public_565611
#undef public_56562a
#undef public_565641
#undef public_565693
#undef public_56569a
#undef public_5656fa
#undef public_56576f
#undef public_565773
#undef public_5657ad
#undef public_5657af
