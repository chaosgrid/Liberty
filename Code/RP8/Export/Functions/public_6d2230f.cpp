#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2230f);

#define public_6d223c0 _public_6d223c0
#define public_6d223c9 _public_6d223c9
#define public_6d22438 _public_6d22438
#define public_6d2247c _public_6d2247c
#define public_6d22485 _public_6d22485
#define public_6d224c4 _public_6d224c4
#define public_6d224d1 _public_6d224d1
#define public_6d224de _public_6d224de
#define public_6d224eb _public_6d224eb
#define public_6d224f6 _public_6d224f6
#define public_6d224f8 _public_6d224f8
#define public_6d2251e _public_6d2251e
#define public_6d2253a _public_6d2253a
#define public_6d22554 _public_6d22554
#define public_6d22577 _public_6d22577
#define public_6d2259a _public_6d2259a
#define public_6d225b6 _public_6d225b6
#define public_6d225de _public_6d225de
#define public_6d225ed _public_6d225ed
#define public_6d22639 _public_6d22639
#define public_6d2264a _public_6d2264a
#define public_6d2265b _public_6d2265b
#define public_6d2266c _public_6d2266c
#define public_6d2267b _public_6d2267b
#define public_6d22680 _public_6d22680
#define public_6d226be _public_6d226be
#define public_6d226c7 _public_6d226c7
#define public_6d22730 _public_6d22730
#define public_6d2273f _public_6d2273f
#define public_6d22765 _public_6d22765
#define public_6d22774 _public_6d22774
#define public_6d2277d _public_6d2277d
#define public_6d22786 _public_6d22786
#define public_6d227cd _public_6d227cd
#define public_6d227e2 _public_6d227e2
#define public_6d227e7 _public_6d227e7

PROC_DECLARE(0x6d2230f, internal_6d2230f, public_6d2230f);
extern "C" NAKED register_t __cdecl internal_6d2230f()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0xB0
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x68]
        push edx
/*FIXUP push offset public_6d6bcb8 @0x6d22325*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bcb8
/*FIXUP push offset public_6d70548 @0x6d2232a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d70548
        call dword ptr ds : [public_6d5e13c]
        add esp, 0x10
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x78], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        imul edx, dword ptr ss : [ebp-0x78]
        mov eax, dword ptr ss : [ebp+0x10]
        add edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x18], edx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0x10]
        add eax, dword ptr ds : [ecx+0x18]
        mov dword ptr ss : [ebp-0x10], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x68]
        and eax, 0x10
        test eax, eax
        seta cl
        mov byte ptr ss : [ebp-0x61], cl
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x34]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp+0x10]
        add ecx, dword ptr ds : [edx+0x2C]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x68]
        and ecx, 0x40
        test ecx, ecx
        seta dl
        mov byte ptr ss : [ebp-0x11], dl
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x68]
        and ecx, 0xF00
        shr ecx, 8
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d223c9
        public_6d223c0 : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 1
        mov dword ptr ss : [ebp-4], edx
        public_6d223c9 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0xC]
        jge public_6d22438
        mov ecx, dword ptr ss : [ebp-4]
        imul ecx, 0x14
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+ecx+0x48]
        mov dword ptr ss : [ebp+edx*4-0x34], ecx
        mov edx, dword ptr ss : [ebp-4]
        imul edx, 0x14
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+edx+0x44]
        mov dword ptr ss : [ebp+eax*4-0x24], edx
        mov eax, dword ptr ss : [ebp-4]
        imul eax, 0x14
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0x14]
        imul edx, dword ptr ss : [ebp+ecx*4-0x34]
        mov ecx, dword ptr ss : [ebp+0x10]
        add edx, dword ptr ds : [ecx+eax+0x40]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+eax*4-0x74], edx
        mov ecx, dword ptr ss : [ebp-4]
        lea ecx, ds:[ecx+ecx+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x68]
        shr eax, cl
        and eax, 3
        mov dword ptr ss : [ebp-0x80], eax
        mov ecx, dword ptr ss : [ebp-0x80]
        mov dword ptr ss : [ebp-0xA8], ecx
        jmp public_6d223c0
        public_6d22438 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0x10
        test edx, edx
        seta al
        mov byte ptr ss : [ebp-0x19], al
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0x40
        test ecx, ecx
        seta dl
        mov byte ptr ss : [ebp-0x35], dl
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0x80
        test eax, eax
        seta cl
        mov byte ptr ss : [ebp-0x69], cl
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0xF00
        shr edx, 8
        mov dword ptr ss : [ebp-0x60], edx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d22485
        public_6d2247c : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 1
        mov dword ptr ss : [ebp-4], eax
        public_6d22485 : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ss : [ebp-0x60]
        jge public_6d224f8
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ds:[edx+edx+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        shr eax, cl
        and eax, 3
        mov dword ptr ss : [ebp-0x84], eax
        mov ecx, dword ptr ss : [ebp-0x84]
        mov dword ptr ss : [ebp-0xAC], ecx
        cmp dword ptr ss : [ebp-0xAC], 3
        ja public_6d224f6
        mov edx, dword ptr ss : [ebp-0xAC]
/*FIXUP jmp dword ptr ds : [edx*4+public_6d227ed] @0x6d224bd*/
  JMPTB cmp edx, 0
  JMPTB je public_6d224d1
  JMPTB cmp edx, 1
  JMPTB je public_6d224de
  JMPTB cmp edx, 2
  JMPTB je public_6d224eb
  JMPTB cmp edx, 3
  JMPTB je public_6d224c4
  JMPTB int 3
        public_6d224c4 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+eax*4-0x5C], 4
        jmp public_6d224f6
        public_6d224d1 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+ecx*4-0x5C], 8
        jmp public_6d224f6
        public_6d224de : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+edx*4-0x5C], 0xC
        jmp public_6d224f6
        public_6d224eb : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+eax*4-0x5C], 0x10
        public_6d224f6 : nop
        jmp public_6d2247c
        public_6d224f8 : nop
        mov dword ptr ss : [ebp-0x8C], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0xC
        cmp ecx, 0xC
        jne public_6d2251e
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x1C
        mov dword ptr ss : [ebp-0x8C], edx
        jmp public_6d22554
        public_6d2251e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 4
        cmp eax, 4
        jne public_6d2253a
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x8C], ecx
        jmp public_6d22554
        public_6d2253a : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 2
        cmp edx, 2
        jne public_6d22554
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x8C], eax
        public_6d22554 : nop
        mov dword ptr ss : [ebp-0x90], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0x10
        test ecx, ecx
        je public_6d22577
        mov edx, dword ptr ss : [ebp-0x90]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x90], edx
        public_6d22577 : nop
        mov dword ptr ss : [ebp-0x94], 0
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0x40
        test eax, eax
        je public_6d2259a
        mov ecx, dword ptr ss : [ebp-0x94]
        add ecx, 4
        mov dword ptr ss : [ebp-0x94], ecx
        public_6d2259a : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 0x80
        test edx, edx
        je public_6d225b6
        mov eax, dword ptr ss : [ebp-0x94]
        add eax, 4
        mov dword ptr ss : [ebp-0x94], eax
        public_6d225b6 : nop
        mov dword ptr ss : [ebp-0x98], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        and ecx, 0xF00
        shr ecx, 8
        mov dword ptr ss : [ebp-0xA0], ecx
        mov dword ptr ss : [ebp-0x9C], 0
        jmp public_6d225ed
        public_6d225de : nop
        mov edx, dword ptr ss : [ebp-0x9C]
        add edx, 1
        mov dword ptr ss : [ebp-0x9C], edx
        public_6d225ed : nop
        mov eax, dword ptr ss : [ebp-0x9C]
        cmp eax, dword ptr ss : [ebp-0xA0]
        jge public_6d22680
        mov ecx, dword ptr ss : [ebp-0x9C]
        lea ecx, ds:[ecx+ecx+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        shr edx, cl
        and edx, 3
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov dword ptr ss : [ebp-0xB0], eax
        cmp dword ptr ss : [ebp-0xB0], 3
        ja public_6d2267b
        mov ecx, dword ptr ss : [ebp-0xB0]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d227fd] @0x6d22632*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d2264a
  JMPTB cmp ecx, 1
  JMPTB je public_6d2265b
  JMPTB cmp ecx, 2
  JMPTB je public_6d2266c
  JMPTB cmp ecx, 3
  JMPTB je public_6d22639
  JMPTB int 3
        public_6d22639 : nop
        mov edx, dword ptr ss : [ebp-0x98]
        add edx, 4
        mov dword ptr ss : [ebp-0x98], edx
        jmp public_6d2267b
        public_6d2264a : nop
        mov eax, dword ptr ss : [ebp-0x98]
        add eax, 8
        mov dword ptr ss : [ebp-0x98], eax
        jmp public_6d2267b
        public_6d2265b : nop
        mov ecx, dword ptr ss : [ebp-0x98]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x98], ecx
        jmp public_6d2267b
        public_6d2266c : nop
        mov edx, dword ptr ss : [ebp-0x98]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x98], edx
        public_6d2267b : nop
        jmp public_6d225de
        public_6d22680 : nop
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, dword ptr ss : [ebp-0x90]
        add eax, dword ptr ss : [ebp-0x94]
        add eax, dword ptr ss : [ebp-0x98]
        mov dword ptr ss : [ebp-0x68], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        add ecx, dword ptr ss : [ebp+0x18]
        imul ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x7C], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov dword ptr ss : [ebp-0x2C], ecx
        jmp public_6d226c7
        public_6d226be : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        add edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ss : [ebp-0x2C], edx
        public_6d226c7 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        cmp eax, dword ptr ss : [ebp-0x7C]
        jae public_6d227e7
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, dword ptr ss : [ebp-0x78]
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x88], eax
        movzx ecx, byte ptr ss : [ebp-0x19]
        test ecx, ecx
        je public_6d2273f
        movzx edx, byte ptr ss : [ebp-0x61]
        test edx, edx
        je public_6d22730
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d22730 : nop
        mov edx, dword ptr ss : [ebp-0x88]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x88], edx
        public_6d2273f : nop
        movzx eax, byte ptr ss : [ebp-0x35]
        test eax, eax
        je public_6d22774
        movzx ecx, byte ptr ss : [ebp-0x11]
        test ecx, ecx
        je public_6d22765
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        add edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x3C], edx
        public_6d22765 : nop
        mov eax, dword ptr ss : [ebp-0x88]
        add eax, 4
        mov dword ptr ss : [ebp-0x88], eax
        public_6d22774 : nop
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d22786
        public_6d2277d : nop
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 1
        mov dword ptr ss : [ebp-4], ecx
        public_6d22786 : nop
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ss : [ebp-0x60]
        jge public_6d227e2
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0xC]
        jge public_6d227cd
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+ecx*4-0x24]
        mov edx, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+edx*4-0x74]
        mov edi, dword ptr ss : [ebp-0x88]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+ecx*4-0x74]
        mov eax, dword ptr ss : [ebp-4]
        add edx, dword ptr ss : [ebp+eax*4-0x34]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+ecx*4-0x74], edx
        public_6d227cd : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x88]
        add eax, dword ptr ss : [ebp+edx*4-0x5C]
        mov dword ptr ss : [ebp-0x88], eax
        jmp public_6d2277d
        public_6d227e2 : nop
        jmp public_6d226be
        public_6d227e7 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2230f)
        ASM_EXPORT_ENTRY_FIRST(0x6d224c4, public_6d224c4)
        ASM_EXPORT_ENTRY(0x6d224d1, public_6d224d1)
        ASM_EXPORT_ENTRY(0x6d224de, public_6d224de)
        ASM_EXPORT_ENTRY(0x6d224eb, public_6d224eb)
        ASM_EXPORT_ENTRY(0x6d22639, public_6d22639)
        ASM_EXPORT_ENTRY(0x6d2264a, public_6d2264a)
        ASM_EXPORT_ENTRY(0x6d2265b, public_6d2265b)
        ASM_EXPORT_ENTRY_LAST(0x6d2266c, public_6d2266c)
    }
}

#undef public_6d223c0
#undef public_6d223c9
#undef public_6d22438
#undef public_6d2247c
#undef public_6d22485
#undef public_6d224c4
#undef public_6d224d1
#undef public_6d224de
#undef public_6d224eb
#undef public_6d224f6
#undef public_6d224f8
#undef public_6d2251e
#undef public_6d2253a
#undef public_6d22554
#undef public_6d22577
#undef public_6d2259a
#undef public_6d225b6
#undef public_6d225de
#undef public_6d225ed
#undef public_6d22639
#undef public_6d2264a
#undef public_6d2265b
#undef public_6d2266c
#undef public_6d2267b
#undef public_6d22680
#undef public_6d226be
#undef public_6d226c7
#undef public_6d22730
#undef public_6d2273f
#undef public_6d22765
#undef public_6d22774
#undef public_6d2277d
#undef public_6d22786
#undef public_6d227cd
#undef public_6d227e2
#undef public_6d227e7

#pragma init_seg(compiler)
extern "C" void const* const public_6d224c4 = __AsmFindLabelExport(&internal_6d2230f, 0x6d224c4);
extern "C" void const* const public_6d224d1 = __AsmFindLabelExport(&internal_6d2230f, 0x6d224d1);
extern "C" void const* const public_6d224de = __AsmFindLabelExport(&internal_6d2230f, 0x6d224de);
extern "C" void const* const public_6d224eb = __AsmFindLabelExport(&internal_6d2230f, 0x6d224eb);
extern "C" void const* const public_6d22639 = __AsmFindLabelExport(&internal_6d2230f, 0x6d22639);
extern "C" void const* const public_6d2264a = __AsmFindLabelExport(&internal_6d2230f, 0x6d2264a);
extern "C" void const* const public_6d2265b = __AsmFindLabelExport(&internal_6d2230f, 0x6d2265b);
extern "C" void const* const public_6d2266c = __AsmFindLabelExport(&internal_6d2230f, 0x6d2266c);
