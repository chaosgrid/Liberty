#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb081b _public_6fb081b
#define public_6fb0826 _public_6fb0826
#define public_6fb082e _public_6fb082e
#define public_6fb0836 _public_6fb0836
#define public_6fb0841 _public_6fb0841
#define public_6fb084a _public_6fb084a
#define public_6fb0852 _public_6fb0852

PROC_DECLARE(0x6fb0810, internal_6fb0810, public_6fb0810);
/* CHUNK of public_6f81ed0 */
extern "C" NAKED register_t __cdecl internal_6fb0810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xAC]
        jmp public_6eec8d0
        public_6fb081b : nop
        lea ecx, ss:[ebp-0x88]
        jmp public_6eec8d0
        public_6fb0826 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6eec8d0
        public_6fb082e : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6f15350
        public_6fb0836 : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_6f15350
        public_6fb0841 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6fb3138]
        public_6fb084a : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6f15350
        public_6fb0852 : nop
        mov eax, offset public_6fc5b18
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0810)
        ASM_EXPORT_ENTRY_FIRST(0x6fb081b, public_6fb081b)
        ASM_EXPORT_ENTRY(0x6fb0826, public_6fb0826)
        ASM_EXPORT_ENTRY(0x6fb082e, public_6fb082e)
        ASM_EXPORT_ENTRY(0x6fb0836, public_6fb0836)
        ASM_EXPORT_ENTRY(0x6fb0841, public_6fb0841)
        ASM_EXPORT_ENTRY(0x6fb084a, public_6fb084a)
        ASM_EXPORT_ENTRY_LAST(0x6fb0852, public_6fb0852)
    }
}

#undef public_6fb081b
#undef public_6fb0826
#undef public_6fb082e
#undef public_6fb0836
#undef public_6fb0841
#undef public_6fb084a
#undef public_6fb0852

#pragma init_seg(compiler)
extern "C" void const* const public_6fb081b = __AsmFindLabelExport(&internal_6fb0810, 0x6fb081b);
extern "C" void const* const public_6fb0826 = __AsmFindLabelExport(&internal_6fb0810, 0x6fb0826);
extern "C" void const* const public_6fb082e = __AsmFindLabelExport(&internal_6fb0810, 0x6fb082e);
extern "C" void const* const public_6fb0836 = __AsmFindLabelExport(&internal_6fb0810, 0x6fb0836);
extern "C" void const* const public_6fb0841 = __AsmFindLabelExport(&internal_6fb0810, 0x6fb0841);
extern "C" void const* const public_6fb084a = __AsmFindLabelExport(&internal_6fb0810, 0x6fb084a);
extern "C" void const* const public_6fb0852 = __AsmFindLabelExport(&internal_6fb0810, 0x6fb0852);
