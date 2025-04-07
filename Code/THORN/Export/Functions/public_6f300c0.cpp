#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f300c0);

#define public_6f300e5 _public_6f300e5
#define public_6f30110 _public_6f30110
#define public_6f3011c _public_6f3011c
#define public_6f30125 _public_6f30125
#define public_6f30135 _public_6f30135
#define public_6f3013a _public_6f3013a
#define public_6f3015b _public_6f3015b
#define public_6f30166 _public_6f30166
#define public_6f3017c _public_6f3017c
#define public_6f3018a _public_6f3018a
#define public_6f3018d _public_6f3018d
#define public_6f30190 _public_6f30190
#define public_6f301a0 _public_6f301a0

PROC_DECLARE(0x6f300c0, internal_6f300c0, public_6f300c0);
extern "C" NAKED register_t __cdecl internal_6f300c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, esi
        cmp edx, ecx
        je public_6f301a0
        add edx, 0x10
        cmp edx, ecx
        je public_6f301a0
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        xor edi, edi
        public_6f300e5 : nop
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6f5a558]
        fnstsw ax
        test ah, 5
        jp public_6f30110
        mov dword ptr ss : [esp+0x14], 0x38D1B717
        public_6f30110 : nop
        cmp ebx, 6
        ja public_6f30190
/*FIXUP jmp dword ptr ds : [ebx*4+public_6f301a8] @0x6f30115*/
  JMPTB cmp ebx, 0
  JMPTB je public_6f3011c
  JMPTB cmp ebx, 1
  JMPTB je public_6f30125
  JMPTB cmp ebx, 2
  JMPTB je public_6f30166
  JMPTB cmp ebx, 3
  JMPTB je public_6f3017c
  JMPTB cmp ebx, 4
  JMPTB je public_6f30135
  JMPTB cmp ebx, 5
  JMPTB je public_6f3013a
  JMPTB cmp ebx, 6
  JMPTB je public_6f3015b
  JMPTB int 3
        public_6f3011c : nop
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        jmp public_6f30190
        public_6f30125 : nop
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+0x14]
        fst dword ptr ds : [edx+8]
        fstp dword ptr ds : [esi+0xC]
        jmp public_6f30190
        public_6f30135 : nop
        mov dword ptr ds : [esi+0xC], edi
        jmp public_6f3018d
        public_6f3013a : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6f5a1b0]
        fnstsw ax
        fdivr dword ptr ss : [esp+0xC]
        test ah, 0x41
        jne public_6f3018a
        mov dword ptr ds : [esi+0xC], edi
        fstp dword ptr ds : [edx+8]
        jmp public_6f30190
        public_6f3015b : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        jp public_6f3017c
        public_6f30166 : nop
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0xC], edi
        fmul dword ptr ds : [public_6f5a1b0]
        fdivr dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [edx+8]
        jmp public_6f30190
        public_6f3017c : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6f5a1b0]
        fdivr dword ptr ss : [esp+0xC]
        public_6f3018a : nop
        fstp dword ptr ds : [esi+0xC]
        public_6f3018d : nop
        mov dword ptr ds : [edx+8], edi
        public_6f30190 : nop
        add edx, 0x10
        add esi, 0x10
        cmp edx, ecx
        jne public_6f300e5
        pop edi
        pop ebx
        public_6f301a0 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f300c0)
        ASM_EXPORT_ENTRY_FIRST(0x6f3011c, public_6f3011c)
        ASM_EXPORT_ENTRY(0x6f30125, public_6f30125)
        ASM_EXPORT_ENTRY(0x6f30135, public_6f30135)
        ASM_EXPORT_ENTRY(0x6f3013a, public_6f3013a)
        ASM_EXPORT_ENTRY(0x6f3015b, public_6f3015b)
        ASM_EXPORT_ENTRY(0x6f30166, public_6f30166)
        ASM_EXPORT_ENTRY_LAST(0x6f3017c, public_6f3017c)
    }
}

#undef public_6f300e5
#undef public_6f30110
#undef public_6f3011c
#undef public_6f30125
#undef public_6f30135
#undef public_6f3013a
#undef public_6f3015b
#undef public_6f30166
#undef public_6f3017c
#undef public_6f3018a
#undef public_6f3018d
#undef public_6f30190
#undef public_6f301a0

#pragma init_seg(compiler)
extern "C" void const* const public_6f3011c = __AsmFindLabelExport(&internal_6f300c0, 0x6f3011c);
extern "C" void const* const public_6f30125 = __AsmFindLabelExport(&internal_6f300c0, 0x6f30125);
extern "C" void const* const public_6f30135 = __AsmFindLabelExport(&internal_6f300c0, 0x6f30135);
extern "C" void const* const public_6f3013a = __AsmFindLabelExport(&internal_6f300c0, 0x6f3013a);
extern "C" void const* const public_6f3015b = __AsmFindLabelExport(&internal_6f300c0, 0x6f3015b);
extern "C" void const* const public_6f30166 = __AsmFindLabelExport(&internal_6f300c0, 0x6f30166);
extern "C" void const* const public_6f3017c = __AsmFindLabelExport(&internal_6f300c0, 0x6f3017c);
