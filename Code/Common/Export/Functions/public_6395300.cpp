#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6470);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395308 _public_6395308
#define public_6395310 _public_6395310
#define public_6395318 _public_6395318

PROC_DECLARE(0x6395300, internal_6395300, public_6395300);
/* CHUNK of public_62dd3d0 */
extern "C" NAKED register_t __cdecl internal_6395300()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_62881d0
        public_6395308 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_62881d0
        public_6395310 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_62e6470
        public_6395318 : nop
        mov eax, offset public_63aedc4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395300)
        ASM_EXPORT_ENTRY_FIRST(0x6395308, public_6395308)
        ASM_EXPORT_ENTRY(0x6395310, public_6395310)
        ASM_EXPORT_ENTRY_LAST(0x6395318, public_6395318)
    }
}

#undef public_6395308
#undef public_6395310
#undef public_6395318

#pragma init_seg(compiler)
extern "C" void const* const public_6395308 = __AsmFindLabelExport(&internal_6395300, 0x6395308);
extern "C" void const* const public_6395310 = __AsmFindLabelExport(&internal_6395300, 0x6395310);
extern "C" void const* const public_6395318 = __AsmFindLabelExport(&internal_6395300, 0x6395318);
