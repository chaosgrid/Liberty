#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4255c0);
CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_4c73d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd79f);

#define public_4c743c _public_4c743c
#define public_4c7467 _public_4c7467
#define public_4c7492 _public_4c7492
#define public_4c74b0 _public_4c74b0
#define public_4c74d1 _public_4c74d1
#define public_4c74e0 _public_4c74e0
#define public_4c74e4 _public_4c74e4
#define public_4c74f0 _public_4c74f0
#define public_4c74f3 _public_4c74f3
#define public_4c751c _public_4c751c
#define public_4c7520 _public_4c7520
#define public_4c753f _public_4c753f
#define public_4c754d _public_4c754d
#define public_4c7557 _public_4c7557
#define public_4c7582 _public_4c7582
#define public_4c7588 _public_4c7588
#define public_4c75a0 _public_4c75a0
#define public_4c75c5 _public_4c75c5
#define public_4c766c _public_4c766c
#define public_4c767d _public_4c767d
#define public_4c768e _public_4c768e
#define public_4c76b7 _public_4c76b7
#define public_4c76b9 _public_4c76b9
#define public_4c771a _public_4c771a
#define public_4c7729 _public_4c7729
#define public_4c7734 _public_4c7734
#define public_4c774c _public_4c774c
#define public_4c7782 _public_4c7782
#define public_4c778b _public_4c778b

PROC_DECLARE(0x4c73d0, internal_4c73d0, public_4c73d0);
extern "C" NAKED register_t __cdecl internal_4c73d0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bd79f @0x4c73d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd79f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x156C
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c605c]
        xor edi, edi
        push edi
/*FIXUP push offset public_67340c @0x4c7400*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67340c
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], edi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_4c75a0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_4c75c5
        mov ebx, dword ptr ds : [public_5c6cf4]
        mov esi, dword ptr ds : [public_5c6698]
        public_4c743c : nop
        mov edi, dword ptr ds : [public_5c669c]
/*FIXUP push offset public_5d6e1c @0x4c7442*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e1c
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4c74e0
        lea ecx, ss:[esp+0x14]
        call edi
        test al, al
        je public_4c7588
/*FIXUP public_4c7467 : nop
        push offset public_5d6e14 @0x4c7467*/
  FIXUP public_4c7467 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e14
        lea ecx, ss:[esp+0x18]
        call ebx
        test al, al
        lea ecx, ss:[esp+0x14]
        je public_4c7492
        call esi
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        mov ecx, offset public_673520
        call public_425b30
        jmp public_4c74d1
/*FIXUP public_4c7492 : nop
        push offset public_5d6e08 @0x4c7492*/
  FIXUP public_4c7492 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e08
        call ebx
        test al, al
        lea ecx, ss:[esp+0x14]
        je public_4c74b0
        call esi
        push eax
        mov ecx, offset public_673570
        call public_4255c0
        jmp public_4c74d1
/*FIXUP public_4c74b0 : nop
        push offset public_5d6df8 @0x4c74b0*/
  FIXUP public_4c74b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6df8
        call ebx
        test al, al
        je public_4c74d1
        push 0
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [public_612374], eax
        public_4c74d1 : nop
        lea ecx, ss:[esp+0x14]
        call edi
        test al, al
        jne public_4c7467
        jmp public_4c7588
        public_4c74e0 : nop
        xor edi, edi
        xor esi, esi
        public_4c74e4 : nop
        test esi, esi
        jne public_4c74f0
        mov esi, dword ptr ds : [public_673510]
        jmp public_4c74f3
        public_4c74f0 : nop
        mov esi, dword ptr ds : [esi+4]
        public_4c74f3 : nop
        test esi, esi
        je public_4c751c
        lea eax, ds:[esi+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4c74e4
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        mov edi, eax
        test edi, edi
        je public_4c74e4
        jmp public_4c7520
        public_4c751c : nop
        test edi, edi
        je public_4c7557
        public_4c7520 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_4c754d
        mov eax, dword ptr ds : [public_67351c]
        test eax, eax
        je public_4c753f
        mov dword ptr ds : [eax+0x34], edi
        mov dword ptr ds : [public_67351c], edi
        jmp public_4c7582
        public_4c753f : nop
        mov dword ptr ds : [public_673518], edi
        mov dword ptr ds : [public_67351c], edi
        jmp public_4c7582
        public_4c754d : nop
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        jmp public_4c7582
        public_4c7557 : nop
        lea ecx, ss:[esp+0x14]
        mov esi, 0x100002
        call dword ptr ds : [public_5c6468]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x136
/*FIXUP push offset public_5d6dcc @0x4c7572*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6dcc
/*FIXUP push offset public_5d6d98 @0x4c7577*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6d98
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4c7582 : nop
        mov esi, dword ptr ds : [public_5c6698]
        public_4c7588 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_4c743c
        xor edi, edi
        jmp public_4c75c5
        mov edi, edi
        public_4c75a0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_67340c @0x4c75a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67340c
        push 0x13D
/*FIXUP push offset public_5d6dcc @0x4c75b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6dcc
        mov eax, 0x100002
/*FIXUP push offset public_5d6d68 @0x4c75ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6d68
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_4c75c5 : nop
        mov byte ptr ds : [public_67354c], 0
        mov dword ptr ds : [public_673550], 0
        mov byte ptr ds : [public_673554], 0
        mov byte ptr ds : [public_673555], 0
        mov dword ptr ds : [public_673558], 0
        mov dword ptr ds : [public_67355c], 0
        lea eax, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0x1584], 1
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push edi
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 2
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x144C]
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_4c768e
        cmp dword ptr ss : [esp+0x1450], edi
        je public_4c767d
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, edi
        je public_4c766c
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1454], edi
        mov dword ptr ss : [esp+0x1458], edi
        public_4c766c : nop
        mov eax, dword ptr ss : [esp+0x1450]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1450], edi
        public_4c767d : nop
        mov ecx, dword ptr ss : [esp+0x144C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x144C], ebx
        public_4c768e : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, edi
        mov edi, dword ptr ds : [public_5c71d8]
        je public_4c76b7
        push eax
        call edi
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x1454], eax
        mov dword ptr ss : [esp+0x1458], eax
        jmp public_4c76b9
        public_4c76b7 : nop
        xor eax, eax
        public_4c76b9 : nop
        push 1
        lea ecx, ss:[esp+0x1440]
        mov dword ptr ss : [esp+0x1460], eax
        mov byte ptr ss : [esp+0x1588], 1
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x24], ebx
        je public_4c7734
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_4c7729
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_4c771a
        push eax
        call ebp
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        public_4c771a : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x28], 0
        public_4c7729 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call esi
        mov dword ptr ss : [esp+0x24], ebx
        public_4c7734 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        xor esi, esi
        cmp eax, esi
        je public_4c774c
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        public_4c774c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [esp+0x30], esi
        cmp eax, esi
        pop esi
        pop ebp
        pop ebx
        je public_4c778b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4c7782
        cmp cl, 0xFF
        je public_4c7782
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x156C]
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        public_4c7782 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4c778b : nop
        mov ecx, dword ptr ss : [esp+0x156C]
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        UNREACHABLE_TRAP(0x4c73d0)
    }
}

#undef public_4c743c
#undef public_4c7467
#undef public_4c7492
#undef public_4c74b0
#undef public_4c74d1
#undef public_4c74e0
#undef public_4c74e4
#undef public_4c74f0
#undef public_4c74f3
#undef public_4c751c
#undef public_4c7520
#undef public_4c753f
#undef public_4c754d
#undef public_4c7557
#undef public_4c7582
#undef public_4c7588
#undef public_4c75a0
#undef public_4c75c5
#undef public_4c766c
#undef public_4c767d
#undef public_4c768e
#undef public_4c76b7
#undef public_4c76b9
#undef public_4c771a
#undef public_4c7729
#undef public_4c7734
#undef public_4c774c
#undef public_4c7782
#undef public_4c778b
