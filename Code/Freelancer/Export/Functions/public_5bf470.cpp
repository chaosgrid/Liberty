#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf478 _public_5bf478
#define public_5bf480 _public_5bf480
#define public_5bf488 _public_5bf488
#define public_5bf490 _public_5bf490

PROC_DECLARE(0x5bf470, internal_5bf470, public_5bf470);
/* CHUNK of public_4f7480 */
extern "C" NAKED register_t __cdecl internal_5bf470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_405840
        public_5bf478 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_405840
        public_5bf480 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_405840
        public_5bf488 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_405840
        public_5bf490 : nop
        mov eax, offset public_5f93f0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf470)
        ASM_EXPORT_ENTRY_FIRST(0x5bf478, public_5bf478)
        ASM_EXPORT_ENTRY(0x5bf480, public_5bf480)
        ASM_EXPORT_ENTRY(0x5bf488, public_5bf488)
        ASM_EXPORT_ENTRY_LAST(0x5bf490, public_5bf490)
    }
}

#undef public_5bf478
#undef public_5bf480
#undef public_5bf488
#undef public_5bf490

#pragma init_seg(compiler)
extern "C" void const* const public_5bf478 = __AsmFindLabelExport(&internal_5bf470, 0x5bf478);
extern "C" void const* const public_5bf480 = __AsmFindLabelExport(&internal_5bf470, 0x5bf480);
extern "C" void const* const public_5bf488 = __AsmFindLabelExport(&internal_5bf470, 0x5bf488);
extern "C" void const* const public_5bf490 = __AsmFindLabelExport(&internal_5bf470, 0x5bf490);
