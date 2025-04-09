#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba259 _public_5ba259
#define public_5ba261 _public_5ba261
#define public_5ba269 _public_5ba269

PROC_DECLARE(0x5ba250, internal_5ba250, public_5ba250);
/* CHUNK of public_45a890 */
extern "C" NAKED register_t __cdecl internal_5ba250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62a4]
        public_5ba259 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_5154f0
        public_5ba261 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_5154f0
        public_5ba269 : nop
        mov eax, offset public_5f4638
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba250)
        ASM_EXPORT_ENTRY_FIRST(0x5ba259, public_5ba259)
        ASM_EXPORT_ENTRY(0x5ba261, public_5ba261)
        ASM_EXPORT_ENTRY_LAST(0x5ba269, public_5ba269)
    }
}

#undef public_5ba259
#undef public_5ba261
#undef public_5ba269

#pragma init_seg(compiler)
extern "C" void const* const public_5ba259 = __AsmFindLabelExport(&internal_5ba250, 0x5ba259);
extern "C" void const* const public_5ba261 = __AsmFindLabelExport(&internal_5ba250, 0x5ba261);
extern "C" void const* const public_5ba269 = __AsmFindLabelExport(&internal_5ba250, 0x5ba269);
