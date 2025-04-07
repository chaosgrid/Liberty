#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62b7750);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1350);
CLANG_FORWARD_PROC_SYMBOL(public_62f1460);
CLANG_FORWARD_PROC_SYMBOL(public_62f1c70);
CLANG_FORWARD_PROC_SYMBOL(public_62f35b0);
CLANG_FORWARD_PROC_SYMBOL(public_62f3cb0);
CLANG_FORWARD_PROC_SYMBOL(public_62f9b10);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1a0);
CLANG_FORWARD_PROC_SYMBOL(public_62fbeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_630bd60);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6334550);
CLANG_FORWARD_PROC_SYMBOL(public_6334560);
CLANG_FORWARD_PROC_SYMBOL(public_6334570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_63957de);

#define public_62f362d _public_62f362d
#define public_62f3662 _public_62f3662
#define public_62f36d5 _public_62f36d5
#define public_62f36d7 _public_62f36d7
#define public_62f3705 _public_62f3705
#define public_62f379a _public_62f379a
#define public_62f37c5 _public_62f37c5
#define public_62f38b8 _public_62f38b8
#define public_62f38c7 _public_62f38c7
#define public_62f3920 _public_62f3920
#define public_62f392e _public_62f392e
#define public_62f3946 _public_62f3946
#define public_62f395a _public_62f395a
#define public_62f3983 _public_62f3983
#define public_62f3987 _public_62f3987
#define public_62f399b _public_62f399b
#define public_62f3a14 _public_62f3a14
#define public_62f3a25 _public_62f3a25
#define public_62f3a3a _public_62f3a3a
#define public_62f3a6a _public_62f3a6a
#define public_62f3abf _public_62f3abf
#define public_62f3ac2 _public_62f3ac2
#define public_62f3ad4 _public_62f3ad4
#define public_62f3adb _public_62f3adb
#define public_62f3b14 _public_62f3b14
#define public_62f3b3e _public_62f3b3e
#define public_62f3b70 _public_62f3b70
#define public_62f3bae _public_62f3bae
#define public_62f3bb0 _public_62f3bb0
#define public_62f3c23 _public_62f3c23
#define public_62f3c34 _public_62f3c34
#define public_62f3c49 _public_62f3c49
#define public_62f3c68 _public_62f3c68

PROC_DECLARE(0x62f35b0, internal_62f35b0, public_62f35b0);
extern "C" NAKED register_t __cdecl internal_62f35b0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_63957de @0x62f35b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63957de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x163C
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_63fcabc]
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0xE4]
        mov dword ptr ss : [esp+0x28], eax
        call public_630f660
        mov ecx, dword ptr ss : [esp+0x165C]
        xor ebp, ebp
        push ebp
        push ecx
        lea ecx, ss:[esp+0xEC]
        mov dword ptr ss : [esp+0x165C], ebp
        call public_630f9b0
        test al, al
        je public_62f399b
        lea ecx, ss:[esp+0x1C]
        xor esi, esi
        call public_6334550
        lea ecx, ss:[esp+0xE4]
        call public_6310070
        test al, al
        je public_62f399b
        public_62f362d : nop
        mov edi, dword ptr ss : [esp+0x1664]
/*FIXUP push offset public_63a1858 @0x62f3634*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1858
        lea ecx, ss:[esp+0xE8]
        call public_63103c0
        test al, al
        je public_62f3adb
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_62f3662
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        push 2
        mov ecx, edi
        call dword ptr ds : [edx]
        public_62f3662 : nop
        push 0xAC
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebp
        mov byte ptr ss : [esp+0x1654], 1
        je public_62f36d5
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        call public_62f1350
        lea ecx, ds:[esi+0xA0]
        mov byte ptr ss : [esp+0x1654], 2
        mov byte ptr ds : [esi+0x94], 0
        mov dword ptr ds : [esi+0x98], 0x43FA0000
        mov dword ptr ds : [esi+0x9C], ebp
        call public_6333e30
        lea ecx, ds:[esi+0xA4]
        call public_6333e30
        lea ecx, ds:[esi+0xA8]
        call public_6333e40
        mov dword ptr ds : [esi], offset public_6399854
        jmp public_62f36d7
        public_62f36d5 : nop
        xor esi, esi
        public_62f36d7 : nop
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1654], 0
        mov dword ptr ss : [esp+0x14], esi
        call public_6334570
        lea ecx, ss:[esp+0xE4]
        call public_6310170
        test al, al
        je public_62f395a
        mov ebx, offset public_6399854
/*FIXUP public_62f3705 : nop
        push offset public_63a17dc @0x62f3705*/
  FIXUP public_62f3705 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17dc
        lea ecx, ss:[esp+0xE8]
        call public_6310410
        test al, al
        je public_62f392e
        lea ecx, ss:[esp+0xE4]
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_63fcaac
        call public_6301640
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [public_63fcab0]
        jne public_62f379a
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x34]
        call public_62b7750
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x38]
        mov edi, eax
        call public_6333e60
        mov edx, dword ptr ds : [edi]
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x49
/*FIXUP push offset public_63a123c @0x62f3785*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f378a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push edx
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_62f3946
        public_62f379a : nop
        mov edi, dword ptr ds : [eax+0x10]
        cmp edi, ebp
        je public_62f3946
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov ebp, dword ptr ds : [esi+8]
        je public_62f37c5
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_62f37c5
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x1C]
        public_62f37c5 : nop
        push edi
        lea ecx, ss:[esp+0x3C]
        call public_62f1460
        mov al, byte ptr ds : [edi+0x94]
        mov cl, byte ptr ds : [edi+0x95]
        mov edx, dword ptr ds : [edi+0x98]
        mov byte ptr ss : [esp+0xCC], al
        mov eax, dword ptr ds : [edi+0x9C]
        mov byte ptr ss : [esp+0xCD], cl
        mov ecx, dword ptr ds : [edi+0xA0]
        mov dword ptr ss : [esp+0xD0], edx
        mov edx, dword ptr ds : [edi+0xA4]
        mov dword ptr ss : [esp+0xD4], eax
        mov eax, dword ptr ds : [edi+0xA8]
        mov dword ptr ss : [esp+0xD8], ecx
        mov dword ptr ss : [esp+0xDC], edx
        mov dword ptr ss : [esp+0xE0], eax
        mov dword ptr ss : [esp+0x38], ebx
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1658], 3
        call public_62f1c70
        mov dl, byte ptr ss : [esp+0xCC]
        mov al, byte ptr ss : [esp+0xCD]
        mov ecx, dword ptr ss : [esp+0xD0]
        mov byte ptr ds : [esi+0x94], dl
        mov edx, dword ptr ss : [esp+0xD4]
        mov byte ptr ds : [esi+0x95], al
        mov eax, dword ptr ss : [esp+0xD8]
        mov dword ptr ds : [esi+0x98], ecx
        mov ecx, dword ptr ss : [esp+0xDC]
        mov dword ptr ds : [esi+0x9C], edx
        mov edx, dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], ecx
        mov dword ptr ds : [esi+0xA8], edx
        mov dword ptr ss : [esp+0x38], offset public_63a11d4
        mov ecx, dword ptr ss : [esp+0x94]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1654], 7
        je public_62f38c7
        public_62f38b8 : nop
        mov edi, dword ptr ds : [ecx]
        push 1
        call public_62f3cb0
        test edi, edi
        mov ecx, edi
        jne public_62f38b8
        public_62f38c7 : nop
        lea ecx, ss:[esp+0xBC]
        mov byte ptr ss : [esp+0x1654], 6
        call public_6269110
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0x1654], 5
        call public_62a68e0
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0x1654], 4
        call public_62fb1a0
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1654], 0
        call public_62f02b0
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_62f3920
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_62f3920 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+4], ecx
        xor ebp, ebp
        jmp public_62f3946
        public_62f392e : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xE4]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_62f3946
        call public_6303220
        public_62f3946 : nop
        lea ecx, ss:[esp+0xE4]
        call public_6310170
        test al, al
        jne public_62f3705
/*FIXUP public_62f395a : nop
        push offset public_63a1858 @0x62f395a*/
  FIXUP public_62f395a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1858
        lea edi, ds:[esi+8]
        push edi
        push esi
        mov ecx, offset public_63fcaac
        call public_62fbeb0
        test al, al
        je public_62f3a6a
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_62f3983
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x14]
        public_62f3983 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_62f3987 : nop
        lea ecx, ss:[esp+0xE4]
        call public_6310070
        test al, al
        jne public_62f362d
        public_62f399b : nop
        mov esi, dword ptr ds : [public_63fcabc]
        sub esi, dword ptr ss : [esp+0x28]
        mov ebx, 8
        lea ecx, ss:[esp+0x150C]
        mov dword ptr ss : [esp+0x1654], ebx
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebp
        lea ecx, ss:[esp+0x1514]
        mov byte ptr ss : [esp+0x165C], 9
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x151C], 0xFFFFFFFF
        mov edi, dword ptr ds : [public_639913c]
        je public_62f3a3a
        cmp dword ptr ss : [esp+0x1520], ebp
        je public_62f3a25
        mov eax, dword ptr ss : [esp+0x1524]
        cmp eax, ebp
        je public_62f3a14
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x1524], ebp
        mov dword ptr ss : [esp+0x1528], ebp
        public_62f3a14 : nop
        mov ecx, dword ptr ss : [esp+0x1520]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x1520], ebp
        public_62f3a25 : nop
        mov edx, dword ptr ss : [esp+0x151C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x151C], 0xFFFFFFFF
        public_62f3a3a : nop
        mov eax, dword ptr ss : [esp+0x1524]
        cmp eax, ebp
        mov ebp, dword ptr ds : [public_639932c]
        je public_62f3bae
        push eax
        call ebp
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x1524], eax
        mov dword ptr ss : [esp+0x1528], eax
        jmp public_62f3bb0
        public_62f3a6a : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, offset public_63fcaac
        call public_6301640
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [public_63fcab0]
        jne public_62f3abf
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, edi
        mov ebp, 0x100001
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x49
/*FIXUP push offset public_63a123c @0x62f3aa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f3aae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x18
        xor ecx, ecx
        xor ebp, ebp
        jmp public_62f3ac2
        public_62f3abf : nop
        mov ecx, dword ptr ds : [eax+0x10]
        public_62f3ac2 : nop
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        cmp esi, ebp
        je public_62f3ad4
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        public_62f3ad4 : nop
        xor esi, esi
        jmp public_62f3987
/*FIXUP public_62f3adb : nop
        push offset public_63a1734 @0x62f3adb*/
  FIXUP public_62f3adb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1734
        lea ecx, ss:[esp+0xE8]
        call public_63103c0
        test al, al
        je public_62f3b3e
        cmp esi, ebp
        je public_62f3b14
        lea ecx, ss:[esp+0x1C]
        call public_6334560
        lea ecx, ss:[esp+0xE4]
        push eax
        push esi
        push ecx
        call public_62f9b10
        add esp, 0xC
        jmp public_62f3987
        public_62f3b14 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a1818 @0x62f3b1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1818
        push 0x780
/*FIXUP push offset public_63a123c @0x62f3b24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62f3b2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_62f3987
/*FIXUP public_62f3b3e : nop
        push offset public_63a152c @0x62f3b3e*/
  FIXUP public_62f3b3e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a152c
        lea ecx, ss:[esp+0xE8]
        call public_63103c0
        test al, al
        je public_62f3b70
        mov eax, dword ptr ss : [esp+0x1660]
        push eax
        lea ecx, ss:[esp+0xE8]
        push ecx
        call public_630bd60
        add esp, 8
        jmp public_62f3987
/*FIXUP public_62f3b70 : nop
        push offset public_63a16e0 @0x62f3b70*/
  FIXUP public_62f3b70 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a16e0
        lea ecx, ss:[esp+0xE8]
        call public_63103c0
        test al, al
        je public_62f3987
        cmp esi, ebp
        je public_62f3987
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_62f3987
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xE4]
        push eax
        call dword ptr ds : [edx+0xC]
        jmp public_62f3987
        public_62f3bae : nop
        xor eax, eax
        public_62f3bb0 : nop
        push 1
        lea ecx, ss:[esp+0x1510]
        mov dword ptr ss : [esp+0x1530], eax
        mov byte ptr ss : [esp+0x1658], bl
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0xEC]
        mov dword ptr ss : [esp+0x165C], 0xA
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0xF4], 0xFFFFFFFF
        je public_62f3c49
        cmp dword ptr ss : [esp+0xF8], ebx
        je public_62f3c34
        mov eax, dword ptr ss : [esp+0xFC]
        cmp eax, ebx
        je public_62f3c23
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0xFC], ebx
        mov dword ptr ss : [esp+0x100], ebx
        public_62f3c23 : nop
        mov edx, dword ptr ss : [esp+0xF8]
        push edx
        call edi
        mov dword ptr ss : [esp+0xF8], ebx
        public_62f3c34 : nop
        mov eax, dword ptr ss : [esp+0xF4]
        push eax
        call edi
        mov dword ptr ss : [esp+0xF4], 0xFFFFFFFF
        public_62f3c49 : nop
        mov eax, dword ptr ss : [esp+0xFC]
        cmp eax, ebx
        je public_62f3c68
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0xFC], ebx
        mov dword ptr ss : [esp+0x100], ebx
        public_62f3c68 : nop
        push 1
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x108], ebx
        mov dword ptr ss : [esp+0x1658], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x164C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1648
        ret 
        UNREACHABLE_TRAP(0x62f35b0)
    }
}

#undef public_62f362d
#undef public_62f3662
#undef public_62f36d5
#undef public_62f36d7
#undef public_62f3705
#undef public_62f379a
#undef public_62f37c5
#undef public_62f38b8
#undef public_62f38c7
#undef public_62f3920
#undef public_62f392e
#undef public_62f3946
#undef public_62f395a
#undef public_62f3983
#undef public_62f3987
#undef public_62f399b
#undef public_62f3a14
#undef public_62f3a25
#undef public_62f3a3a
#undef public_62f3a6a
#undef public_62f3abf
#undef public_62f3ac2
#undef public_62f3ad4
#undef public_62f3adb
#undef public_62f3b14
#undef public_62f3b3e
#undef public_62f3b70
#undef public_62f3bae
#undef public_62f3bb0
#undef public_62f3c23
#undef public_62f3c34
#undef public_62f3c49
#undef public_62f3c68
