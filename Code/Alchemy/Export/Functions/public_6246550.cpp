#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246550);

#define public_6246577 _public_6246577
#define public_62465a2 _public_62465a2
#define public_62465ae _public_62465ae
#define public_62465b7 _public_62465b7
#define public_62465c7 _public_62465c7
#define public_62465cc _public_62465cc
#define public_62465ef _public_62465ef
#define public_62465fa _public_62465fa
#define public_6246610 _public_6246610
#define public_624661e _public_624661e
#define public_6246621 _public_6246621
#define public_6246624 _public_6246624
#define public_6246633 _public_6246633

PROC_DECLARE(0x6246550, internal_6246550, public_6246550);
extern "C" NAKED register_t __cdecl internal_6246550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        xor edi, edi
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov edx, esi
        cmp edx, ecx
        je public_6246633
        add edx, 0x10
        cmp edx, ecx
        je public_6246633
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6246577 : nop
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_624f1a4]
        fnstsw ax
        test ah, 5
        jp public_62465a2
        mov dword ptr ss : [esp+0x14], 0x38D1B717
        public_62465a2 : nop
        cmp ebx, 6
        ja public_6246624
/*FIXUP jmp dword ptr ds : [ebx*4+public_624663c] @0x62465a7*/
  JMPTB cmp ebx, 0
  JMPTB je public_62465ae
  JMPTB cmp ebx, 1
  JMPTB je public_62465b7
  JMPTB cmp ebx, 2
  JMPTB je public_62465fa
  JMPTB cmp ebx, 3
  JMPTB je public_6246610
  JMPTB cmp ebx, 4
  JMPTB je public_62465c7
  JMPTB cmp ebx, 5
  JMPTB je public_62465cc
  JMPTB cmp ebx, 6
  JMPTB je public_62465ef
  JMPTB int 3
        public_62465ae : nop
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        jmp public_6246624
        public_62465b7 : nop
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+0x14]
        fst dword ptr ds : [edx+8]
        fstp dword ptr ds : [esi+0xC]
        jmp public_6246624
        public_62465c7 : nop
        mov dword ptr ds : [esi+0xC], edi
        jmp public_6246621
        public_62465cc : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bab8]
        fnstsw ax
        fdivr dword ptr ss : [esp+0xC]
        and eax, 0x4100
        jne public_624661e
        mov dword ptr ds : [esi+0xC], edi
        fstp dword ptr ds : [edx+8]
        jmp public_6246624
        public_62465ef : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        jp public_6246610
        public_62465fa : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bab8]
        mov dword ptr ds : [esi+0xC], edi
        fdivr dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [edx+8]
        jmp public_6246624
        public_6246610 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bab8]
        fdivr dword ptr ss : [esp+0xC]
        public_624661e : nop
        fstp dword ptr ds : [esi+0xC]
        public_6246621 : nop
        mov dword ptr ds : [edx+8], edi
        public_6246624 : nop
        add edx, 0x10
        add esi, 0x10
        cmp edx, ecx
        jne public_6246577
        pop ebx
        public_6246633 : nop
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6246550)
        ASM_EXPORT_ENTRY_FIRST(0x62465ae, public_62465ae)
        ASM_EXPORT_ENTRY(0x62465b7, public_62465b7)
        ASM_EXPORT_ENTRY(0x62465c7, public_62465c7)
        ASM_EXPORT_ENTRY(0x62465cc, public_62465cc)
        ASM_EXPORT_ENTRY(0x62465ef, public_62465ef)
        ASM_EXPORT_ENTRY(0x62465fa, public_62465fa)
        ASM_EXPORT_ENTRY_LAST(0x6246610, public_6246610)
    }
}

#undef public_6246577
#undef public_62465a2
#undef public_62465ae
#undef public_62465b7
#undef public_62465c7
#undef public_62465cc
#undef public_62465ef
#undef public_62465fa
#undef public_6246610
#undef public_624661e
#undef public_6246621
#undef public_6246624
#undef public_6246633

#pragma init_seg(compiler)
extern "C" void const* const public_62465ae = __AsmFindLabelExport(&internal_6246550, 0x62465ae);
extern "C" void const* const public_62465b7 = __AsmFindLabelExport(&internal_6246550, 0x62465b7);
extern "C" void const* const public_62465c7 = __AsmFindLabelExport(&internal_6246550, 0x62465c7);
extern "C" void const* const public_62465cc = __AsmFindLabelExport(&internal_6246550, 0x62465cc);
extern "C" void const* const public_62465ef = __AsmFindLabelExport(&internal_6246550, 0x62465ef);
extern "C" void const* const public_62465fa = __AsmFindLabelExport(&internal_6246550, 0x62465fa);
extern "C" void const* const public_6246610 = __AsmFindLabelExport(&internal_6246550, 0x6246610);
