#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafb68 _public_6fafb68
#define public_6fafb70 _public_6fafb70
#define public_6fafb78 _public_6fafb78

PROC_DECLARE(0x6fafb60, internal_6fafb60, public_6fafb60);
/* CHUNK of public_6f63cc0 */
extern "C" NAKED register_t __cdecl internal_6fafb60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafb68 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafb70 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafb78 : nop
        mov eax, offset public_6fc4c10
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafb60)
        ASM_EXPORT_ENTRY_FIRST(0x6fafb68, public_6fafb68)
        ASM_EXPORT_ENTRY(0x6fafb70, public_6fafb70)
        ASM_EXPORT_ENTRY_LAST(0x6fafb78, public_6fafb78)
    }
}

#undef public_6fafb68
#undef public_6fafb70
#undef public_6fafb78

#pragma init_seg(compiler)
extern "C" void const* const public_6fafb68 = __AsmFindLabelExport(&internal_6fafb60, 0x6fafb68);
extern "C" void const* const public_6fafb70 = __AsmFindLabelExport(&internal_6fafb60, 0x6fafb70);
extern "C" void const* const public_6fafb78 = __AsmFindLabelExport(&internal_6fafb60, 0x6fafb78);
