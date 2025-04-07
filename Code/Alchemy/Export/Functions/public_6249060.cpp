#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6202ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249068 _public_6249068
#define public_6249070 _public_6249070
#define public_6249078 _public_6249078

PROC_DECLARE(0x6249060, internal_6249060, public_6249060);
/* CHUNK of public_62274b0 */
extern "C" NAKED register_t __cdecl internal_6249060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_62022b0
        public_6249068 : nop
        lea ecx, ss:[ebp+8]
        jmp public_62022b0
        public_6249070 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6202ff0
        public_6249078 : nop
        mov eax, offset public_6251fe4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249060)
        ASM_EXPORT_ENTRY_FIRST(0x6249068, public_6249068)
        ASM_EXPORT_ENTRY(0x6249070, public_6249070)
        ASM_EXPORT_ENTRY_LAST(0x6249078, public_6249078)
    }
}

#undef public_6249068
#undef public_6249070
#undef public_6249078

#pragma init_seg(compiler)
extern "C" void const* const public_6249068 = __AsmFindLabelExport(&internal_6249060, 0x6249068);
extern "C" void const* const public_6249070 = __AsmFindLabelExport(&internal_6249060, 0x6249070);
extern "C" void const* const public_6249078 = __AsmFindLabelExport(&internal_6249060, 0x6249078);
