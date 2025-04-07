#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c10);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248328 _public_6248328
#define public_6248330 _public_6248330

PROC_DECLARE(0x6248320, internal_6248320, public_6248320);
/* CHUNK of public_6217640 */
extern "C" NAKED register_t __cdecl internal_6248320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_6217c10
        public_6248328 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6217c10
        public_6248330 : nop
        mov eax, offset public_62511d8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248320)
        ASM_EXPORT_ENTRY_FIRST(0x6248328, public_6248328)
        ASM_EXPORT_ENTRY_LAST(0x6248330, public_6248330)
    }
}

#undef public_6248328
#undef public_6248330

#pragma init_seg(compiler)
extern "C" void const* const public_6248328 = __AsmFindLabelExport(&internal_6248320, 0x6248328);
extern "C" void const* const public_6248330 = __AsmFindLabelExport(&internal_6248320, 0x6248330);
