#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248018 _public_6248018
#define public_6248023 _public_6248023

PROC_DECLARE(0x6248010, internal_6248010, public_6248010);
/* CHUNK of public_62134f0 */
extern "C" NAKED register_t __cdecl internal_6248010()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_6248018 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_6248023 : nop
        mov eax, offset public_6250ea0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248010)
        ASM_EXPORT_ENTRY_FIRST(0x6248018, public_6248018)
        ASM_EXPORT_ENTRY_LAST(0x6248023, public_6248023)
    }
}

#undef public_6248018
#undef public_6248023

#pragma init_seg(compiler)
extern "C" void const* const public_6248018 = __AsmFindLabelExport(&internal_6248010, 0x6248018);
extern "C" void const* const public_6248023 = __AsmFindLabelExport(&internal_6248010, 0x6248023);
