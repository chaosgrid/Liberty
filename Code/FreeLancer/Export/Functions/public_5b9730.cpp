#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9738 _public_5b9738
#define public_5b9743 _public_5b9743

PROC_DECLARE(0x5b9730, internal_5b9730, public_5b9730);
/* CHUNK of public_4437d0 */
extern "C" NAKED register_t __cdecl internal_5b9730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5594b0
        public_5b9738 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp public_457dc0
        public_5b9743 : nop
        mov eax, offset public_5f3750
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9730)
        ASM_EXPORT_ENTRY_FIRST(0x5b9738, public_5b9738)
        ASM_EXPORT_ENTRY_LAST(0x5b9743, public_5b9743)
    }
}

#undef public_5b9738
#undef public_5b9743

#pragma init_seg(compiler)
extern "C" void const* const public_5b9738 = __AsmFindLabelExport(&internal_5b9730, 0x5b9738);
extern "C" void const* const public_5b9743 = __AsmFindLabelExport(&internal_5b9730, 0x5b9743);
