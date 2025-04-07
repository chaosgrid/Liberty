#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e00ae _public_65e00ae
#define public_65e00b9 _public_65e00b9

PROC_DECLARE(0x65e00a0, internal_65e00a0, public_65e00a0);
/* CHUNK of public_65d5d50 */
extern "C" NAKED register_t __cdecl internal_65e00a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x434]
        push eax
        call public_65d6cb8
        pop ecx
        ret 
        public_65e00ae : nop
        lea ecx, ss:[ebp-0x43C]
        jmp public_65d2630
        public_65e00b9 : nop
        mov eax, offset public_65e214c
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e00a0)
        ASM_EXPORT_ENTRY_FIRST(0x65e00ae, public_65e00ae)
        ASM_EXPORT_ENTRY_LAST(0x65e00b9, public_65e00b9)
    }
}

#undef public_65e00ae
#undef public_65e00b9

#pragma init_seg(compiler)
extern "C" void const* const public_65e00ae = __AsmFindLabelExport(&internal_65e00a0, 0x65e00ae);
extern "C" void const* const public_65e00b9 = __AsmFindLabelExport(&internal_65e00a0, 0x65e00b9);
