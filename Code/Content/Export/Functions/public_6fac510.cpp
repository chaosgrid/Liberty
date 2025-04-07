#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac518 _public_6fac518

PROC_DECLARE(0x6fac510, internal_6fac510, public_6fac510);
/* CHUNK of public_6ef7e30 */
extern "C" NAKED register_t __cdecl internal_6fac510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6fac518 : nop
        mov eax, offset public_6fc1180
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac510)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac518, public_6fac518)
    }
}

#undef public_6fac518

#pragma init_seg(compiler)
extern "C" void const* const public_6fac518 = __AsmFindLabelExport(&internal_6fac510, 0x6fac518);
