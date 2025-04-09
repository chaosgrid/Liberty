#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be629 _public_5be629
#define public_5be631 _public_5be631

PROC_DECLARE(0x5be620, internal_5be620, public_5be620);
/* CHUNK of public_4de4c0 */
extern "C" NAKED register_t __cdecl internal_5be620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c6550]
        public_5be629 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_4de730
        public_5be631 : nop
        mov eax, offset public_5f885c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be620)
        ASM_EXPORT_ENTRY_FIRST(0x5be629, public_5be629)
        ASM_EXPORT_ENTRY_LAST(0x5be631, public_5be631)
    }
}

#undef public_5be629
#undef public_5be631

#pragma init_seg(compiler)
extern "C" void const* const public_5be629 = __AsmFindLabelExport(&internal_5be620, 0x5be629);
extern "C" void const* const public_5be631 = __AsmFindLabelExport(&internal_5be620, 0x5be631);
