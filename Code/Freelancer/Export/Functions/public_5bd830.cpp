#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd838 _public_5bd838
#define public_5bd843 _public_5bd843

PROC_DECLARE(0x5bd830, internal_5bd830, public_5bd830);
/* CHUNK of public_4c8c20 */
extern "C" NAKED register_t __cdecl internal_5bd830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5bd838 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_59ef20
        public_5bd843 : nop
        mov eax, offset public_5f7c6c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd830)
        ASM_EXPORT_ENTRY_FIRST(0x5bd838, public_5bd838)
        ASM_EXPORT_ENTRY_LAST(0x5bd843, public_5bd843)
    }
}

#undef public_5bd838
#undef public_5bd843

#pragma init_seg(compiler)
extern "C" void const* const public_5bd838 = __AsmFindLabelExport(&internal_5bd830, 0x5bd838);
extern "C" void const* const public_5bd843 = __AsmFindLabelExport(&internal_5bd830, 0x5bd843);
