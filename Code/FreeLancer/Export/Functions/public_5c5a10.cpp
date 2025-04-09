#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5687e0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5a1b _public_5c5a1b
#define public_5c5a26 _public_5c5a26
#define public_5c5a31 _public_5c5a31
#define public_5c5a3c _public_5c5a3c
#define public_5c5a47 _public_5c5a47

PROC_DECLARE(0x5c5a10, internal_5c5a10, public_5c5a10);
/* CHUNK of public_5b62a0 */
extern "C" NAKED register_t __cdecl internal_5c5a10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2178]
        jmp public_5687e0
        public_5c5a1b : nop
        lea ecx, ss:[ebp-0x2080]
        jmp public_5ad620
        public_5c5a26 : nop
        lea ecx, ss:[ebp-0x2034]
        jmp public_487c30
        public_5c5a31 : nop
        lea ecx, ss:[ebp-0x20A4]
        jmp public_5ad620
        public_5c5a3c : nop
        lea ecx, ss:[ebp-0x205C]
        jmp public_487c30
        public_5c5a47 : nop
        mov eax, offset public_5ffb74
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5a10)
        ASM_EXPORT_ENTRY_FIRST(0x5c5a1b, public_5c5a1b)
        ASM_EXPORT_ENTRY(0x5c5a26, public_5c5a26)
        ASM_EXPORT_ENTRY(0x5c5a31, public_5c5a31)
        ASM_EXPORT_ENTRY(0x5c5a3c, public_5c5a3c)
        ASM_EXPORT_ENTRY_LAST(0x5c5a47, public_5c5a47)
    }
}

#undef public_5c5a1b
#undef public_5c5a26
#undef public_5c5a31
#undef public_5c5a3c
#undef public_5c5a47

#pragma init_seg(compiler)
extern "C" void const* const public_5c5a1b = __AsmFindLabelExport(&internal_5c5a10, 0x5c5a1b);
extern "C" void const* const public_5c5a26 = __AsmFindLabelExport(&internal_5c5a10, 0x5c5a26);
extern "C" void const* const public_5c5a31 = __AsmFindLabelExport(&internal_5c5a10, 0x5c5a31);
extern "C" void const* const public_5c5a3c = __AsmFindLabelExport(&internal_5c5a10, 0x5c5a3c);
extern "C" void const* const public_5c5a47 = __AsmFindLabelExport(&internal_5c5a10, 0x5c5a47);
