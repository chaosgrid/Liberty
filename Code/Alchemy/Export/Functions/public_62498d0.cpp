#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_62307e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62498d8 _public_62498d8
#define public_62498e0 _public_62498e0
#define public_62498e8 _public_62498e8
#define public_62498f0 _public_62498f0

PROC_DECLARE(0x62498d0, internal_62498d0, public_62498d0);
/* CHUNK of public_6230370 */
extern "C" NAKED register_t __cdecl internal_62498d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_62307e0
        public_62498d8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_62307d0
        public_62498e0 : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_62307e0
        public_62498e8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_62307d0
        public_62498f0 : nop
        mov eax, offset public_62528c0
        jmp public_6246126
        UNREACHABLE_TRAP(0x62498d0)
        ASM_EXPORT_ENTRY_FIRST(0x62498d8, public_62498d8)
        ASM_EXPORT_ENTRY(0x62498e0, public_62498e0)
        ASM_EXPORT_ENTRY(0x62498e8, public_62498e8)
        ASM_EXPORT_ENTRY_LAST(0x62498f0, public_62498f0)
    }
}

#undef public_62498d8
#undef public_62498e0
#undef public_62498e8
#undef public_62498f0

#pragma init_seg(compiler)
extern "C" void const* const public_62498d8 = __AsmFindLabelExport(&internal_62498d0, 0x62498d8);
extern "C" void const* const public_62498e0 = __AsmFindLabelExport(&internal_62498d0, 0x62498e0);
extern "C" void const* const public_62498e8 = __AsmFindLabelExport(&internal_62498d0, 0x62498e8);
extern "C" void const* const public_62498f0 = __AsmFindLabelExport(&internal_62498d0, 0x62498f0);
