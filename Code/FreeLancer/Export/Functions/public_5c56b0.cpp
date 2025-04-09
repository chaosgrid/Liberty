#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c56bc _public_5c56bc
#define public_5c56c7 _public_5c56c7
#define public_5c56d3 _public_5c56d3
#define public_5c56df _public_5c56df
#define public_5c56eb _public_5c56eb
#define public_5c56f6 _public_5c56f6

PROC_DECLARE(0x5c56b0, internal_5c56b0, public_5c56b0);
/* CHUNK of public_5ac710 */
extern "C" NAKED register_t __cdecl internal_5c56b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8A8]
        jmp dword ptr ds : [public_5c7058]
        public_5c56bc : nop
        lea ecx, ss:[ebp-0x890]
        jmp public_4de730
        public_5c56c7 : nop
        lea ecx, ss:[ebp-0x864]
        jmp dword ptr ds : [public_5c7058]
        public_5c56d3 : nop
        lea ecx, ss:[ebp-0x854]
        jmp dword ptr ds : [public_5c7058]
        public_5c56df : nop
        lea ecx, ss:[ebp-0x844]
        jmp dword ptr ds : [public_5c7090]
        public_5c56eb : nop
        lea ecx, ss:[ebp-0x8A8]
        jmp public_5686b0
        public_5c56f6 : nop
        mov eax, offset public_5ff4d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c56b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c56bc, public_5c56bc)
        ASM_EXPORT_ENTRY(0x5c56c7, public_5c56c7)
        ASM_EXPORT_ENTRY(0x5c56d3, public_5c56d3)
        ASM_EXPORT_ENTRY(0x5c56df, public_5c56df)
        ASM_EXPORT_ENTRY(0x5c56eb, public_5c56eb)
        ASM_EXPORT_ENTRY_LAST(0x5c56f6, public_5c56f6)
    }
}

#undef public_5c56bc
#undef public_5c56c7
#undef public_5c56d3
#undef public_5c56df
#undef public_5c56eb
#undef public_5c56f6

#pragma init_seg(compiler)
extern "C" void const* const public_5c56bc = __AsmFindLabelExport(&internal_5c56b0, 0x5c56bc);
extern "C" void const* const public_5c56c7 = __AsmFindLabelExport(&internal_5c56b0, 0x5c56c7);
extern "C" void const* const public_5c56d3 = __AsmFindLabelExport(&internal_5c56b0, 0x5c56d3);
extern "C" void const* const public_5c56df = __AsmFindLabelExport(&internal_5c56b0, 0x5c56df);
extern "C" void const* const public_5c56eb = __AsmFindLabelExport(&internal_5c56b0, 0x5c56eb);
extern "C" void const* const public_5c56f6 = __AsmFindLabelExport(&internal_5c56b0, 0x5c56f6);
