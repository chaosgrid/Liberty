#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6265900);
CLANG_FORWARD_PROC_SYMBOL(public_626a640);
CLANG_FORWARD_PROC_SYMBOL(public_6271490);
CLANG_FORWARD_PROC_SYMBOL(public_62714f0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63104c0);
CLANG_FORWARD_PROC_SYMBOL(public_63104e0);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_633c120);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_63925fe);

#define public_6265990 _public_6265990
#define public_62659c1 _public_62659c1
#define public_6265a22 _public_6265a22
#define public_6265a51 _public_6265a51
#define public_6265a7f _public_6265a7f
#define public_6265ab0 _public_6265ab0
#define public_6265af0 _public_6265af0
#define public_6265b14 _public_6265b14
#define public_6265b38 _public_6265b38
#define public_6265b5a _public_6265b5a
#define public_6265b7c _public_6265b7c
#define public_6265ba0 _public_6265ba0
#define public_6265bc2 _public_6265bc2
#define public_6265c1b _public_6265c1b
#define public_6265cc3 _public_6265cc3
#define public_6265d02 _public_6265d02
#define public_6265d20 _public_6265d20
#define public_6265d55 _public_6265d55
#define public_6265d69 _public_6265d69
#define public_6265d77 _public_6265d77
#define public_6265d9f _public_6265d9f
#define public_6265e0f _public_6265e0f
#define public_6265e20 _public_6265e20
#define public_6265e35 _public_6265e35
#define public_6265e5a _public_6265e5a
#define public_6265e7f _public_6265e7f
#define public_6265e88 _public_6265e88
#define public_6265eee _public_6265eee
#define public_6265eff _public_6265eff
#define public_6265f14 _public_6265f14
#define public_6265f33 _public_6265f33
#define public_6265f58 _public_6265f58
#define public_6265f61 _public_6265f61

PROC_DECLARE(0x6265900, internal_6265900, public_6265900);
extern "C" NAKED register_t __cdecl internal_6265900()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_63925fe @0x6265908*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63925fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16EC
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_639905c]
        mov edx, dword ptr ss : [esp+0x16FC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x98]
        push eax
        mov dword ptr ss : [esp+0x30], edi
        call public_6302df0
        add esp, 0xC
        lea ecx, ss:[esp+0x194]
        call public_630f660
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x94]
        push ecx
        lea ecx, ss:[esp+0x19C]
        mov dword ptr ss : [esp+0x170C], ebx
        call public_630f9b0
        test al, al
        je public_6265d77
        lea ecx, ss:[esp+0x194]
        call public_6310070
        test al, al
        je public_6265d69
        nop 
/*FIXUP public_6265990 : nop
        push offset public_6399778 @0x6265990*/
  FIXUP public_6265990 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399778
        lea ecx, ss:[esp+0x198]
        call public_63103c0
        test al, al
        je public_6265d20
        lea ecx, ss:[esp+0x194]
        mov dword ptr ss : [esp+0x10], ebx
        call public_6310170
        test al, al
        je public_6265d55
/*FIXUP public_62659c1 : nop
        push offset public_6399770 @0x62659c1*/
  FIXUP public_62659c1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399770
        lea ecx, ss:[esp+0x198]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x194]
        je public_6265a7f
        call public_6310b70
        mov esi, eax
        push esi
        call public_633c120
        add esp, 4
        cmp eax, ebx
        jne public_6265a22
        lea edx, ss:[esp+0x90]
        push edx
        push esi
        push 0x153
/*FIXUP push offset public_6399484 @0x6265a03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
        mov eax, 0x100002
/*FIXUP push offset public_6399728 @0x6265a0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399728
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_6265d02
        public_6265a22 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        xor esi, esi
        call public_6301640
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, eax
        je public_6265a51
        mov esi, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6265d02
        public_6265a51 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x1E8
/*FIXUP push offset public_6399484 @0x6265a61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
        mov eax, 0x100001
/*FIXUP push offset public_63996fc @0x6265a6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63996fc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6265d02
/*FIXUP public_6265a7f : nop
        push offset public_63996f0 @0x6265a7f*/
  FIXUP public_6265a7f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63996f0
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x194]
        je public_6265cc3
        push ebx
        xor esi, esi
        call public_6310a30
        push eax
        call public_62714f0
        add esp, 4
        cmp eax, ebx
        je public_6265ab0
        mov esi, dword ptr ds : [eax+0x48]
        public_6265ab0 : nop
        xor edi, edi
        push 1
        lea ecx, ss:[esp+0x198]
        mov dword ptr ss : [esp+0x1C], ebx
        xor ebp, ebp
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x18], 0xBF800000
        call public_6310560
        test al, al
        jne public_6265af0
        push 1
        lea ecx, ss:[esp+0x198]
        call public_63108f0
        fstp dword ptr ss : [esp+0x1C]
        public_6265af0 : nop
        push 2
        lea ecx, ss:[esp+0x198]
        call public_6310560
        test al, al
        jne public_6265b14
        push 2
        lea ecx, ss:[esp+0x198]
        call public_63108f0
        fstp dword ptr ss : [esp+0x14]
        public_6265b14 : nop
        push 3
        lea ecx, ss:[esp+0x198]
        call public_6310560
        test al, al
        jne public_6265b38
        push 3
        lea ecx, ss:[esp+0x198]
        call public_63107c0
        mov dword ptr ss : [esp+0x18], eax
        public_6265b38 : nop
        push 4
        lea ecx, ss:[esp+0x198]
        call public_6310560
        test al, al
        jne public_6265b5a
        push 4
        lea ecx, ss:[esp+0x198]
        call public_63107c0
        mov ebp, eax
        public_6265b5a : nop
        push 5
        lea ecx, ss:[esp+0x198]
        call public_6310560
        test al, al
        jne public_6265b7c
        push 5
        lea ecx, ss:[esp+0x198]
        call public_63107c0
        mov edi, eax
        public_6265b7c : nop
        push 6
        lea ecx, ss:[esp+0x198]
        call public_6310560
        test al, al
        jne public_6265ba0
        push 6
        lea ecx, ss:[esp+0x198]
        call public_63108f0
        fstp dword ptr ss : [esp+0x20]
        public_6265ba0 : nop
        push 7
        lea ecx, ss:[esp+0x198]
        call public_6310560
        test al, al
        jne public_6265bc2
        push 7
        lea ecx, ss:[esp+0x198]
        call public_63108f0
        fstp st(0)
        public_6265bc2 : nop
        xor ebx, ebx
        cmp esi, ebx
        je public_6265d02
        cmp dword ptr ss : [esp+0x10], ebx
        je public_6265d02
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_6265c1b
        cmp ebp, ebx
        jne public_6265c1b
        cmp edi, ebx
        jne public_6265c1b
        fld dword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x44
        jp public_6265c1b
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_6265c1b
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x44
        jnp public_6265d02
        public_6265c1b : nop
        push esi
        call public_6271490
        fld dword ptr ds : [eax+0x58]
        fmul dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ss : [esp+0x30], esi
        call public_6391dae
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x70], esi
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x38], eax
        mov ecx, 7
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x74]
        lea eax, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0xBF800000
        rep movsd
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea ecx, ds:[edx+0x10]
        mov dword ptr ss : [esp+0x44], ebp
        call public_626a640
        mov eax, dword ptr ds : [eax]
        lea edi, ds:[eax+0x10]
        mov ecx, 7
        lea esi, ss:[esp+0x30]
        rep movsd
        jmp public_6265d02
        public_6265cc3 : nop
        mov esi, 0x100002
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x198]
        call public_63104e0
        push eax
        lea ecx, ss:[esp+0x19C]
        call public_63104c0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x1C2
/*FIXUP push offset public_6399484 @0x6265cf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_6399698 @0x6265cf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399698
        push esi
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6265d02 : nop
        lea ecx, ss:[esp+0x194]
        call public_6310170
        test al, al
        mov edi, dword ptr ss : [esp+0x24]
        jne public_62659c1
        jmp public_6265d55
        lea esp, ss:[esp]
        public_6265d20 : nop
        lea ecx, ss:[esp+0x90]
        push ecx
        lea ecx, ss:[esp+0x198]
        mov esi, 0x100002
        call public_63104c0
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x1CA
/*FIXUP push offset public_6399484 @0x6265d45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_6399648 @0x6265d4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399648
        push esi
        call dword ptr ds : [edx]
        add esp, 0x18
        public_6265d55 : nop
        lea ecx, ss:[esp+0x194]
        call public_6310070
        test al, al
        jne public_6265990
        public_6265d69 : nop
        lea ecx, ss:[esp+0x194]
        call public_630f770
        jmp public_6265d9f
        public_6265d77 : nop
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x90]
        push ecx
        push 0x1D2
/*FIXUP push offset public_6399484 @0x6265d8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
        mov eax, 0x100001
/*FIXUP push offset public_639960c @0x6265d94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639960c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6265d9f : nop
        lea eax, ss:[esp+0x15BC]
        mov dword ptr ss : [esp+0x1704], 1
        mov dword ptr ss : [esp+0x28], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x15C4]
        mov byte ptr ss : [esp+0x170C], 2
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x15CC], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6399138]
        mov esi, dword ptr ds : [public_639913c]
        je public_6265e35
        cmp dword ptr ss : [esp+0x15D0], ebx
        je public_6265e20
        mov eax, dword ptr ss : [esp+0x15D4]
        cmp eax, ebx
        je public_6265e0f
        push eax
        call ebp
        mov dword ptr ss : [esp+0x15D4], ebx
        mov dword ptr ss : [esp+0x15D8], ebx
        public_6265e0f : nop
        mov eax, dword ptr ss : [esp+0x15D0]
        push eax
        call esi
        mov dword ptr ss : [esp+0x15D0], ebx
        public_6265e20 : nop
        mov ecx, dword ptr ss : [esp+0x15CC]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x15CC], 0xFFFFFFFF
        public_6265e35 : nop
        mov eax, dword ptr ss : [esp+0x15D4]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_639932c]
        je public_6265e5a
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x15D4], ebx
        mov dword ptr ss : [esp+0x15D8], ebx
        public_6265e5a : nop
        mov eax, dword ptr ss : [esp+0x15C0]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x15DC], ebx
        je public_6265e88
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6265e7f
        cmp cl, 0xFF
        je public_6265e7f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6265e88
        public_6265e7f : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6265e88 : nop
        mov dword ptr ss : [esp+0x15C0], ebx
        mov dword ptr ss : [esp+0x15C4], ebx
        mov dword ptr ss : [esp+0x15C8], ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x19C]
        mov dword ptr ss : [esp+0x170C], 3
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x1A4], 0xFFFFFFFF
        je public_6265f14
        cmp dword ptr ss : [esp+0x1A8], ebx
        je public_6265eff
        mov eax, dword ptr ss : [esp+0x1AC]
        cmp eax, ebx
        je public_6265eee
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1AC], ebx
        mov dword ptr ss : [esp+0x1B0], ebx
        public_6265eee : nop
        mov ecx, dword ptr ss : [esp+0x1A8]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1A8], ebx
        public_6265eff : nop
        mov edx, dword ptr ss : [esp+0x1A4]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1A4], 0xFFFFFFFF
        public_6265f14 : nop
        mov eax, dword ptr ss : [esp+0x1AC]
        cmp eax, ebx
        je public_6265f33
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1AC], ebx
        mov dword ptr ss : [esp+0x1B0], ebx
        public_6265f33 : nop
        mov eax, dword ptr ss : [esp+0x198]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1B4], ebx
        je public_6265f61
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6265f58
        cmp cl, 0xFF
        je public_6265f58
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6265f61
        public_6265f58 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6265f61 : nop
        mov ecx, dword ptr ss : [esp+0x16FC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16F8
        ret 4
        UNREACHABLE_TRAP(0x6265900)
    }
}

#undef public_6265990
#undef public_62659c1
#undef public_6265a22
#undef public_6265a51
#undef public_6265a7f
#undef public_6265ab0
#undef public_6265af0
#undef public_6265b14
#undef public_6265b38
#undef public_6265b5a
#undef public_6265b7c
#undef public_6265ba0
#undef public_6265bc2
#undef public_6265c1b
#undef public_6265cc3
#undef public_6265d02
#undef public_6265d20
#undef public_6265d55
#undef public_6265d69
#undef public_6265d77
#undef public_6265d9f
#undef public_6265e0f
#undef public_6265e20
#undef public_6265e35
#undef public_6265e5a
#undef public_6265e7f
#undef public_6265e88
#undef public_6265eee
#undef public_6265eff
#undef public_6265f14
#undef public_6265f33
#undef public_6265f58
#undef public_6265f61
