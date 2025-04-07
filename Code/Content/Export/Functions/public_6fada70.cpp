#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fada78 _public_6fada78

PROC_DECLARE(0x6fada70, internal_6fada70, public_6fada70);
/* CHUNK of public_6f18d20 */
extern "C" NAKED register_t __cdecl internal_6fada70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fada78 : nop
        mov eax, offset public_6fc28e4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fada70)
        ASM_EXPORT_ENTRY_SINGLE(0x6fada78, public_6fada78)
    }
}

#undef public_6fada78

#pragma init_seg(compiler)
extern "C" void const* const public_6fada78 = __AsmFindLabelExport(&internal_6fada70, 0x6fada78);
