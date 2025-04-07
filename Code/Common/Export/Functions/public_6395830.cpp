#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395838 _public_6395838
#define public_6395840 _public_6395840
#define public_6395848 _public_6395848

PROC_DECLARE(0x6395830, internal_6395830, public_6395830);
/* CHUNK of public_62f55d0 */
extern "C" NAKED register_t __cdecl internal_6395830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f02b0
        public_6395838 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_626fe00
        public_6395840 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_626fe00
        public_6395848 : nop
        mov eax, offset public_63af638
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395830)
        ASM_EXPORT_ENTRY_FIRST(0x6395838, public_6395838)
        ASM_EXPORT_ENTRY(0x6395840, public_6395840)
        ASM_EXPORT_ENTRY_LAST(0x6395848, public_6395848)
    }
}

#undef public_6395838
#undef public_6395840
#undef public_6395848

#pragma init_seg(compiler)
extern "C" void const* const public_6395838 = __AsmFindLabelExport(&internal_6395830, 0x6395838);
extern "C" void const* const public_6395840 = __AsmFindLabelExport(&internal_6395830, 0x6395840);
extern "C" void const* const public_6395848 = __AsmFindLabelExport(&internal_6395830, 0x6395848);
