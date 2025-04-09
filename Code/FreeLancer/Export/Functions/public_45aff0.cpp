#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45aff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);

#define public_45b020 _public_45b020
#define public_45b039 _public_45b039
#define public_45b040 _public_45b040
#define public_45b047 _public_45b047
#define public_45b04e _public_45b04e
#define public_45b055 _public_45b055
#define public_45b057 _public_45b057
#define public_45b0fd _public_45b0fd
#define public_45b16e _public_45b16e
#define public_45b183 _public_45b183

PROC_DECLARE(0x45aff0, internal_45aff0, public_45aff0);
extern "C" NAKED register_t __cdecl internal_45aff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x80
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi+0x338], 1
        xor ebx, ebx
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_45b020
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ebx, eax
        public_45b020 : nop
        lea eax, ds:[ebx-0x30001]
        cmp eax, 0x17
        ja public_45b055
/*FIXUP movzx eax, byte ptr ds : [eax+public_45b1a0] @0x45b02b*/
/*FIXUP jmp dword ptr ds : [eax*4+public_45b190] @0x45b032*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a6a4
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a6a4 : nop
        je public_45b039
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a6a0
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a6a0 : nop
        je public_45b039
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a69c
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a69c : nop
        je public_45b039
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a698
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a698 : nop
        je public_45b039
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a694
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a694 : nop
        je public_45b039
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a690
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a690 : nop
        je public_45b040
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a68c
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a68c : nop
        je public_45b040
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a688
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a688 : nop
        je public_45b040
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a684
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a684 : nop
        je public_45b040
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a680
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a680 : nop
        je public_45b040
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a67c
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a67c : nop
        je public_45b040
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000a678
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a678 : nop
        je public_45b047
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000a674
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a674 : nop
        je public_45b047
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000a670
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a670 : nop
        je public_45b047
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000a66c
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a66c : nop
        je public_45b047
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000a668
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a668 : nop
        je public_45b047
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000a664
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a664 : nop
        je public_45b047
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000a660
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a660 : nop
        je public_45b04e
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000a65c
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a65c : nop
        je public_45b04e
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000a658
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a658 : nop
        je public_45b04e
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000a654
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a654 : nop
        je public_45b04e
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000a650
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a650 : nop
        je public_45b04e
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000a64c
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a64c : nop
        je public_45b04e
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000a648
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a648 : nop
        je public_45b04e
  JMPTB int 3
        public_45b039 : nop
        mov ebp, 0x4E1
        jmp public_45b057
        public_45b040 : nop
        mov ebp, 0x4E2
        jmp public_45b057
        public_45b047 : nop
        mov ebp, 0x4E4
        jmp public_45b057
        public_45b04e : nop
        mov ebp, 0x4E3
        jmp public_45b057
        public_45b055 : nop
        xor ebp, ebp
        public_45b057 : nop
        test ebx, ebx
        je public_45b183
        test ebp, ebp
        mov edx, dword ptr ds : [public_67eca8]
        lea ecx, ss:[esp+0xC]
        je public_45b0fd
        push esi
        push 0x80
        push ecx
        push 0x55E
        push edx
        call public_4347e0
        mov eax, dword ptr ds : [public_6119f8]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
/*FIXUP push offset public_66dc60 @0x45b08e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea esi, ds : [eax*2+public_66dc60]
        mov eax, dword ptr ds : [public_67eca8]
        push ebx
        push eax
        call public_4347e0
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        push esi
        push ebp
        push ecx
        call public_4347e0
        push esi
/*FIXUP push offset public_66dc60 @0x45b0c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea edx, ss:[esp+0x48]
        push edx
/*FIXUP push offset public_66fc60 @0x45b0ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        add esp, 0x40
/*FIXUP push offset public_66fc60 @0x45b0d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ds : [edi+0x32C]
        mov eax, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x45b0ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        pop esi
        jmp public_45b16e
        public_45b0fd : nop
        push 0x80
        push ecx
        push 0x55D
        push edx
        call public_4347e0
        mov eax, dword ptr ds : [public_6119f8]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        mov eax, dword ptr ds : [public_67eca8]
/*FIXUP push offset public_66dc60 @0x45b11e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push ebx
        push eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x45b12a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_66fc60 @0x45b134*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        add esp, 0x2C
/*FIXUP push offset public_66fc60 @0x45b142*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ds : [edi+0x32C]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x45b157*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ds : [edi+0x334], 0x40000000
        public_45b16e : nop
        mov al, byte ptr ss : [esp+0x90]
        test al, al
        je public_45b183
        mov dword ptr ds : [edi+0x334], 0x40000000
        public_45b183 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x80
        ret 4
        UNREACHABLE_TRAP(0x45aff0)
        ASM_EXPORT_ENTRY_SINGLE(0x45b04e, public_45b04e)
    }
}

#undef public_45b020
#undef public_45b039
#undef public_45b040
#undef public_45b047
#undef public_45b04e
#undef public_45b055
#undef public_45b057
#undef public_45b0fd
#undef public_45b16e
#undef public_45b183

#pragma init_seg(compiler)
extern "C" void const* const public_45b04e = __AsmFindLabelExport(&internal_45aff0, 0x45b04e);
