#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220d40);
CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248b78 _public_6248b78
#define public_6248b80 _public_6248b80

PROC_DECLARE(0x6248b70, internal_6248b70, public_6248b70);
/* CHUNK of public_6220140 */
extern "C" NAKED register_t __cdecl internal_6248b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_6222ec0
        public_6248b78 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6220d40
        public_6248b80 : nop
        mov eax, offset public_6251a44
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248b70)
        ASM_EXPORT_ENTRY_FIRST(0x6248b78, public_6248b78)
        ASM_EXPORT_ENTRY_LAST(0x6248b80, public_6248b80)
    }
}

#undef public_6248b78
#undef public_6248b80

#pragma init_seg(compiler)
extern "C" void const* const public_6248b78 = __AsmFindLabelExport(&internal_6248b70, 0x6248b78);
extern "C" void const* const public_6248b80 = __AsmFindLabelExport(&internal_6248b70, 0x6248b80);
