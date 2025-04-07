#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba830);
CLANG_FORWARD_PROC_SYMBOL(public_4ba860);
CLANG_FORWARD_PROC_SYMBOL(public_4bb140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_4ba8a2 _public_4ba8a2
#define public_4ba8e0 _public_4ba8e0
#define public_4ba8f4 _public_4ba8f4
#define public_4ba908 _public_4ba908
#define public_4ba928 _public_4ba928
#define public_4ba92c _public_4ba92c
#define public_4ba969 _public_4ba969
#define public_4ba988 _public_4ba988
#define public_4ba997 _public_4ba997
#define public_4ba9a8 _public_4ba9a8
#define public_4ba9b3 _public_4ba9b3
#define public_4ba9be _public_4ba9be
#define public_4ba9d1 _public_4ba9d1
#define public_4baa0f _public_4baa0f
#define public_4baa19 _public_4baa19
#define public_4baa44 _public_4baa44
#define public_4baa55 _public_4baa55
#define public_4baa60 _public_4baa60
#define public_4baa6b _public_4baa6b
#define public_4baa8c _public_4baa8c
#define public_4baaa0 _public_4baaa0
#define public_4baaab _public_4baaab
#define public_4baab6 _public_4baab6
#define public_4bab0d _public_4bab0d
#define public_4bab20 _public_4bab20
#define public_4bab2b _public_4bab2b
#define public_4bab36 _public_4bab36
#define public_4babae _public_4babae
#define public_4babe3 _public_4babe3
#define public_4bac23 _public_4bac23
#define public_4bac58 _public_4bac58
#define public_4bac96 _public_4bac96
#define public_4baccb _public_4baccb
#define public_4bad09 _public_4bad09
#define public_4bad3e _public_4bad3e
#define public_4bad5a _public_4bad5a
#define public_4bad98 _public_4bad98
#define public_4bada7 _public_4bada7
#define public_4bae1a _public_4bae1a
#define public_4bae53 _public_4bae53
#define public_4baea5 _public_4baea5
#define public_4baeda _public_4baeda
#define public_4baf26 _public_4baf26
#define public_4baf52 _public_4baf52
#define public_4baf6d _public_4baf6d
#define public_4baf80 _public_4baf80
#define public_4baf8b _public_4baf8b
#define public_4baf96 _public_4baf96
#define public_4bafc4 _public_4bafc4
#define public_4bb00d _public_4bb00d
#define public_4bb05d _public_4bb05d
#define public_4bb07d _public_4bb07d
#define public_4bb083 _public_4bb083
#define public_4bb094 _public_4bb094
#define public_4bb0b0 _public_4bb0b0

PROC_DECLARE(0x4ba860, internal_4ba860, public_4ba860);
extern "C" NAKED register_t __cdecl internal_4ba860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0x20DC
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x20E8]
        mov edx, dword ptr ss : [esp+0x20E0]
        mov ecx, dword ptr ss : [esp+0x20E4]
        push ebx
        push esi
        lea esi, ds:[eax+eax]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        lea ebx, ds:[esi+ecx]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0xC], ebx
        jne public_4ba8a2
        pop esi
        mov word ptr ds : [ecx], ax
        pop ebx
        add esp, 0x20DC
        ret 
        public_4ba8a2 : nop
        mov edx, dword ptr ds : [public_67eca8]
        push ebp
        push edi
        push 0x1000
        lea ecx, ss:[esp+0xF0]
        push ecx
        push eax
        push edx
        lea ebp, ss:[esp+0xFC]
        call public_4347e0
        mov eax, dword ptr ss : [esp+0xFC]
        add esp, 0x10
        xor cl, cl
        test ax, ax
        mov edi, eax
        je public_4bb094
        lea esp, ss:[esp]
        public_4ba8e0 : nop
        add ebp, 2
        cmp di, 0x25
        mov dword ptr ss : [esp+0x10], ebp
        jne public_4ba8f4
        mov cl, 1
        jmp public_4bb083
        public_4ba8f4 : nop
        test cl, cl
        je public_4bb05d
        mov ax, word ptr ss : [ebp]
        xor ecx, ecx
        cmp ax, 0x30
        jb public_4ba92c
        public_4ba908 : nop
        cmp ax, 0x39
        ja public_4ba928
        cmp ecx, 0x40
        jge public_4ba928
        mov word ptr ss : [esp+ecx*2+0x6C], ax
        add ebp, 2
        xor eax, eax
        mov ax, word ptr ss : [ebp]
        inc ecx
        cmp ax, 0x30
        jae public_4ba908
        public_4ba928 : nop
        mov dword ptr ss : [esp+0x10], ebp
        public_4ba92c : nop
        lea eax, ss:[esp+0x6C]
        push eax
        mov word ptr ss : [esp+ecx*2+0x70], 0
        call dword ptr ds : [public_5c70b0]
        add esp, 4
        or esi, 0xFFFFFFFF
        cmp word ptr ss : [ebp], 0x76
        mov byte ptr ss : [esp+0x18], al
        jne public_4ba969
        mov cl, byte ptr ss : [ebp+2]
        cmp cl, 0x30
        jl public_4ba969
        cmp cl, 0x39
        jg public_4ba969
        movsx esi, cl
        add ebp, 4
        mov dword ptr ss : [esp+0x10], ebp
        sub esi, 0x30
        public_4ba969 : nop
        xor ecx, ecx
        mov cx, di
        add ecx, 0xFFFFFFDF
        cmp ecx, 0x52
        ja public_4bb07d
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_4bb0ec] @0x4ba97a*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_4bb0c8] @0x4ba981*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c0000000000b716
  JMPTB mov ecx, 0
  JMPTB public_4c0000000000b716 : nop
        je public_4bb00d
  JMPTB cmp ecx, 1
  JMPTB jne public_4c0000000000b712
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b712 : nop
        je public_4bb07d
  JMPTB cmp ecx, 2
  JMPTB jne public_4c0000000000b70e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b70e : nop
        je public_4bb07d
  JMPTB cmp ecx, 3
  JMPTB jne public_4c0000000000b70a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b70a : nop
        je public_4bb07d
  JMPTB cmp ecx, 4
  JMPTB jne public_4c0000000000b706
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b706 : nop
        je public_4bb07d
  JMPTB cmp ecx, 5
  JMPTB jne public_4c0000000000b702
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b702 : nop
        je public_4bb07d
  JMPTB cmp ecx, 6
  JMPTB jne public_4c0000000000b6fe
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6fe : nop
        je public_4bb07d
  JMPTB cmp ecx, 7
  JMPTB jne public_4c0000000000b6fa
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6fa : nop
        je public_4bb07d
  JMPTB cmp ecx, 8
  JMPTB jne public_4c0000000000b6f6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6f6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 9
  JMPTB jne public_4c0000000000b6f2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6f2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c0000000000b6ee
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6ee : nop
        je public_4bb07d
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c0000000000b6ea
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6ea : nop
        je public_4bb07d
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c0000000000b6e6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6e6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c0000000000b6e2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6e2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c0000000000b6de
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6de : nop
        je public_4bb07d
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c0000000000b6da
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6da : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x10
  JMPTB jne public_4c0000000000b6d6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6d6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x11
  JMPTB jne public_4c0000000000b6d2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6d2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x12
  JMPTB jne public_4c0000000000b6ce
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6ce : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x13
  JMPTB jne public_4c0000000000b6ca
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6ca : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x14
  JMPTB jne public_4c0000000000b6c6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6c6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x15
  JMPTB jne public_4c0000000000b6c2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6c2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x16
  JMPTB jne public_4c0000000000b6be
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6be : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x17
  JMPTB jne public_4c0000000000b6ba
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6ba : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x18
  JMPTB jne public_4c0000000000b6b6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6b6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x19
  JMPTB jne public_4c0000000000b6b2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6b2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x1A
  JMPTB jne public_4c0000000000b6ae
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6ae : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x1B
  JMPTB jne public_4c0000000000b6aa
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6aa : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x1C
  JMPTB jne public_4c0000000000b6a6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6a6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x1D
  JMPTB jne public_4c0000000000b6a2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b6a2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x1E
  JMPTB jne public_4c0000000000b69e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b69e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x1F
  JMPTB jne public_4c0000000000b69a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b69a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x20
  JMPTB jne public_4c0000000000b696
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b696 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x21
  JMPTB jne public_4c0000000000b692
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000b692 : nop
        je public_4ba997
  JMPTB cmp ecx, 0x22
  JMPTB jne public_4c0000000000b68e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b68e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x23
  JMPTB jne public_4c0000000000b68a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b68a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x24
  JMPTB jne public_4c0000000000b686
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b686 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x25
  JMPTB jne public_4c0000000000b682
  JMPTB mov ecx, 2
  JMPTB public_4c0000000000b682 : nop
        je public_4baa44
  JMPTB cmp ecx, 0x26
  JMPTB jne public_4c0000000000b67e
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000b67e : nop
        je public_4ba997
  JMPTB cmp ecx, 0x27
  JMPTB jne public_4c0000000000b67a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b67a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x28
  JMPTB jne public_4c0000000000b676
  JMPTB mov ecx, 3
  JMPTB public_4c0000000000b676 : nop
        je public_4baf6d
  JMPTB cmp ecx, 0x29
  JMPTB jne public_4c0000000000b672
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b672 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x2A
  JMPTB jne public_4c0000000000b66e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b66e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x2B
  JMPTB jne public_4c0000000000b66a
  JMPTB mov ecx, 4
  JMPTB public_4c0000000000b66a : nop
        je public_4bafc4
  JMPTB cmp ecx, 0x2C
  JMPTB jne public_4c0000000000b666
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b666 : nop
        je public_4ba988
  JMPTB cmp ecx, 0x2D
  JMPTB jne public_4c0000000000b662
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b662 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x2E
  JMPTB jne public_4c0000000000b65e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b65e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x2F
  JMPTB jne public_4c0000000000b65a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b65a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x30
  JMPTB jne public_4c0000000000b656
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b656 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x31
  JMPTB jne public_4c0000000000b652
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000b652 : nop
        je public_4ba997
  JMPTB cmp ecx, 0x32
  JMPTB jne public_4c0000000000b64e
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000b64e : nop
        je public_4ba997
  JMPTB cmp ecx, 0x33
  JMPTB jne public_4c0000000000b64a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b64a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x34
  JMPTB jne public_4c0000000000b646
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b646 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x35
  JMPTB jne public_4c0000000000b642
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b642 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x36
  JMPTB jne public_4c0000000000b63e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b63e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x37
  JMPTB jne public_4c0000000000b63a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b63a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x38
  JMPTB jne public_4c0000000000b636
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b636 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x39
  JMPTB jne public_4c0000000000b632
  JMPTB mov ecx, 6
  JMPTB public_4c0000000000b632 : nop
        je public_4bab0d
  JMPTB cmp ecx, 0x3A
  JMPTB jne public_4c0000000000b62e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b62e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x3B
  JMPTB jne public_4c0000000000b62a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b62a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x3C
  JMPTB jne public_4c0000000000b626
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b626 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x3D
  JMPTB jne public_4c0000000000b622
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b622 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x3E
  JMPTB jne public_4c0000000000b61e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b61e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x3F
  JMPTB jne public_4c0000000000b61a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b61a : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x40
  JMPTB jne public_4c0000000000b616
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b616 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x41
  JMPTB jne public_4c0000000000b612
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b612 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x42
  JMPTB jne public_4c0000000000b60e
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b60e : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x43
  JMPTB jne public_4c0000000000b60a
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000b60a : nop
        je public_4baa8c
  JMPTB cmp ecx, 0x44
  JMPTB jne public_4c0000000000b606
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b606 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x45
  JMPTB jne public_4c0000000000b602
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b602 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x46
  JMPTB jne public_4c0000000000b5fe
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5fe : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x47
  JMPTB jne public_4c0000000000b5fa
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5fa : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x48
  JMPTB jne public_4c0000000000b5f6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5f6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x49
  JMPTB jne public_4c0000000000b5f2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5f2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x4A
  JMPTB jne public_4c0000000000b5ee
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5ee : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x4B
  JMPTB jne public_4c0000000000b5ea
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5ea : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x4C
  JMPTB jne public_4c0000000000b5e6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5e6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x4D
  JMPTB jne public_4c0000000000b5e2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5e2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x4E
  JMPTB jne public_4c0000000000b5de
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5de : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x4F
  JMPTB jne public_4c0000000000b5da
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5da : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x50
  JMPTB jne public_4c0000000000b5d6
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5d6 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x51
  JMPTB jne public_4c0000000000b5d2
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b5d2 : nop
        je public_4bb07d
  JMPTB cmp ecx, 0x52
  JMPTB jne public_4c0000000000b5ce
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000b5ce : nop
        je public_4ba997
  JMPTB int 3
        public_4ba988 : nop
        mov cl, byte ptr ss : [esp+0x20FC]
        test cl, cl
        je public_4bb07d
        public_4ba997 : nop
        mov edx, dword ptr ss : [esp+0x20F0]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_4bb07d
        public_4ba9a8 : nop
        cmp word ptr ds : [ecx+8], di
        jne public_4ba9b3
        cmp byte ptr ds : [ecx+0xA], al
        je public_4ba9be
        public_4ba9b3 : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_4ba9a8
        jmp public_4bb07d
        public_4ba9be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, 2
        je public_4bb07d
        mov eax, dword ptr ss : [esp+0x20F4]
        public_4ba9d1 : nop
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebx
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push esi
        push edx
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_4baa0f
        push esi
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4ba9f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x4ba9ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4baa0f : nop
        mov ecx, dword ptr ss : [esp+0x20F4]
        lea edi, ds:[ecx+edi*2]
        public_4baa19 : nop
        cmp ebx, edi
        mov dword ptr ss : [esp+0x20F4], edi
        jne public_4bb07d
        sub edi, 2
        mov dword ptr ss : [esp+0x20F4], edi
        mov word ptr ds : [edi], 0
        add dword ptr ss : [esp+0x20F4], 2
        jmp public_4bb07d
        public_4baa44 : nop
        mov edx, dword ptr ss : [esp+0x20F0]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_4bb07d
        public_4baa55 : nop
        cmp word ptr ds : [ecx+8], di
        jne public_4baa60
        cmp byte ptr ds : [ecx+0xA], al
        je public_4baa6b
        public_4baa60 : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_4baa55
        jmp public_4bb07d
        public_4baa6b : nop
        test esi, esi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x20F4]
        jl public_4baccb
        imul esi, 0x64
        lea esi, ds:[edi+esi+0x202FA]
        jmp public_4bad5a
        public_4baa8c : nop
        mov ecx, dword ptr ss : [esp+0x20F0]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_4bb07d
        lea ecx, ds:[ecx]
        public_4baaa0 : nop
        cmp word ptr ds : [ecx+8], di
        jne public_4baaab
        cmp byte ptr ds : [ecx+0xA], al
        je public_4baab6
        public_4baaab : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_4baaa0
        jmp public_4bb07d
        public_4baab6 : nop
        mov edx, dword ptr ds : [ecx+4]
        push 0x1F
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        call public_4779a0
        lea ecx, ss:[esp+0x38]
        push ecx
        call dword ptr ds : [public_5c71c8]
        lea esi, ds:[eax+eax]
        mov eax, dword ptr ss : [esp+0x2104]
        lea edx, ds:[esi+eax]
        add esp, 0x10
        cmp edx, ebx
        jae public_4bb07d
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [public_5c70ac]
        mov eax, dword ptr ss : [esp+0x20FC]
        add esp, 8
        add eax, esi
        mov dword ptr ss : [esp+0x20F4], eax
        jmp public_4bb07d
        public_4bab0d : nop
        mov edx, dword ptr ss : [esp+0x20F0]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_4bb07d
        mov edi, edi
        public_4bab20 : nop
        cmp word ptr ds : [ecx+8], di
        jne public_4bab2b
        cmp byte ptr ds : [ecx+0xA], al
        je public_4bab36
        public_4bab2b : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_4bab20
        jmp public_4bb07d
        public_4bab36 : nop
        test esi, esi
        jge public_4bad3e
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, 0x40
        mov eax, dword ptr ss : [esp+0x20F4]
        jae public_4ba9d1
        mov edx, ebx
        sub edx, eax
        sar edx, 1
        push edx
        mov edi, esi
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        shr edi, 3
        push 0x331B
        and edi, 7
        and esi, 7
        push eax
        add edi, 0x506
        add esi, 0x514
        call public_4347e0
        mov ebp, eax
        add esp, 0x10
        test ebp, ebp
        jne public_4babae
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x331B
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bab99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x4baba3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4babae : nop
        mov edx, dword ptr ss : [esp+0x20F4]
        lea eax, ds:[edx+ebp*2]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20F4], eax
        jne public_4babe3
        sub eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20F4]
        add eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        public_4babe3 : nop
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebx
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push 1
        push edx
        call public_4347e0
        mov ebp, eax
        add esp, 0x10
        test ebp, ebp
        jne public_4bac23
        push 1
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bac09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x4bac13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4bac23 : nop
        mov ecx, dword ptr ss : [esp+0x20F4]
        lea eax, ds:[ecx+ebp*2]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20F4], eax
        jne public_4bac58
        sub eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20F4]
        add eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        public_4bac58 : nop
        mov edx, ebx
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push esi
        push eax
        call public_4347e0
        mov ebp, eax
        add esp, 0x10
        test ebp, ebp
        jne public_4bac96
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bac81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x4bac8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4bac96 : nop
        mov edx, dword ptr ss : [esp+0x20F4]
        lea eax, ds:[edx+ebp*2]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20F4], eax
        jne public_4baccb
        sub eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20F4]
        add eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        public_4baccb : nop
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebx
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push edi
        push edx
        call public_4347e0
        mov esi, eax
        add esp, 0x10
        test esi, esi
        jne public_4bad09
        push edi
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bacef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x4bacf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4bad09 : nop
        mov ecx, dword ptr ss : [esp+0x20F4]
        lea esi, ds:[ecx+esi*2]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20F4], esi
        jne public_4bb07d
        sub esi, 2
        mov dword ptr ss : [esp+0x20F4], esi
        mov word ptr ds : [esi], 0
        add dword ptr ss : [esp+0x20F4], 2
        jmp public_4bb07d
        public_4bad3e : nop
        mov eax, dword ptr ds : [ecx+4]
        imul esi, 0xC8
        cmp eax, 0x40
        jb public_4bada7
        lea esi, ds:[eax+esi+0x11349]
        mov eax, dword ptr ss : [esp+0x20F4]
        public_4bad5a : nop
        mov edx, ebx
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push esi
        push eax
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_4bad98
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bad83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x4bad8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4bad98 : nop
        mov edx, dword ptr ss : [esp+0x20F4]
        lea edi, ds:[edx+edi*2]
        jmp public_4baa19
        public_4bada7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_67eca8]
        mov edi, eax
        and eax, 7
        add eax, 0x514
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x20F4]
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        shr edi, 3
        add esi, 0x50FA0
        push esi
        and edi, 7
        push edx
        add edi, 0x506
        call public_4347e0
        mov ebp, eax
        add esp, 0x10
        test ebp, ebp
        jne public_4bae1a
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x28]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bae0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
/*FIXUP push offset public_5c94a8 @0x4bae0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4bae1a : nop
        mov edx, dword ptr ss : [esp+0x20F4]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+ebp*2]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20F4], eax
        jne public_4bae53
        sub eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20F4]
        add eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        public_4bae53 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push 1
        push edx
        call public_4347e0
        mov esi, eax
        add esp, 0x10
        test esi, esi
        jne public_4baea5
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x2C]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push 1
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bae95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
/*FIXUP push offset public_5c94a8 @0x4bae9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4baea5 : nop
        mov edx, dword ptr ss : [esp+0x20F4]
        lea eax, ds:[edx+esi*2]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20F4], eax
        jne public_4baeda
        sub eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20F4]
        add eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        public_4baeda : nop
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push ebx
        push edx
        call public_4347e0
        mov esi, eax
        add esp, 0x10
        test esi, esi
        jne public_4baf26
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x30]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4baf16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
/*FIXUP push offset public_5c94a8 @0x4baf1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4baf26 : nop
        mov edx, dword ptr ss : [esp+0x20F4]
        lea eax, ds:[edx+esi*2]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20F4], eax
        jne public_4baf52
        sub eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        mov word ptr ds : [eax], 0
        add dword ptr ss : [esp+0x20F4], 2
        public_4baf52 : nop
        push edi
        lea eax, ss:[esp+0x20F8]
        push ebp
        push eax
        call public_4bb140
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        jmp public_4bb07d
        public_4baf6d : nop
        mov ecx, dword ptr ss : [esp+0x20F0]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_4bb07d
        mov edi, edi
        public_4baf80 : nop
        cmp word ptr ds : [ecx+8], di
        jne public_4baf8b
        cmp byte ptr ds : [ecx+0xA], al
        je public_4baf96
        public_4baf8b : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_4baf80
        jmp public_4bb07d
        public_4baf96 : nop
        mov eax, dword ptr ds : [ecx+4]
        xor edx, edx
        test esi, esi
        setle dl
        dec edx
        and edx, esi
        imul edx, 0x64
        lea ecx, ds:[edx+eax+0x507D0]
        push ecx
        lea edx, ss:[esp+0x20F8]
        push ebx
        push edx
        call public_4bb140
        add esp, 0xC
        jmp public_4bb07d
        public_4bafc4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20F0]
        push edi
        push eax
        push ecx
        call public_4ba830
        add esp, 0xC
        test eax, eax
        je public_4bb07d
        mov eax, dword ptr ds : [eax+4]
        xor edx, edx
        test esi, esi
        setle dl
        dec edx
        and edx, esi
        imul edx, 0x64
        lea ecx, ds:[edx+eax+0x50BB8]
        push ecx
        lea edx, ss:[esp+0x20F8]
        push ebx
        push edx
        call public_4bb140
        add esp, 0xC
        jmp public_4bb07d
        public_4bb00d : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20F0]
        push edi
        push eax
        push ecx
        call public_4ba830
        add esp, 0xC
        test eax, eax
        je public_4bb07d
        mov edx, dword ptr ss : [esp+0x20FC]
        mov ecx, dword ptr ss : [esp+0x20F4]
        mov eax, dword ptr ds : [eax+4]
        push edx
        mov edx, ebx
        sub edx, ecx
        sar edx, 1
        push edx
        push ecx
        push eax
        call public_4ba860
        mov ecx, dword ptr ss : [esp+0x2104]
        lea edx, ds:[ecx+eax*2]
        add esp, 0x10
        mov dword ptr ss : [esp+0x20F4], edx
        jmp public_4bb07d
        public_4bb05d : nop
        mov eax, dword ptr ss : [esp+0x20F4]
        mov word ptr ds : [eax], di
        mov eax, dword ptr ss : [esp+0x20F4]
        add eax, 2
        mov dword ptr ss : [esp+0x20F4], eax
        mov word ptr ds : [eax], 0
        public_4bb07d : nop
        mov ebp, dword ptr ss : [esp+0x10]
        xor cl, cl
        public_4bb083 : nop
        mov di, word ptr ss : [ebp]
        test di, di
        jne public_4ba8e0
        mov esi, dword ptr ss : [esp+0x1C]
        public_4bb094 : nop
        mov eax, dword ptr ss : [esp+0x20F4]
        cmp eax, ebx
        pop edi
        pop ebp
        jne public_4bb0b0
        sub eax, 2
        mov dword ptr ss : [esp+0x20EC], eax
        mov word ptr ds : [eax], 0
        public_4bb0b0 : nop
        mov edx, dword ptr ss : [esp+0x20EC]
        mov eax, esi
        sub eax, ebx
        add eax, edx
        pop esi
        sar eax, 1
        pop ebx
        add esp, 0x20DC
        ret 
        UNREACHABLE_TRAP(0x4ba860)
        ASM_EXPORT_ENTRY_SINGLE(0x4bb07d, public_4bb07d)
    }
}

#undef public_4ba8a2
#undef public_4ba8e0
#undef public_4ba8f4
#undef public_4ba908
#undef public_4ba928
#undef public_4ba92c
#undef public_4ba969
#undef public_4ba988
#undef public_4ba997
#undef public_4ba9a8
#undef public_4ba9b3
#undef public_4ba9be
#undef public_4ba9d1
#undef public_4baa0f
#undef public_4baa19
#undef public_4baa44
#undef public_4baa55
#undef public_4baa60
#undef public_4baa6b
#undef public_4baa8c
#undef public_4baaa0
#undef public_4baaab
#undef public_4baab6
#undef public_4bab0d
#undef public_4bab20
#undef public_4bab2b
#undef public_4bab36
#undef public_4babae
#undef public_4babe3
#undef public_4bac23
#undef public_4bac58
#undef public_4bac96
#undef public_4baccb
#undef public_4bad09
#undef public_4bad3e
#undef public_4bad5a
#undef public_4bad98
#undef public_4bada7
#undef public_4bae1a
#undef public_4bae53
#undef public_4baea5
#undef public_4baeda
#undef public_4baf26
#undef public_4baf52
#undef public_4baf6d
#undef public_4baf80
#undef public_4baf8b
#undef public_4baf96
#undef public_4bafc4
#undef public_4bb00d
#undef public_4bb05d
#undef public_4bb07d
#undef public_4bb083
#undef public_4bb094
#undef public_4bb0b0

#pragma init_seg(compiler)
extern "C" void const* const public_4bb07d = __AsmFindLabelExport(&internal_4ba860, 0x4bb07d);
