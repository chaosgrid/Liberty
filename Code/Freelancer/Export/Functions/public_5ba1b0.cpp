#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba1bc _public_5ba1bc
#define public_5ba1c7 _public_5ba1c7
#define public_5ba1d3 _public_5ba1d3
#define public_5ba1df _public_5ba1df

PROC_DECLARE(0x5ba1b0, internal_5ba1b0, public_5ba1b0);
/* CHUNK of public_459470 */
extern "C" NAKED register_t __cdecl internal_5ba1b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5ba1bc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5ba1c7 : nop
        mov ecx, dword ptr ss : [ebp-0x16C0]
        jmp dword ptr ds : [public_5c7090]
        public_5ba1d3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5ba1df : nop
        mov eax, offset public_5f458c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba1b0)
        ASM_EXPORT_ENTRY_FIRST(0x5ba1bc, public_5ba1bc)
        ASM_EXPORT_ENTRY(0x5ba1c7, public_5ba1c7)
        ASM_EXPORT_ENTRY(0x5ba1d3, public_5ba1d3)
        ASM_EXPORT_ENTRY_LAST(0x5ba1df, public_5ba1df)
    }
}

#undef public_5ba1bc
#undef public_5ba1c7
#undef public_5ba1d3
#undef public_5ba1df

#pragma init_seg(compiler)
extern "C" void const* const public_5ba1bc = __AsmFindLabelExport(&internal_5ba1b0, 0x5ba1bc);
extern "C" void const* const public_5ba1c7 = __AsmFindLabelExport(&internal_5ba1b0, 0x5ba1c7);
extern "C" void const* const public_5ba1d3 = __AsmFindLabelExport(&internal_5ba1b0, 0x5ba1d3);
extern "C" void const* const public_5ba1df = __AsmFindLabelExport(&internal_5ba1b0, 0x5ba1df);
