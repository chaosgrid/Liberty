#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d21450);

#define public_6d2151c _public_6d2151c
#define public_6d21525 _public_6d21525
#define public_6d215b3 _public_6d215b3
#define public_6d215f7 _public_6d215f7
#define public_6d21600 _public_6d21600
#define public_6d2163f _public_6d2163f
#define public_6d2164c _public_6d2164c
#define public_6d21659 _public_6d21659
#define public_6d21666 _public_6d21666
#define public_6d21671 _public_6d21671
#define public_6d21673 _public_6d21673
#define public_6d21699 _public_6d21699
#define public_6d216b5 _public_6d216b5
#define public_6d216cf _public_6d216cf
#define public_6d216f2 _public_6d216f2
#define public_6d21715 _public_6d21715
#define public_6d21731 _public_6d21731
#define public_6d21759 _public_6d21759
#define public_6d21768 _public_6d21768
#define public_6d217b4 _public_6d217b4
#define public_6d217c5 _public_6d217c5
#define public_6d217d6 _public_6d217d6
#define public_6d217e7 _public_6d217e7
#define public_6d217f6 _public_6d217f6
#define public_6d217fb _public_6d217fb
#define public_6d2183c _public_6d2183c
#define public_6d21845 _public_6d21845
#define public_6d218ca _public_6d218ca
#define public_6d218d9 _public_6d218d9
#define public_6d21909 _public_6d21909
#define public_6d21918 _public_6d21918
#define public_6d21921 _public_6d21921
#define public_6d2192a _public_6d2192a
#define public_6d21981 _public_6d21981
#define public_6d21996 _public_6d21996
#define public_6d2199b _public_6d2199b

PROC_DECLARE(0x6d21450, internal_6d21450, public_6d21450);
extern "C" NAKED register_t __cdecl internal_6d21450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0xC4
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x68]
        push edx
/*FIXUP push offset public_6d6bc68 @0x6d21466*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bc68
/*FIXUP push offset public_6d70648 @0x6d2146b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d70648
        call dword ptr ds : [public_6d5e13c]
        add esp, 0x10
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x8C], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ss : [ebp+0x14]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x78], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x68]
        and edx, 0x10
        test edx, edx
        seta al
        mov byte ptr ss : [ebp-0x71], al
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x38]
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ds:[ecx+edx*4]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x34]
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x68]
        and ecx, 0x40
        test ecx, ecx
        seta dl
        mov byte ptr ss : [ebp-0x21], dl
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x68]
        and ecx, 0xF00
        shr ecx, 8
        mov dword ptr ss : [ebp-0x14], ecx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d21525
        public_6d2151c : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 1
        mov dword ptr ss : [ebp-4], edx
        public_6d21525 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0x14]
        jge public_6d215b3
        mov ecx, dword ptr ss : [ebp-4]
        imul ecx, 0x14
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+ecx+0x40]
        mov dword ptr ss : [ebp+edx*4-0x88], ecx
        mov edx, dword ptr ss : [ebp-4]
        imul edx, 0x14
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+edx+0x4C]
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ds:[ecx+edx*4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+ecx*4-0xC], eax
        mov edx, dword ptr ss : [ebp-4]
        imul edx, 0x14
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+edx+0x48]
        mov dword ptr ss : [ebp+eax*4-0x44], edx
        mov eax, dword ptr ss : [ebp-4]
        imul eax, 0x14
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+eax+0x44]
        mov dword ptr ss : [ebp+ecx*4-0x34], eax
        mov ecx, dword ptr ss : [ebp-4]
        lea ecx, ds:[ecx+ecx+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x68]
        shr eax, cl
        and eax, 3
        mov dword ptr ss : [ebp-0x94], eax
        mov ecx, dword ptr ss : [ebp-0x94]
        mov dword ptr ss : [ebp-0xBC], ecx
        jmp public_6d2151c
        public_6d215b3 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0x10
        test edx, edx
        seta al
        mov byte ptr ss : [ebp-0x29], al
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0x40
        test ecx, ecx
        seta dl
        mov byte ptr ss : [ebp-0x45], dl
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0x80
        test eax, eax
        seta cl
        mov byte ptr ss : [ebp-0x7D], cl
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0xF00
        shr edx, 8
        mov dword ptr ss : [ebp-0x70], edx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d21600
        public_6d215f7 : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 1
        mov dword ptr ss : [ebp-4], eax
        public_6d21600 : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ss : [ebp-0x70]
        jge public_6d21673
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ds:[edx+edx+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        shr eax, cl
        and eax, 3
        mov dword ptr ss : [ebp-0x98], eax
        mov ecx, dword ptr ss : [ebp-0x98]
        mov dword ptr ss : [ebp-0xC0], ecx
        cmp dword ptr ss : [ebp-0xC0], 3
        ja public_6d21671
        mov edx, dword ptr ss : [ebp-0xC0]
/*FIXUP jmp dword ptr ds : [edx*4+public_6d219a1] @0x6d21638*/
  JMPTB cmp edx, 0
  JMPTB je public_6d2164c
  JMPTB cmp edx, 1
  JMPTB je public_6d21659
  JMPTB cmp edx, 2
  JMPTB je public_6d21666
  JMPTB cmp edx, 3
  JMPTB je public_6d2163f
  JMPTB int 3
        public_6d2163f : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+eax*4-0x6C], 4
        jmp public_6d21671
        public_6d2164c : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+ecx*4-0x6C], 8
        jmp public_6d21671
        public_6d21659 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+edx*4-0x6C], 0xC
        jmp public_6d21671
        public_6d21666 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+eax*4-0x6C], 0x10
        public_6d21671 : nop
        jmp public_6d215f7
        public_6d21673 : nop
        mov dword ptr ss : [ebp-0xA0], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0xC
        cmp ecx, 0xC
        jne public_6d21699
        mov edx, dword ptr ss : [ebp-0xA0]
        add edx, 0x1C
        mov dword ptr ss : [ebp-0xA0], edx
        jmp public_6d216cf
        public_6d21699 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 4
        cmp eax, 4
        jne public_6d216b5
        mov ecx, dword ptr ss : [ebp-0xA0]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0xA0], ecx
        jmp public_6d216cf
        public_6d216b5 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 2
        cmp edx, 2
        jne public_6d216cf
        mov eax, dword ptr ss : [ebp-0xA0]
        add eax, 0xC
        mov dword ptr ss : [ebp-0xA0], eax
        public_6d216cf : nop
        mov dword ptr ss : [ebp-0xA4], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0x10
        test ecx, ecx
        je public_6d216f2
        mov edx, dword ptr ss : [ebp-0xA4]
        add edx, 0xC
        mov dword ptr ss : [ebp-0xA4], edx
        public_6d216f2 : nop
        mov dword ptr ss : [ebp-0xA8], 0
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0x40
        test eax, eax
        je public_6d21715
        mov ecx, dword ptr ss : [ebp-0xA8]
        add ecx, 4
        mov dword ptr ss : [ebp-0xA8], ecx
        public_6d21715 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0x80
        test edx, edx
        je public_6d21731
        mov eax, dword ptr ss : [ebp-0xA8]
        add eax, 4
        mov dword ptr ss : [ebp-0xA8], eax
        public_6d21731 : nop
        mov dword ptr ss : [ebp-0xAC], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0xF00
        shr ecx, 8
        mov dword ptr ss : [ebp-0xB4], ecx
        mov dword ptr ss : [ebp-0xB0], 0
        jmp public_6d21768
        public_6d21759 : nop
        mov edx, dword ptr ss : [ebp-0xB0]
        add edx, 1
        mov dword ptr ss : [ebp-0xB0], edx
        public_6d21768 : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        cmp eax, dword ptr ss : [ebp-0xB4]
        jge public_6d217fb
        mov ecx, dword ptr ss : [ebp-0xB0]
        lea ecx, ds:[ecx+ecx+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        shr edx, cl
        and edx, 3
        mov dword ptr ss : [ebp-0xB8], edx
        mov eax, dword ptr ss : [ebp-0xB8]
        mov dword ptr ss : [ebp-0xC4], eax
        cmp dword ptr ss : [ebp-0xC4], 3
        ja public_6d217f6
        mov ecx, dword ptr ss : [ebp-0xC4]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d219b1] @0x6d217ad*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d217c5
  JMPTB cmp ecx, 1
  JMPTB je public_6d217d6
  JMPTB cmp ecx, 2
  JMPTB je public_6d217e7
  JMPTB cmp ecx, 3
  JMPTB je public_6d217b4
  JMPTB int 3
        public_6d217b4 : nop
        mov edx, dword ptr ss : [ebp-0xAC]
        add edx, 4
        mov dword ptr ss : [ebp-0xAC], edx
        jmp public_6d217f6
        public_6d217c5 : nop
        mov eax, dword ptr ss : [ebp-0xAC]
        add eax, 8
        mov dword ptr ss : [ebp-0xAC], eax
        jmp public_6d217f6
        public_6d217d6 : nop
        mov ecx, dword ptr ss : [ebp-0xAC]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0xAC], ecx
        jmp public_6d217f6
        public_6d217e7 : nop
        mov edx, dword ptr ss : [ebp-0xAC]
        add edx, 0x10
        mov dword ptr ss : [ebp-0xAC], edx
        public_6d217f6 : nop
        jmp public_6d21759
        public_6d217fb : nop
        mov eax, dword ptr ss : [ebp-0xA0]
        add eax, dword ptr ss : [ebp-0xA4]
        add eax, dword ptr ss : [ebp-0xA8]
        add eax, dword ptr ss : [ebp-0xAC]
        mov dword ptr ss : [ebp-0x7C], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        add ecx, dword ptr ss : [ebp+0x18]
        imul ecx, dword ptr ss : [ebp-0x7C]
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x90], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, dword ptr ss : [ebp-0x7C]
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov dword ptr ss : [ebp-0x3C], ecx
        jmp public_6d21845
        public_6d2183c : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        add edx, dword ptr ss : [ebp-0x7C]
        mov dword ptr ss : [ebp-0x3C], edx
        public_6d21845 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        cmp eax, dword ptr ss : [ebp-0x90]
        jae public_6d2199b
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        imul edx, dword ptr ss : [ebp-0x8C]
        mov eax, dword ptr ss : [ebp-0x28]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 4
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x9C], edx
        movzx eax, byte ptr ss : [ebp-0x29]
        test eax, eax
        je public_6d218d9
        movzx ecx, byte ptr ss : [ebp-0x71]
        test ecx, ecx
        je public_6d218ca
        mov edx, dword ptr ss : [ebp-0x78]
        mov eax, dword ptr ds : [edx]
        imul eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x78]
        add edx, 4
        mov dword ptr ss : [ebp-0x78], edx
        public_6d218ca : nop
        mov eax, dword ptr ss : [ebp-0x9C]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x9C], eax
        public_6d218d9 : nop
        movzx ecx, byte ptr ss : [ebp-0x45]
        test ecx, ecx
        je public_6d21918
        movzx edx, byte ptr ss : [ebp-0x21]
        test edx, edx
        je public_6d21909
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        imul ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 4
        mov dword ptr ss : [ebp-0x18], edx
        public_6d21909 : nop
        mov eax, dword ptr ss : [ebp-0x9C]
        add eax, 4
        mov dword ptr ss : [ebp-0x9C], eax
        public_6d21918 : nop
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d2192a
        public_6d21921 : nop
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 1
        mov dword ptr ss : [ebp-4], ecx
        public_6d2192a : nop
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ss : [ebp-0x70]
        jge public_6d21996
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0x14]
        jge public_6d21981
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+ecx*4-0x34]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+edx*4-0xC]
        mov edx, dword ptr ss : [ebp-4]
        mov esi, dword ptr ds : [eax]
        imul esi, dword ptr ss : [ebp+edx*4-0x44]
        mov eax, dword ptr ss : [ebp-4]
        add esi, dword ptr ss : [ebp+eax*4-0x88]
        mov edi, dword ptr ss : [ebp-0x9C]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+eax*4-0xC]
        add ecx, 4
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+edx*4-0xC], ecx
        public_6d21981 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x9C]
        add ecx, dword ptr ss : [ebp+eax*4-0x6C]
        mov dword ptr ss : [ebp-0x9C], ecx
        jmp public_6d21921
        public_6d21996 : nop
        jmp public_6d2183c
        public_6d2199b : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d21450)
        ASM_EXPORT_ENTRY_FIRST(0x6d2163f, public_6d2163f)
        ASM_EXPORT_ENTRY(0x6d2164c, public_6d2164c)
        ASM_EXPORT_ENTRY(0x6d21659, public_6d21659)
        ASM_EXPORT_ENTRY(0x6d21666, public_6d21666)
        ASM_EXPORT_ENTRY(0x6d217b4, public_6d217b4)
        ASM_EXPORT_ENTRY(0x6d217c5, public_6d217c5)
        ASM_EXPORT_ENTRY(0x6d217d6, public_6d217d6)
        ASM_EXPORT_ENTRY_LAST(0x6d217e7, public_6d217e7)
    }
}

#undef public_6d2151c
#undef public_6d21525
#undef public_6d215b3
#undef public_6d215f7
#undef public_6d21600
#undef public_6d2163f
#undef public_6d2164c
#undef public_6d21659
#undef public_6d21666
#undef public_6d21671
#undef public_6d21673
#undef public_6d21699
#undef public_6d216b5
#undef public_6d216cf
#undef public_6d216f2
#undef public_6d21715
#undef public_6d21731
#undef public_6d21759
#undef public_6d21768
#undef public_6d217b4
#undef public_6d217c5
#undef public_6d217d6
#undef public_6d217e7
#undef public_6d217f6
#undef public_6d217fb
#undef public_6d2183c
#undef public_6d21845
#undef public_6d218ca
#undef public_6d218d9
#undef public_6d21909
#undef public_6d21918
#undef public_6d21921
#undef public_6d2192a
#undef public_6d21981
#undef public_6d21996
#undef public_6d2199b

#pragma init_seg(compiler)
extern "C" void const* const public_6d2163f = __AsmFindLabelExport(&internal_6d21450, 0x6d2163f);
extern "C" void const* const public_6d2164c = __AsmFindLabelExport(&internal_6d21450, 0x6d2164c);
extern "C" void const* const public_6d21659 = __AsmFindLabelExport(&internal_6d21450, 0x6d21659);
extern "C" void const* const public_6d21666 = __AsmFindLabelExport(&internal_6d21450, 0x6d21666);
extern "C" void const* const public_6d217b4 = __AsmFindLabelExport(&internal_6d21450, 0x6d217b4);
extern "C" void const* const public_6d217c5 = __AsmFindLabelExport(&internal_6d21450, 0x6d217c5);
extern "C" void const* const public_6d217d6 = __AsmFindLabelExport(&internal_6d21450, 0x6d217d6);
extern "C" void const* const public_6d217e7 = __AsmFindLabelExport(&internal_6d21450, 0x6d217e7);
