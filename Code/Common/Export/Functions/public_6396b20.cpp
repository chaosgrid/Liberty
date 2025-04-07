#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396b28 _public_6396b28
#define public_6396b30 _public_6396b30
#define public_6396b38 _public_6396b38

PROC_DECLARE(0x6396b20, internal_6396b20, public_6396b20);
/* CHUNK of public_631b490 */
extern "C" NAKED register_t __cdecl internal_6396b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_630e210
        public_6396b28 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_630e210
        public_6396b30 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_6396b38 : nop
        mov eax, offset public_63b0aa0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396b20)
        ASM_EXPORT_ENTRY_FIRST(0x6396b28, public_6396b28)
        ASM_EXPORT_ENTRY(0x6396b30, public_6396b30)
        ASM_EXPORT_ENTRY_LAST(0x6396b38, public_6396b38)
    }
}

#undef public_6396b28
#undef public_6396b30
#undef public_6396b38

#pragma init_seg(compiler)
extern "C" void const* const public_6396b28 = __AsmFindLabelExport(&internal_6396b20, 0x6396b28);
extern "C" void const* const public_6396b30 = __AsmFindLabelExport(&internal_6396b20, 0x6396b30);
extern "C" void const* const public_6396b38 = __AsmFindLabelExport(&internal_6396b20, 0x6396b38);
