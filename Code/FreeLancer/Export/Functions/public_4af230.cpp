#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4af230);
CLANG_FORWARD_PROC_SYMBOL(public_4af5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5126f0);
CLANG_FORWARD_PROC_SYMBOL(public_577ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bceef);

#define public_4af267 _public_4af267
#define public_4af27c _public_4af27c
#define public_4af294 _public_4af294
#define public_4af2a9 _public_4af2a9
#define public_4af2c1 _public_4af2c1
#define public_4af2d6 _public_4af2d6
#define public_4af320 _public_4af320
#define public_4af350 _public_4af350
#define public_4af375 _public_4af375
#define public_4af393 _public_4af393
#define public_4af3ea _public_4af3ea
#define public_4af412 _public_4af412
#define public_4af451 _public_4af451
#define public_4af456 _public_4af456
#define public_4af471 _public_4af471
#define public_4af47f _public_4af47f
#define public_4af488 _public_4af488
#define public_4af49c _public_4af49c
#define public_4af4a8 _public_4af4a8
#define public_4af4c8 _public_4af4c8
#define public_4af557 _public_4af557
#define public_4af562 _public_4af562
#define public_4af56d _public_4af56d
#define public_4af587 _public_4af587

PROC_DECLARE(0x4af230, internal_4af230, public_4af230);
extern "C" NAKED register_t __cdecl internal_4af230()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bceef @0x4af238*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bceef
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1598
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x804]
        cmp eax, eax
        mov ebx, dword ptr ss : [ebp+0x800]
        push esi
        push edi
        mov edx, eax
        je public_4af27c
        public_4af267 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x2C
        mov ecx, 0xB
        add ebx, 0x2C
        cmp edx, eax
        rep movsd
        jne public_4af267
        public_4af27c : nop
        mov dword ptr ss : [ebp+0x804], ebx
        mov eax, dword ptr ss : [ebp+0x814]
        cmp eax, eax
        mov ebx, dword ptr ss : [ebp+0x810]
        mov edx, eax
        je public_4af2a9
        public_4af294 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x2C
        mov ecx, 0xB
        add ebx, 0x2C
        cmp edx, eax
        rep movsd
        jne public_4af294
        public_4af2a9 : nop
        mov dword ptr ss : [ebp+0x814], ebx
        mov eax, dword ptr ss : [ebp+0x824]
        cmp eax, eax
        mov ebx, dword ptr ss : [ebp+0x820]
        mov edx, eax
        je public_4af2d6
        public_4af2c1 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x2C
        mov ecx, 0xB
        add ebx, 0x2C
        cmp edx, eax
        rep movsd
        jne public_4af2c1
        public_4af2d6 : nop
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [ebp+0x824], ebx
        call dword ptr ds : [public_5c605c]
        mov esi, dword ptr ss : [esp+0x15B8]
        xor ebx, ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x15B8], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_4af4a8
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_4af49c
        mov ebx, dword ptr ss : [esp+0x10]
/*FIXUP public_4af320 : nop
        push offset public_5d5130 @0x4af320*/
  FIXUP public_4af320 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5130
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4af3ea
        lea ecx, ss:[esp+0x40]
        or ebx, 0xFFFFFFFF
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4af3ea
        lea esp, ss:[esp]
        public_4af350 : nop
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5d5124 @0x4af356*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5124
        lea ecx, ss:[esp+0x44]
        call edi
        test al, al
        lea ecx, ss:[esp+0x40]
        je public_4af375
        push 0
        call dword ptr ds : [public_5c6d00]
        mov ebx, eax
        jmp public_4af393
/*FIXUP public_4af375 : nop
        push offset public_5c9ca4 @0x4af375*/
  FIXUP public_4af375 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ca4
        call edi
        test al, al
        je public_4af393
        push 0
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6d00]
        mov dword ptr ss : [ebp+ebx*4+0x82C], eax
        public_4af393 : nop
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4af350
        cmp ebx, 1
        jne public_4af3ea
        xor ecx, ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], edx
        xor eax, eax
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        mov byte ptr ss : [esp+0x3C], cl
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ss:[ebp+0x80C]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push eax
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x38], 0xC2E
        mov dword ptr ss : [esp+0x3C], 0xCF7
        call public_5126f0
/*FIXUP public_4af3ea : nop
        push offset public_5d5120 @0x4af3ea*/
  FIXUP public_4af3ea : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5120
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4af488
        lea ecx, ss:[esp+0x40]
        or edi, 0xFFFFFFFF
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4af47f
/*FIXUP public_4af412 : nop
        push offset public_5d511c @0x4af412*/
  FIXUP public_4af412 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d511c
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x40]
        je public_4af456
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        push esi
        call dword ptr ds : [public_5c70c4]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        je public_4af451
        push esi
        call public_577ef0
        add esp, 4
        test eax, eax
        je public_4af471
        mov edi, dword ptr ds : [eax]
        jmp public_4af471
        public_4af451 : nop
        or edi, 0xFFFFFFFF
        jmp public_4af471
/*FIXUP public_4af456 : nop
        push offset public_5c9ca4 @0x4af456*/
  FIXUP public_4af456 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ca4
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4af471
        push 0
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6d00]
        public_4af471 : nop
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4af412
        public_4af47f : nop
        push ebx
        push edi
        mov ecx, ebp
        call public_4af5c0
        public_4af488 : nop
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_4af320
        xor ebx, ebx
        public_4af49c : nop
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c6400]
        jmp public_4af4c8
        public_4af4a8 : nop
        push esi
        push 0x910
/*FIXUP push offset public_5d50e8 @0x4af4ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d50e8
        mov eax, 0x100001
/*FIXUP push offset public_5d50c0 @0x4af4b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d50c0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4af4c8 : nop
        lea ecx, ss:[esp+0x1468]
        mov dword ptr ss : [esp+0x15B0], 1
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x1468]
        mov byte ptr ss : [esp+0x15B0], 2
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x146C]
        mov byte ptr ss : [esp+0x15B4], 1
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x15B8], 3
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x50]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_4af56d
        cmp dword ptr ss : [esp+0x54], ebx
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_4af562
        mov eax, dword ptr ss : [esp+0x58]
        cmp eax, ebx
        je public_4af557
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        public_4af557 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x54], ebx
        public_4af562 : nop
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        call esi
        mov dword ptr ss : [esp+0x50], edi
        public_4af56d : nop
        mov eax, dword ptr ss : [esp+0x58]
        cmp eax, ebx
        je public_4af587
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        public_4af587 : nop
        push 1
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x15B4], edi
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x15A8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15A4
        ret 4
        UNREACHABLE_TRAP(0x4af230)
    }
}

#undef public_4af267
#undef public_4af27c
#undef public_4af294
#undef public_4af2a9
#undef public_4af2c1
#undef public_4af2d6
#undef public_4af320
#undef public_4af350
#undef public_4af375
#undef public_4af393
#undef public_4af3ea
#undef public_4af412
#undef public_4af451
#undef public_4af456
#undef public_4af471
#undef public_4af47f
#undef public_4af488
#undef public_4af49c
#undef public_4af4a8
#undef public_4af4c8
#undef public_4af557
#undef public_4af562
#undef public_4af56d
#undef public_4af587
