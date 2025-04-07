#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faca18 _public_6faca18

PROC_DECLARE(0x6faca10, internal_6faca10, public_6faca10);
/* CHUNK of public_6efebb0 */
extern "C" NAKED register_t __cdecl internal_6faca10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea1650
        public_6faca18 : nop
        mov eax, offset public_6fc16a8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faca10)
        ASM_EXPORT_ENTRY_SINGLE(0x6faca18, public_6faca18)
    }
}

#undef public_6faca18

#pragma init_seg(compiler)
extern "C" void const* const public_6faca18 = __AsmFindLabelExport(&internal_6faca10, 0x6faca18);
