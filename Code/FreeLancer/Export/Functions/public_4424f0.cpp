#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43e600);
CLANG_FORWARD_PROC_SYMBOL(public_441ea0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_44252b _public_44252b
#define public_442540 _public_442540
#define public_442551 _public_442551
#define public_44255e _public_44255e
#define public_44257b _public_44257b
#define public_4425d0 _public_4425d0
#define public_4425f4 _public_4425f4
#define public_442618 _public_442618
#define public_442637 _public_442637
#define public_442654 _public_442654
#define public_442659 _public_442659
#define public_442665 _public_442665
#define public_44267e _public_44267e
#define public_442688 _public_442688
#define public_442692 _public_442692
#define public_44269a _public_44269a
#define public_4426c7 _public_4426c7
#define public_4426cd _public_4426cd

PROC_DECLARE(0x4424f0, internal_4424f0, public_4424f0);
extern "C" NAKED register_t __cdecl internal_4424f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x30
        push ebx
        push esi
        push edi
/*FIXUP push offset public_5cb548 @0x4424f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        je public_4426cd
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov edi, eax
        test edi, edi
        je public_4426cd
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        je public_44252b
        mov ecx, edi
        call public_43e600
        public_44252b : nop
        mov ecx, dword ptr ds : [edi+0x380]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_4426cd
        nop 
        lea esp, ss:[esp]
        public_442540 : nop
        mov dl, byte ptr ds : [eax+9]
        test dl, dl
        lea esi, ds:[eax+8]
        jne public_442551
        mov dl, byte ptr ds : [esi+0x20]
        test dl, dl
        jne public_44255e
        public_442551 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_442540
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        public_44255e : nop
        mov eax, dword ptr ds : [esi+0x30]
        add eax, 0xFFFFFFFE
        cmp eax, 0xA
        ja public_4426cd
/*FIXUP movzx eax, byte ptr ds : [eax+public_4426dc] @0x44256d*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4426d4] @0x442574*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a43d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a43d : nop
        je public_44257b
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a439
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a439 : nop
        je public_44257b
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a435
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a435 : nop
        je public_4426cd
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a431
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a431 : nop
        je public_4426cd
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a42d
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a42d : nop
        je public_4426cd
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a429
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a429 : nop
        je public_44257b
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a425
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a425 : nop
        je public_4426cd
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a421
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a421 : nop
        je public_4426cd
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a41d
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a41d : nop
        je public_4426cd
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a419
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a419 : nop
        je public_4426cd
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a415
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a415 : nop
        je public_44257b
  JMPTB int 3
        public_44257b : nop
        lea ecx, ds:[edi+0x32C]
        call public_55e280
        test al, al
        jne public_4426c7
        lea ebx, ds:[edi+0x34C]
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_4426c7
        push 0x1B
        mov dword ptr ds : [edi+0x3EC], esi
        call public_5645c0
        mov eax, dword ptr ds : [esi+0x30]
        add eax, 0xFFFFFFFE
        add esp, 4
        cmp eax, 0xA
        ja public_442665
/*FIXUP movzx ecx, byte ptr ds : [eax+public_4426fc] @0x4425c2*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_4426e8] @0x4425c9*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_442618
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_442637
  JMPTB cmp eax, 2
  JMPTB mov ecx, 4
  JMPTB je public_442665
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_442665
  JMPTB cmp eax, 4
  JMPTB mov ecx, 4
  JMPTB je public_442665
  JMPTB cmp eax, 5
  JMPTB mov ecx, 2
  JMPTB je public_4425f4
  JMPTB cmp eax, 6
  JMPTB mov ecx, 4
  JMPTB je public_442665
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_442665
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_442665
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_442665
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 3
  JMPTB je public_4425d0
  JMPTB int 3
        public_4425d0 : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0xBF8CCCCD
/*FIXUP push offset public_5cb748 @0x4425ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb748
        jmp public_442659
        public_4425f4 : nop
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0xBDB020C5
        mov dword ptr ss : [esp+0x24], 0xBFA4DD2F
/*FIXUP push offset public_5cb70c @0x442611*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb70c
        jmp public_442659
        public_442618 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x2C], 0xBFBFBE77
        push ecx
        jmp public_442654
        public_442637 : nop
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0xBDCCCCCD
        mov dword ptr ss : [esp+0x38], 0xBFBFBE77
        push edx
/*FIXUP public_442654 : nop
        push offset public_5cb6d8 @0x442654*/
  FIXUP public_442654 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6d8
        public_442659 : nop
        mov ecx, edi
        push 0x3F800000
        call public_441ea0
        public_442665 : nop
        mov esi, dword ptr ds : [esi+0x30]
        lea eax, ds:[esi-2]
        cmp eax, 0xA
        ja public_442692
/*FIXUP movzx eax, byte ptr ds : [eax+public_442714] @0x442670*/
/*FIXUP jmp dword ptr ds : [eax*4+public_442708] @0x442677*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a490
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a490 : nop
        je public_44267e
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a48c
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a48c : nop
        je public_44267e
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a488
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a488 : nop
        je public_442692
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a484
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a484 : nop
        je public_442692
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a480
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a480 : nop
        je public_442692
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a47c
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a47c : nop
        je public_442688
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a478
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a478 : nop
        je public_442692
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a474
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a474 : nop
        je public_442692
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a470
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a470 : nop
        je public_442692
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a46c
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a46c : nop
        je public_442692
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a468
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a468 : nop
        je public_44267e
  JMPTB int 3
        public_44267e : nop
        mov dword ptr ss : [esp+0x40], 0x3DA3D70A
        jmp public_44269a
        public_442688 : nop
        mov dword ptr ss : [esp+0x40], 0x3D4CCCCD
        jmp public_44269a
        public_442692 : nop
        mov dword ptr ss : [esp+0x40], 0x3F800000
        public_44269a : nop
        mov ecx, dword ptr ds : [public_5cb4d0]
        push ecx
        mov ecx, ebx
        call public_55e590
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi+0x3E8]
        push edx
        push 0x3F800000
        push eax
        mov ecx, ebx
        call public_55e360
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        public_4426c7 : nop
        mov dword ptr ds : [edi+0x3F0], esi
        public_4426cd : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x4424f0)
        ASM_EXPORT_ENTRY_FIRST(0x442665, public_442665)
        ASM_EXPORT_ENTRY(0x442692, public_442692)
        ASM_EXPORT_ENTRY_LAST(0x4426cd, public_4426cd)
    }
}

#undef public_44252b
#undef public_442540
#undef public_442551
#undef public_44255e
#undef public_44257b
#undef public_4425d0
#undef public_4425f4
#undef public_442618
#undef public_442637
#undef public_442654
#undef public_442659
#undef public_442665
#undef public_44267e
#undef public_442688
#undef public_442692
#undef public_44269a
#undef public_4426c7
#undef public_4426cd

#pragma init_seg(compiler)
extern "C" void const* const public_442665 = __AsmFindLabelExport(&internal_4424f0, 0x442665);
extern "C" void const* const public_442692 = __AsmFindLabelExport(&internal_4424f0, 0x442692);
extern "C" void const* const public_4426cd = __AsmFindLabelExport(&internal_4424f0, 0x4426cd);
