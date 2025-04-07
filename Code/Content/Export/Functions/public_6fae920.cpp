#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae928 _public_6fae928
#define public_6fae933 _public_6fae933
#define public_6fae93e _public_6fae93e

PROC_DECLARE(0x6fae920, internal_6fae920, public_6fae920);
/* CHUNK of public_6f305d0 */
extern "C" NAKED register_t __cdecl internal_6fae920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eec8d0
        public_6fae928 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6eec8d0
        public_6fae933 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_6eec8d0
        public_6fae93e : nop
        mov eax, offset public_6fc3830
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae920)
        ASM_EXPORT_ENTRY_FIRST(0x6fae928, public_6fae928)
        ASM_EXPORT_ENTRY(0x6fae933, public_6fae933)
        ASM_EXPORT_ENTRY_LAST(0x6fae93e, public_6fae93e)
    }
}

#undef public_6fae928
#undef public_6fae933
#undef public_6fae93e

#pragma init_seg(compiler)
extern "C" void const* const public_6fae928 = __AsmFindLabelExport(&internal_6fae920, 0x6fae928);
extern "C" void const* const public_6fae933 = __AsmFindLabelExport(&internal_6fae920, 0x6fae933);
extern "C" void const* const public_6fae93e = __AsmFindLabelExport(&internal_6fae920, 0x6fae93e);
