#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1228 _public_6fb1228
#define public_6fb1230 _public_6fb1230

PROC_DECLARE(0x6fb1220, internal_6fb1220, public_6fb1220);
/* CHUNK of public_6f8c200 */
extern "C" NAKED register_t __cdecl internal_6fb1220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f867a0
        public_6fb1228 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f867a0
        public_6fb1230 : nop
        mov eax, offset public_6fc67e0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1220)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1228, public_6fb1228)
        ASM_EXPORT_ENTRY_LAST(0x6fb1230, public_6fb1230)
    }
}

#undef public_6fb1228
#undef public_6fb1230

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1228 = __AsmFindLabelExport(&internal_6fb1220, 0x6fb1228);
extern "C" void const* const public_6fb1230 = __AsmFindLabelExport(&internal_6fb1220, 0x6fb1230);
