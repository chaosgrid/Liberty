#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6e2b _public_65c6e2b
#define public_65c6e36 _public_65c6e36

PROC_DECLARE(0x65c6e20, internal_65c6e20, public_65c6e20);
/* CHUNK of public_65c2ec0 */
extern "C" NAKED register_t __cdecl internal_65c6e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_65c4240
        public_65c6e2b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_65c4240
        public_65c6e36 : nop
        mov eax, offset public_65c7750
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6e20)
        ASM_EXPORT_ENTRY_FIRST(0x65c6e2b, public_65c6e2b)
        ASM_EXPORT_ENTRY_LAST(0x65c6e36, public_65c6e36)
    }
}

#undef public_65c6e2b
#undef public_65c6e36

#pragma init_seg(compiler)
extern "C" void const* const public_65c6e2b = __AsmFindLabelExport(&internal_65c6e20, 0x65c6e2b);
extern "C" void const* const public_65c6e36 = __AsmFindLabelExport(&internal_65c6e20, 0x65c6e36);
