#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dfe8e _public_65dfe8e
#define public_65dfe99 _public_65dfe99
#define public_65dfea4 _public_65dfea4

PROC_DECLARE(0x65dfe80, internal_65dfe80, public_65dfe80);
/* CHUNK of public_65d1470 */
extern "C" NAKED register_t __cdecl internal_65dfe80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x53C]
        push eax
        call public_65d6cb8
        pop ecx
        ret 
        public_65dfe8e : nop
        lea ecx, ss:[ebp-0x53C]
        jmp public_65d2630
        public_65dfe99 : nop
        lea ecx, ss:[ebp-0x534]
        jmp public_65d2630
        public_65dfea4 : nop
        mov eax, offset public_65e1e70
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dfe80)
        ASM_EXPORT_ENTRY_FIRST(0x65dfe8e, public_65dfe8e)
        ASM_EXPORT_ENTRY(0x65dfe99, public_65dfe99)
        ASM_EXPORT_ENTRY_LAST(0x65dfea4, public_65dfea4)
    }
}

#undef public_65dfe8e
#undef public_65dfe99
#undef public_65dfea4

#pragma init_seg(compiler)
extern "C" void const* const public_65dfe8e = __AsmFindLabelExport(&internal_65dfe80, 0x65dfe8e);
extern "C" void const* const public_65dfe99 = __AsmFindLabelExport(&internal_65dfe80, 0x65dfe99);
extern "C" void const* const public_65dfea4 = __AsmFindLabelExport(&internal_65dfe80, 0x65dfea4);
