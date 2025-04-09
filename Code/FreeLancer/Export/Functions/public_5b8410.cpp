#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8418 _public_5b8418
#define public_5b8420 _public_5b8420
#define public_5b8428 _public_5b8428
#define public_5b8430 _public_5b8430
#define public_5b8438 _public_5b8438

PROC_DECLARE(0x5b8410, internal_5b8410, public_5b8410);
/* CHUNK of public_404720 */
extern "C" NAKED register_t __cdecl internal_5b8410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_405840
        public_5b8418 : nop
        lea ecx, ss:[ebp-0x48]
        jmp public_405840
        public_5b8420 : nop
        lea ecx, ss:[ebp-0x54]
        jmp public_405840
        public_5b8428 : nop
        lea ecx, ss:[ebp-0x60]
        jmp public_405840
        public_5b8430 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_405840
        public_5b8438 : nop
        mov eax, offset public_5f1f14
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8410)
        ASM_EXPORT_ENTRY_FIRST(0x5b8418, public_5b8418)
        ASM_EXPORT_ENTRY(0x5b8420, public_5b8420)
        ASM_EXPORT_ENTRY(0x5b8428, public_5b8428)
        ASM_EXPORT_ENTRY(0x5b8430, public_5b8430)
        ASM_EXPORT_ENTRY_LAST(0x5b8438, public_5b8438)
    }
}

#undef public_5b8418
#undef public_5b8420
#undef public_5b8428
#undef public_5b8430
#undef public_5b8438

#pragma init_seg(compiler)
extern "C" void const* const public_5b8418 = __AsmFindLabelExport(&internal_5b8410, 0x5b8418);
extern "C" void const* const public_5b8420 = __AsmFindLabelExport(&internal_5b8410, 0x5b8420);
extern "C" void const* const public_5b8428 = __AsmFindLabelExport(&internal_5b8410, 0x5b8428);
extern "C" void const* const public_5b8430 = __AsmFindLabelExport(&internal_5b8410, 0x5b8430);
extern "C" void const* const public_5b8438 = __AsmFindLabelExport(&internal_5b8410, 0x5b8438);
