#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_410ec0);
CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_411690);
CLANG_FORWARD_PROC_SYMBOL(public_411bc0);
CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_411c80);
CLANG_FORWARD_PROC_SYMBOL(public_411cd0);
CLANG_FORWARD_PROC_SYMBOL(public_411d90);
CLANG_FORWARD_PROC_SYMBOL(public_411e90);
CLANG_FORWARD_PROC_SYMBOL(public_411f00);
CLANG_FORWARD_PROC_SYMBOL(public_411f70);
CLANG_FORWARD_PROC_SYMBOL(public_419760);

#define public_411736 _public_411736
#define public_41174b _public_41174b
#define public_41177d _public_41177d
#define public_411838 _public_411838
#define public_411868 _public_411868
#define public_41187e _public_41187e
#define public_411894 _public_411894
#define public_4118b0 _public_4118b0
#define public_4118e1 _public_4118e1
#define public_4118ff _public_4118ff
#define public_411917 _public_411917
#define public_41191a _public_41191a
#define public_41192e _public_41192e
#define public_411989 _public_411989
#define public_411a2c _public_411a2c
#define public_411a5c _public_411a5c
#define public_411a84 _public_411a84
#define public_411aba _public_411aba
#define public_411ad8 _public_411ad8
#define public_411b18 _public_411b18
#define public_411b36 _public_411b36
#define public_411b90 _public_411b90

PROC_DECLARE(0x411690, internal_411690, public_411690);
extern "C" NAKED register_t __cdecl internal_411690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xA8
        push ebx
        mov ebx, dword ptr ss : [esp+0xB0]
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5c8b2c @0x4116a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b2c
        push ebx
        mov esi, ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_41174b
        mov edi, dword ptr ss : [esp+0xBC]
        push 2
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x24]
        push 1
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x30]
        push 0
        push edi
        call dword ptr ds : [public_5c6064]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ecx
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi+0x98]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [esi+0xB0]
        add esp, 0x18
        cmp ecx, 3
        je public_411736
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x40], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x44], ecx
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ds : [esi+0x48]
        public_411736 : nop
        mov ecx, esi
        call public_410ec0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_41174b : nop
        push offset public_5c8b24 @0x41174b*/
  FIXUP public_41174b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b24
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_41177d
        mov edx, dword ptr ss : [esp+0xBC]
        push eax
        push edx
        call dword ptr ds : [public_5c6064]
        add esp, 8
        pop edi
        fstp dword ptr ds : [esi+0x58]
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_41177d : nop
        push offset public_5c7f6c @0x41177d*/
  FIXUP public_41177d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411838
        mov edi, dword ptr ss : [esp+0xBC]
        push 2
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x28]
        push 1
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x2C]
        push 0
        push edi
        call dword ptr ds : [public_5c6064]
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x18
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x10]
        push edx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        call public_411bc0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_411c80
        mov edi, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xA4]
        mov edx, ecx
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [esi+0xAC]
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        call public_410ec0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_411838 : nop
        push offset public_5c8b1c @0x411838*/
  FIXUP public_411838 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b1c
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_41192e
        mov ebx, dword ptr ss : [esp+0xBC]
/*FIXUP push offset public_5c8b14 @0x411852*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b14
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411868
        mov eax, 0xFFFFFFFE
        jmp public_4118e1
/*FIXUP public_411868 : nop
        push offset public_5c8b0c @0x411868*/
  FIXUP public_411868 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b0c
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_41187e
        mov eax, 1
        jmp public_4118e1
/*FIXUP public_41187e : nop
        push offset public_5c8b04 @0x41187e*/
  FIXUP public_41187e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b04
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411894
        mov eax, 2
        jmp public_4118e1
/*FIXUP public_411894 : nop
        push offset public_5c8af8 @0x411894*/
  FIXUP public_411894 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8af8
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_4118b0
        mov eax, 3
        jmp public_4118e1
        lea ebx, ds:[ebx]
        public_4118b0 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x14]
        call public_411c50
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x2EC
/*FIXUP push offset public_5c8a08 @0x4118ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a08
/*FIXUP push offset public_5c8ac0 @0x4118d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ac0
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        public_4118e1 : nop
        mov bl, byte ptr ds : [esi+0xB4]
        and bl, 0xFE
        lea ecx, ds:[eax+2]
        cmp ecx, 5
        mov byte ptr ds : [esi+0xB4], bl
        ja public_4118ff
/*FIXUP jmp dword ptr ds : [ecx*4+public_411ba0] @0x4118f8*/
  JMPTB cmp ecx, 0
  JMPTB je public_41191a
  JMPTB cmp ecx, 1
  JMPTB je public_4118ff
  JMPTB cmp ecx, 2
  JMPTB je public_4118ff
  JMPTB cmp ecx, 3
  JMPTB je public_411917
  JMPTB cmp ecx, 4
  JMPTB je public_411917
  JMPTB cmp ecx, 5
  JMPTB je public_411917
  JMPTB int 3
        public_4118ff : nop
        pop edi
        mov dword ptr ds : [esi+0xB0], 0xFFFFFFFF
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
        public_411917 : nop
        mov dword ptr ds : [esi+0xC], eax
        public_41191a : nop
        pop edi
        mov dword ptr ds : [esi+0xB0], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_41192e : nop
        push offset public_5c8ab4 @0x41192e*/
  FIXUP public_41192e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ab4
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411989
        mov edi, dword ptr ss : [esp+0xBC]
        push 2
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x24]
        push 1
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x1C]
        push 0
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ds : [esi+0x60]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0x18
        pop edi
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x68], ecx
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_411989 : nop
        push offset public_5c8aa8 @0x411989*/
  FIXUP public_411989 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8aa8
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411a5c
        mov edi, dword ptr ss : [esp+0xBC]
        push 2
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x24]
        push 1
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x1C]
        push 0
        push edi
        call dword ptr ds : [public_5c6064]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x28]
        add esp, 0x18
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        cmp dword ptr ds : [esi+0xB0], 1
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        je public_411a2c
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ds : [esi+0x54]
        mov dword ptr ds : [esi+0x4C], ecx
        mov dword ptr ds : [esi+0x50], edx
        public_411a2c : nop
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_411350
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ds:[esi+0x74]
        call public_411f70
        mov ecx, esi
        call public_410ec0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_411a5c : nop
        push offset public_5c8a98 @0x411a5c*/
  FIXUP public_411a5c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a98
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411ad8
        mov ecx, dword ptr ds : [esi+0xB8]
        test ecx, ecx
        je public_411a84
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x24]
        mov dword ptr ds : [esi+0xB8], 0
        public_411a84 : nop
        mov edi, dword ptr ss : [esp+0xBC]
        push edi
        call public_419760
        add esp, 4
        test eax, eax
        je public_411aba
        mov dword ptr ds : [esi+0xB8], eax
        mov al, byte ptr ds : [esi+0xB4]
        or al, 2
        pop edi
        mov byte ptr ds : [esi+0xB4], al
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
        public_411aba : nop
        push 0
/*FIXUP push offset public_5c8a7c @0x411abc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a7c
        push edi
        push 0
        call dword ptr ds : [public_5c72d4]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_411ad8 : nop
        push offset public_5c8a70 @0x411ad8*/
  FIXUP public_411ad8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a70
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411b36
        mov edi, dword ptr ss : [esp+0xBC]
        mov ebx, dword ptr ds : [public_5c6060]
        push 1
        push edi
        call ebx
        add esp, 8
        test eax, eax
        je public_411b18
        cmp byte ptr ds : [eax], 0
        je public_411b18
        push 0
        push eax
        call public_411cd0
        add esp, 4
        push eax
        mov ecx, esi
        call public_4110c0
        public_411b18 : nop
        push 0
        push edi
        call ebx
        add esp, 8
        push eax
        mov ecx, esi
        call public_411d90
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
/*FIXUP public_411b36 : nop
        push offset public_5c8a64 @0x411b36*/
  FIXUP public_411b36 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a64
        push ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_411b90
        mov edi, dword ptr ss : [esp+0xBC]
        push eax
        push edi
        call dword ptr ds : [public_5c6060]
        add esp, 8
        push eax
        lea ecx, ss:[esp+0x34]
        call public_411f00
        push 1
        push edi
        call dword ptr ds : [public_5c6064]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, esi
        call public_411e90
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xA8
        ret 8
        public_411b90 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xA8
        ret 8
        UNREACHABLE_TRAP(0x411690)
        ASM_EXPORT_ENTRY_SINGLE(0x411917, public_411917)
    }
}

#undef public_411736
#undef public_41174b
#undef public_41177d
#undef public_411838
#undef public_411868
#undef public_41187e
#undef public_411894
#undef public_4118b0
#undef public_4118e1
#undef public_4118ff
#undef public_411917
#undef public_41191a
#undef public_41192e
#undef public_411989
#undef public_411a2c
#undef public_411a5c
#undef public_411a84
#undef public_411aba
#undef public_411ad8
#undef public_411b18
#undef public_411b36
#undef public_411b90

#pragma init_seg(compiler)
extern "C" void const* const public_411917 = __AsmFindLabelExport(&internal_411690, 0x411917);
