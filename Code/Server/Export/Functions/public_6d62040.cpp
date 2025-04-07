#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19f00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62049 _public_6d62049
#define public_6d62052 _public_6d62052
#define public_6d6205a _public_6d6205a
#define public_6d62063 _public_6d62063
#define public_6d6206b _public_6d6206b

PROC_DECLARE(0x6d62040, internal_6d62040, public_6d62040);
/* CHUNK of public_6d1aa70 */
extern "C" NAKED register_t __cdecl internal_6d62040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6d647f0]
        public_6d62049 : nop
        lea ecx, ss:[ebp-0x34]
        jmp dword ptr ds : [public_6d64800]
        public_6d62052 : nop
        lea ecx, ss:[ebp+0xC]
        jmp public_6d19f00
        public_6d6205a : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_6d647f8]
        public_6d62063 : nop
        lea ecx, ss:[ebp+0xC]
        jmp public_6d19f00
        public_6d6206b : nop
        mov eax, offset public_6d72dcc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62040)
        ASM_EXPORT_ENTRY_FIRST(0x6d62049, public_6d62049)
        ASM_EXPORT_ENTRY(0x6d62052, public_6d62052)
        ASM_EXPORT_ENTRY(0x6d6205a, public_6d6205a)
        ASM_EXPORT_ENTRY(0x6d62063, public_6d62063)
        ASM_EXPORT_ENTRY_LAST(0x6d6206b, public_6d6206b)
    }
}

#undef public_6d62049
#undef public_6d62052
#undef public_6d6205a
#undef public_6d62063
#undef public_6d6206b

#pragma init_seg(compiler)
extern "C" void const* const public_6d62049 = __AsmFindLabelExport(&internal_6d62040, 0x6d62049);
extern "C" void const* const public_6d62052 = __AsmFindLabelExport(&internal_6d62040, 0x6d62052);
extern "C" void const* const public_6d6205a = __AsmFindLabelExport(&internal_6d62040, 0x6d6205a);
extern "C" void const* const public_6d62063 = __AsmFindLabelExport(&internal_6d62040, 0x6d62063);
extern "C" void const* const public_6d6206b = __AsmFindLabelExport(&internal_6d62040, 0x6d6206b);
