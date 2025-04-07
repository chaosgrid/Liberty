#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394848 _public_6394848
#define public_6394850 _public_6394850

PROC_DECLARE(0x6394840, internal_6394840, public_6394840);
/* CHUNK of public_62b8ab0 */
extern "C" NAKED register_t __cdecl internal_6394840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_630e210
        public_6394848 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_6394850 : nop
        mov eax, offset public_63ade14
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394840)
        ASM_EXPORT_ENTRY_FIRST(0x6394848, public_6394848)
        ASM_EXPORT_ENTRY_LAST(0x6394850, public_6394850)
    }
}

#undef public_6394848
#undef public_6394850

#pragma init_seg(compiler)
extern "C" void const* const public_6394848 = __AsmFindLabelExport(&internal_6394840, 0x6394848);
extern "C" void const* const public_6394850 = __AsmFindLabelExport(&internal_6394840, 0x6394850);
