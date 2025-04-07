#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadce8 _public_6fadce8
#define public_6fadcf0 _public_6fadcf0
#define public_6fadcf8 _public_6fadcf8
#define public_6fadd0e _public_6fadd0e
#define public_6fadd15 _public_6fadd15
#define public_6fadd1d _public_6fadd1d
#define public_6fadd33 _public_6fadd33
#define public_6fadd3a _public_6fadd3a
#define public_6fadd42 _public_6fadd42

PROC_DECLARE(0x6fadce0, internal_6fadce0, public_6fadce0);
/* CHUNK of public_6f1cee0 */
extern "C" NAKED register_t __cdecl internal_6fadce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_6f15350
        public_6fadce8 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6eb7900
        public_6fadcf0 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6eb7900
        public_6fadcf8 : nop
        lea eax, ss:[ebp-0x20]
        test eax, eax
        je public_6fadd0e
        lea ecx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-0x48], ecx
        jmp public_6fadd15
        public_6fadd0e : nop
        mov dword ptr ss : [ebp-0x48], 0
        public_6fadd15 : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        jmp public_6f15350
        public_6fadd1d : nop
        lea eax, ss:[ebp-0x34]
        test eax, eax
        je public_6fadd33
        lea ecx, ss:[ebp-0x30]
        mov dword ptr ss : [ebp-0x4C], ecx
        jmp public_6fadd3a
        public_6fadd33 : nop
        mov dword ptr ss : [ebp-0x4C], 0
        public_6fadd3a : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        jmp public_6f15350
        public_6fadd42 : nop
        mov eax, offset public_6fc2c34
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadce0)
        ASM_EXPORT_ENTRY_FIRST(0x6fadce8, public_6fadce8)
        ASM_EXPORT_ENTRY(0x6fadcf0, public_6fadcf0)
        ASM_EXPORT_ENTRY(0x6fadcf8, public_6fadcf8)
        ASM_EXPORT_ENTRY(0x6fadd0e, public_6fadd0e)
        ASM_EXPORT_ENTRY(0x6fadd15, public_6fadd15)
        ASM_EXPORT_ENTRY(0x6fadd1d, public_6fadd1d)
        ASM_EXPORT_ENTRY(0x6fadd33, public_6fadd33)
        ASM_EXPORT_ENTRY(0x6fadd3a, public_6fadd3a)
        ASM_EXPORT_ENTRY_LAST(0x6fadd42, public_6fadd42)
    }
}

#undef public_6fadce8
#undef public_6fadcf0
#undef public_6fadcf8
#undef public_6fadd0e
#undef public_6fadd15
#undef public_6fadd1d
#undef public_6fadd33
#undef public_6fadd3a
#undef public_6fadd42

#pragma init_seg(compiler)
extern "C" void const* const public_6fadce8 = __AsmFindLabelExport(&internal_6fadce0, 0x6fadce8);
extern "C" void const* const public_6fadcf0 = __AsmFindLabelExport(&internal_6fadce0, 0x6fadcf0);
extern "C" void const* const public_6fadcf8 = __AsmFindLabelExport(&internal_6fadce0, 0x6fadcf8);
extern "C" void const* const public_6fadd0e = __AsmFindLabelExport(&internal_6fadce0, 0x6fadd0e);
extern "C" void const* const public_6fadd15 = __AsmFindLabelExport(&internal_6fadce0, 0x6fadd15);
extern "C" void const* const public_6fadd1d = __AsmFindLabelExport(&internal_6fadce0, 0x6fadd1d);
extern "C" void const* const public_6fadd33 = __AsmFindLabelExport(&internal_6fadce0, 0x6fadd33);
extern "C" void const* const public_6fadd3a = __AsmFindLabelExport(&internal_6fadce0, 0x6fadd3a);
extern "C" void const* const public_6fadd42 = __AsmFindLabelExport(&internal_6fadce0, 0x6fadd42);
