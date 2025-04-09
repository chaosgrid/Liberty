#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_419100);
CLANG_FORWARD_PROC_SYMBOL(public_4197e0);
CLANG_FORWARD_PROC_SYMBOL(public_419d20);
CLANG_FORWARD_PROC_SYMBOL(public_419d50);
CLANG_FORWARD_PROC_SYMBOL(public_419ec0);
CLANG_FORWARD_PROC_SYMBOL(public_419f10);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b899a);

#define public_419858 _public_419858
#define public_419890 _public_419890
#define public_4198c5 _public_4198c5
#define public_4198e1 _public_4198e1
#define public_419917 _public_419917
#define public_419930 _public_419930
#define public_419981 _public_419981
#define public_419997 _public_419997
#define public_4199b0 _public_4199b0
#define public_4199ca _public_4199ca
#define public_4199d4 _public_4199d4
#define public_4199ef _public_4199ef
#define public_4199f2 _public_4199f2
#define public_419a08 _public_419a08
#define public_419a1d _public_419a1d
#define public_419a40 _public_419a40
#define public_419a74 _public_419a74
#define public_419a7f _public_419a7f
#define public_419ad7 _public_419ad7
#define public_419add _public_419add
#define public_419ae9 _public_419ae9
#define public_419af1 _public_419af1
#define public_419af3 _public_419af3
#define public_419b08 _public_419b08
#define public_419b1f _public_419b1f
#define public_419b57 _public_419b57
#define public_419b65 _public_419b65
#define public_419bd2 _public_419bd2
#define public_419be3 _public_419be3
#define public_419bf8 _public_419bf8
#define public_419c1d _public_419c1d
#define public_419c90 _public_419c90
#define public_419ca1 _public_419ca1
#define public_419cb6 _public_419cb6
#define public_419cd5 _public_419cd5
#define public_419cfa _public_419cfa
#define public_419d03 _public_419d03

PROC_DECLARE(0x4197e0, internal_4197e0, public_4197e0);
extern "C" NAKED register_t __cdecl internal_4197e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_5b899a @0x4197e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b899a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, 0x3644
        call public_5b7e90
        push ebx
        push esi
        push edi
        xor edi, edi
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_5c605c]
        mov esi, dword ptr ss : [ebp+8]
        push edi
        push esi
        lea ecx, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0x3664], edi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_419b57
        lea ecx, ss:[esp+0xE8]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_419b65
        mov ebx, dword ptr ds : [public_5c6d24]
/*FIXUP public_419858 : nop
        push offset public_5c9014 @0x419858*/
  FIXUP public_419858 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9014
        lea ecx, ss:[esp+0xEC]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_419b08
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x34], 0
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_419b08
/*FIXUP public_419890 : nop
        push offset public_5c866c @0x419890*/
  FIXUP public_419890 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0xEC]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0xE8]
        je public_4198e1
        call dword ptr ds : [public_5c6698]
        cmp eax, edi
        jne public_4198c5
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x34], 0
        jmp public_419af3
        public_4198c5 : nop
        push eax
        lea eax, ss:[esp+0x38]
        push 0x80
        push eax
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x30], eax
        jmp public_419af3
/*FIXUP public_4198e1 : nop
        push offset public_5c8b1c @0x4198e1*/
  FIXUP public_4198e1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b1c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_419af3
        lea ecx, ss:[esp+0xE8]
        call dword ptr ds : [public_5c6698]
        mov esi, eax
/*FIXUP push offset public_5c8ea8 @0x419903*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ea8
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_419981
        mov esi, 2
        public_419917 : nop
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_419a1d
/*FIXUP public_419930 : nop
        push offset public_5c900c @0x419930*/
  FIXUP public_419930 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c900c
        lea ecx, ss:[esp+0xEC]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0xE8]
        je public_4199f2
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+edi*8+0x1650]
        cmp esi, 2
        jne public_4199ca
        push 1
        lea ecx, ss:[esp+0xEC]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+edi*8+0x1654]
        inc edi
        jmp public_419a08
/*FIXUP public_419981 : nop
        push offset public_5c8ea0 @0x419981*/
  FIXUP public_419981 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ea0
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_419997
        mov esi, 3
        jmp public_419917
/*FIXUP public_419997 : nop
        push offset public_5c8e98 @0x419997*/
  FIXUP public_419997 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8e98
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_4199b0
        mov esi, 1
        jmp public_419917
        public_4199b0 : nop
        lea ecx, ss:[esp+0xE8]
        call dword ptr ds : [public_5c6698]
        push 0
/*FIXUP push offset public_5c8fec @0x4199bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8fec
        push eax
        jmp public_419ae9
        public_4199ca : nop
        cmp esi, 1
        je public_4199d4
        cmp esi, 3
        jne public_4199ef
        public_4199d4 : nop
        lea ecx, ss:[esp+0xE8]
        push 1
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [esp+edi*8+0x1654], eax
        public_4199ef : nop
        inc edi
        jmp public_419a08
        public_4199f2 : nop
        call dword ptr ds : [public_5c606c]
        push 0
/*FIXUP push offset public_5c8fcc @0x4199fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8fcc
        push eax
        push 0
        call dword ptr ds : [public_5c72d4]
        public_419a08 : nop
        lea ecx, ss:[esp+0xE8]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_419930
        public_419a1d : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, offset public_61669c
        call public_53e430
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [public_6166a0]
        mov dword ptr ss : [esp+0x14], eax
        je public_419a7f
        mov ebx, dword ptr ds : [public_5c6d24]
        public_419a40 : nop
        lea ecx, ds:[eax+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x34]
        push edx
        call dword ptr ds : [eax]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_419a74
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_53ab20
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_6166a0]
        jne public_419a40
        jmp public_419a7f
        public_419a74 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+8]
        test eax, eax
        jne public_419add
        public_419a7f : nop
        lea ecx, ss:[esp+0xB8]
        call public_419d20
        push eax
        mov ecx, offset public_61669c
        mov byte ptr ss : [esp+0x3660], 1
        call public_419ec0
        lea ecx, ss:[esp+0xB8]
        mov byte ptr ss : [esp+0x365C], 0
        call public_419100
        mov eax, dword ptr ds : [public_6166a0]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x34]
        lea esi, ds:[eax+8]
        push ecx
        mov ecx, esi
        call public_419d50
        test al, al
        jne public_419b1f
        mov ecx, offset public_61669c
        call public_419f10
        public_419ad7 : nop
        mov ebx, dword ptr ds : [public_5c6d24]
        public_419add : nop
        push 0
/*FIXUP push offset public_5c8f98 @0x419adf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8f98
        lea ecx, ss:[esp+0x3C]
        push ecx
        public_419ae9 : nop
        push 0
        call dword ptr ds : [public_5c72d4]
        public_419af1 : nop
        xor edi, edi
        public_419af3 : nop
        lea ecx, ss:[esp+0xE8]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_419890
        public_419b08 : nop
        lea ecx, ss:[esp+0xE8]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_419858
        jmp public_419b65
        public_419b1f : nop
        test esi, esi
        je public_419ad7
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1650]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_5c6d24]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        jmp public_419af1
        public_419b57 : nop
        push edi
/*FIXUP push offset public_5c8f74 @0x419b58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8f74
        push esi
        push edi
        call dword ptr ds : [public_5c72d4]
        public_419b65 : nop
        lea edx, ss:[esp+0x1510]
        mov dword ptr ss : [esp+0x365C], 2
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea ecx, ss:[esp+0x1518]
        mov byte ptr ss : [esp+0x3664], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1520], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_419bf8
        cmp dword ptr ss : [esp+0x1524], edi
        je public_419be3
        mov eax, dword ptr ss : [esp+0x1528]
        cmp eax, edi
        je public_419bd2
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1528], edi
        mov dword ptr ss : [esp+0x152C], edi
        public_419bd2 : nop
        mov edx, dword ptr ss : [esp+0x1524]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1524], edi
        public_419be3 : nop
        mov eax, dword ptr ss : [esp+0x1520]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1520], 0xFFFFFFFF
        public_419bf8 : nop
        mov eax, dword ptr ss : [esp+0x1528]
        cmp eax, edi
        mov ebx, dword ptr ds : [public_5c71d8]
        je public_419c1d
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x1528], edi
        mov dword ptr ss : [esp+0x152C], edi
        public_419c1d : nop
        push 1
        lea ecx, ss:[esp+0x1514]
        mov dword ptr ss : [esp+0x1534], edi
        mov byte ptr ss : [esp+0x3660], 2
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push edi
        lea ecx, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0x3664], 4
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0xF8], 0xFFFFFFFF
        je public_419cb6
        cmp dword ptr ss : [esp+0xFC], edi
        je public_419ca1
        mov eax, dword ptr ss : [esp+0x100]
        cmp eax, edi
        je public_419c90
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x100], edi
        mov dword ptr ss : [esp+0x104], edi
        public_419c90 : nop
        mov eax, dword ptr ss : [esp+0xFC]
        push eax
        call esi
        mov dword ptr ss : [esp+0xFC], edi
        public_419ca1 : nop
        mov ecx, dword ptr ss : [esp+0xF8]
        push ecx
        call esi
        mov dword ptr ss : [esp+0xF8], 0xFFFFFFFF
        public_419cb6 : nop
        mov eax, dword ptr ss : [esp+0x100]
        cmp eax, edi
        je public_419cd5
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x100], edi
        mov dword ptr ss : [esp+0x104], edi
        public_419cd5 : nop
        mov eax, dword ptr ss : [esp+0xEC]
        cmp eax, edi
        mov dword ptr ss : [esp+0x108], edi
        je public_419d03
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_419cfa
        cmp cl, 0xFF
        je public_419cfa
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_419d03
        public_419cfa : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_419d03 : nop
        mov ecx, dword ptr ss : [esp+0x3654]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x4197e0)
    }
}

#undef public_419858
#undef public_419890
#undef public_4198c5
#undef public_4198e1
#undef public_419917
#undef public_419930
#undef public_419981
#undef public_419997
#undef public_4199b0
#undef public_4199ca
#undef public_4199d4
#undef public_4199ef
#undef public_4199f2
#undef public_419a08
#undef public_419a1d
#undef public_419a40
#undef public_419a74
#undef public_419a7f
#undef public_419ad7
#undef public_419add
#undef public_419ae9
#undef public_419af1
#undef public_419af3
#undef public_419b08
#undef public_419b1f
#undef public_419b57
#undef public_419b65
#undef public_419bd2
#undef public_419be3
#undef public_419bf8
#undef public_419c1d
#undef public_419c90
#undef public_419ca1
#undef public_419cb6
#undef public_419cd5
#undef public_419cfa
#undef public_419d03
