#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c00);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248348 _public_6248348
#define public_6248350 _public_6248350

PROC_DECLARE(0x6248340, internal_6248340, public_6248340);
/* CHUNK of public_6217ae0 */
extern "C" NAKED register_t __cdecl internal_6248340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6217c00
        public_6248348 : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_6217c00
        public_6248350 : nop
        mov eax, offset public_6251204
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248340)
        ASM_EXPORT_ENTRY_FIRST(0x6248348, public_6248348)
        ASM_EXPORT_ENTRY_LAST(0x6248350, public_6248350)
    }
}

#undef public_6248348
#undef public_6248350

#pragma init_seg(compiler)
extern "C" void const* const public_6248348 = __AsmFindLabelExport(&internal_6248340, 0x6248348);
extern "C" void const* const public_6248350 = __AsmFindLabelExport(&internal_6248340, 0x6248350);
