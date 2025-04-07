#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac1e8 _public_6fac1e8
#define public_6fac1f0 _public_6fac1f0
#define public_6fac1f8 _public_6fac1f8
#define public_6fac200 _public_6fac200
#define public_6fac208 _public_6fac208
#define public_6fac210 _public_6fac210
#define public_6fac218 _public_6fac218

PROC_DECLARE(0x6fac1e0, internal_6fac1e0, public_6fac1e0);
/* CHUNK of public_6ef4180 */
extern "C" NAKED register_t __cdecl internal_6fac1e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6eec8d0
        public_6fac1e8 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6eec8d0
        public_6fac1f0 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6eec8d0
        public_6fac1f8 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_6eec8d0
        public_6fac200 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6eec8d0
        public_6fac208 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fac210 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fac218 : nop
        mov eax, offset public_6fc0e80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac1e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac1e8, public_6fac1e8)
        ASM_EXPORT_ENTRY(0x6fac1f0, public_6fac1f0)
        ASM_EXPORT_ENTRY(0x6fac1f8, public_6fac1f8)
        ASM_EXPORT_ENTRY(0x6fac200, public_6fac200)
        ASM_EXPORT_ENTRY(0x6fac208, public_6fac208)
        ASM_EXPORT_ENTRY(0x6fac210, public_6fac210)
        ASM_EXPORT_ENTRY_LAST(0x6fac218, public_6fac218)
    }
}

#undef public_6fac1e8
#undef public_6fac1f0
#undef public_6fac1f8
#undef public_6fac200
#undef public_6fac208
#undef public_6fac210
#undef public_6fac218

#pragma init_seg(compiler)
extern "C" void const* const public_6fac1e8 = __AsmFindLabelExport(&internal_6fac1e0, 0x6fac1e8);
extern "C" void const* const public_6fac1f0 = __AsmFindLabelExport(&internal_6fac1e0, 0x6fac1f0);
extern "C" void const* const public_6fac1f8 = __AsmFindLabelExport(&internal_6fac1e0, 0x6fac1f8);
extern "C" void const* const public_6fac200 = __AsmFindLabelExport(&internal_6fac1e0, 0x6fac200);
extern "C" void const* const public_6fac208 = __AsmFindLabelExport(&internal_6fac1e0, 0x6fac208);
extern "C" void const* const public_6fac210 = __AsmFindLabelExport(&internal_6fac1e0, 0x6fac210);
extern "C" void const* const public_6fac218 = __AsmFindLabelExport(&internal_6fac1e0, 0x6fac218);
