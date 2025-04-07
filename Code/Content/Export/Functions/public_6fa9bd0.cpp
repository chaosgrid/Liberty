#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9bd8 _public_6fa9bd8

PROC_DECLARE(0x6fa9bd0, internal_6fa9bd0, public_6fa9bd0);
/* CHUNK of public_6eab100 */
extern "C" NAKED register_t __cdecl internal_6fa9bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fa9bd8 : nop
        mov eax, offset public_6fbdf18
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9bd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9bd8, public_6fa9bd8)
    }
}

#undef public_6fa9bd8

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9bd8 = __AsmFindLabelExport(&internal_6fa9bd0, 0x6fa9bd8);
