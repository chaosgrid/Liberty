#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba289 _public_5ba289
#define public_5ba291 _public_5ba291

PROC_DECLARE(0x5ba280, internal_5ba280, public_5ba280);
/* CHUNK of public_45aa10 */
extern "C" NAKED register_t __cdecl internal_5ba280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62a4]
        public_5ba289 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_5154f0
        public_5ba291 : nop
        mov eax, offset public_5f4664
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba280)
        ASM_EXPORT_ENTRY_FIRST(0x5ba289, public_5ba289)
        ASM_EXPORT_ENTRY_LAST(0x5ba291, public_5ba291)
    }
}

#undef public_5ba289
#undef public_5ba291

#pragma init_seg(compiler)
extern "C" void const* const public_5ba289 = __AsmFindLabelExport(&internal_5ba280, 0x5ba289);
extern "C" void const* const public_5ba291 = __AsmFindLabelExport(&internal_5ba280, 0x5ba291);
