#include "RendComp-PCH.h"


#define public_6c237d9 _public_6c237d9
#define public_6c237ea _public_6c237ea
#define public_6c237fe _public_6c237fe
#define public_6c23811 _public_6c23811
#define public_6c2383b _public_6c2383b
#define public_6c23846 _public_6c23846
#define public_6c23868 _public_6c23868
#define public_6c23873 _public_6c23873
#define public_6c23895 _public_6c23895
#define public_6c238a0 _public_6c238a0
#define public_6c238dc _public_6c238dc
#define public_6c238e4 _public_6c238e4
#define public_6c238f4 _public_6c238f4
#define public_6c238fc _public_6c238fc
#define public_6c2391e _public_6c2391e
#define public_6c23924 _public_6c23924

PROC_DECLARE(0x6c237c0, internal_6c237c0, public_6c237c0);
extern "C" NAKED register_t __cdecl internal_6c237c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x1E8]
        cmp edx, dword ptr ds : [eax+0x14]
        push esi
        push edi
        jne public_6c237d9
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x10
        public_6c237d9 : nop
        cmp dword ptr ds : [eax+0x218], 2
        je public_6c237ea
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x10
        public_6c237ea : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test dword ptr ds : [eax+0x1EC], ecx
        jne public_6c237fe
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x10
        public_6c237fe : nop
        mov esi, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [esi+0x1C]
        je public_6c23811
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x10
        public_6c23811 : nop
        cmp ecx, 0x80
        ja public_6c238a0
        je public_6c238f4
        dec ecx
        cmp ecx, 0xF
        ja public_6c238f4
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_6c23958] @0x6c2382d*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6c23940] @0x6c23834*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c000000000004b2
  JMPTB mov ecx, 0
  JMPTB public_4c000000000004b2 : nop
        je public_6c2383b
  JMPTB cmp ecx, 1
  JMPTB jne public_4c000000000004ae
  JMPTB mov ecx, 1
  JMPTB public_4c000000000004ae : nop
        je public_6c23868
  JMPTB cmp ecx, 2
  JMPTB jne public_4c000000000004aa
  JMPTB mov ecx, 5
  JMPTB public_4c000000000004aa : nop
        je public_6c238f4
  JMPTB cmp ecx, 3
  JMPTB jne public_4c000000000004a6
  JMPTB mov ecx, 2
  JMPTB public_4c000000000004a6 : nop
        je public_6c23873
  JMPTB cmp ecx, 4
  JMPTB jne public_4c000000000004a2
  JMPTB mov ecx, 5
  JMPTB public_4c000000000004a2 : nop
        je public_6c238f4
  JMPTB cmp ecx, 5
  JMPTB jne public_4c0000000000049e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000049e : nop
        je public_6c238f4
  JMPTB cmp ecx, 6
  JMPTB jne public_4c0000000000049a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000049a : nop
        je public_6c238f4
  JMPTB cmp ecx, 7
  JMPTB jne public_4c00000000000496
  JMPTB mov ecx, 3
  JMPTB public_4c00000000000496 : nop
        je public_6c23846
  JMPTB cmp ecx, 8
  JMPTB jne public_4c00000000000492
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000492 : nop
        je public_6c238f4
  JMPTB cmp ecx, 9
  JMPTB jne public_4c0000000000048e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000048e : nop
        je public_6c238f4
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c0000000000048a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000048a : nop
        je public_6c238f4
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c00000000000486
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000486 : nop
        je public_6c238f4
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c00000000000482
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000482 : nop
        je public_6c238f4
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c0000000000047e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000047e : nop
        je public_6c238f4
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c0000000000047a
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000047a : nop
        je public_6c238f4
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c00000000000476
  JMPTB mov ecx, 4
  JMPTB public_4c00000000000476 : nop
        je public_6c23895
  JMPTB int 3
        public_6c2383b : nop
        mov edi, dword ptr ds : [eax+0x1F0]
        jmp public_6c23924
        public_6c23846 : nop
        mov edi, dword ptr ds : [eax+0x1F4]
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+edx]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        public_6c23868 : nop
        mov edi, dword ptr ds : [eax+0x1F8]
        jmp public_6c23924
        public_6c23873 : nop
        mov edi, dword ptr ds : [eax+0x1FC]
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+edx]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        public_6c23895 : nop
        mov edi, dword ptr ds : [eax+0x200]
        jmp public_6c23924
        public_6c238a0 : nop
        cmp ecx, 0x8000
        ja public_6c238e4
        je public_6c238dc
        cmp ecx, 0x100
        je public_6c238f4
        cmp ecx, 0x4000
        jne public_6c238f4
        mov edi, dword ptr ds : [eax+0x208]
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+edx]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        public_6c238dc : nop
        mov edi, dword ptr ds : [eax+0x20C]
        jmp public_6c23924
        public_6c238e4 : nop
        cmp ecx, 0x10000
        je public_6c2391e
        cmp ecx, 0x20000
        je public_6c238fc
        public_6c238f4 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x10
        public_6c238fc : nop
        mov edi, dword ptr ds : [eax+0x214]
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+edx]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        public_6c2391e : nop
        mov edi, dword ptr ds : [eax+0x210]
        public_6c23924 : nop
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+edx]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6c237c0)
        ASM_EXPORT_ENTRY_FIRST(0x6c2383b, public_6c2383b)
        ASM_EXPORT_ENTRY(0x6c23846, public_6c23846)
        ASM_EXPORT_ENTRY(0x6c23868, public_6c23868)
        ASM_EXPORT_ENTRY(0x6c23873, public_6c23873)
        ASM_EXPORT_ENTRY(0x6c23895, public_6c23895)
        ASM_EXPORT_ENTRY_LAST(0x6c238f4, public_6c238f4)
    }
}

#undef public_6c237d9
#undef public_6c237ea
#undef public_6c237fe
#undef public_6c23811
#undef public_6c2383b
#undef public_6c23846
#undef public_6c23868
#undef public_6c23873
#undef public_6c23895
#undef public_6c238a0
#undef public_6c238dc
#undef public_6c238e4
#undef public_6c238f4
#undef public_6c238fc
#undef public_6c2391e
#undef public_6c23924

#pragma init_seg(compiler)
extern "C" void const* const public_6c2383b = __AsmFindLabelExport(&internal_6c237c0, 0x6c2383b);
extern "C" void const* const public_6c23846 = __AsmFindLabelExport(&internal_6c237c0, 0x6c23846);
extern "C" void const* const public_6c23868 = __AsmFindLabelExport(&internal_6c237c0, 0x6c23868);
extern "C" void const* const public_6c23873 = __AsmFindLabelExport(&internal_6c237c0, 0x6c23873);
extern "C" void const* const public_6c23895 = __AsmFindLabelExport(&internal_6c237c0, 0x6c23895);
extern "C" void const* const public_6c238f4 = __AsmFindLabelExport(&internal_6c237c0, 0x6c238f4);
