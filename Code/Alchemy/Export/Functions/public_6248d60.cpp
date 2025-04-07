#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248d68 _public_6248d68
#define public_6248d73 _public_6248d73

PROC_DECLARE(0x6248d60, internal_6248d60, public_6248d60);
/* CHUNK of public_62242d0 */
extern "C" NAKED register_t __cdecl internal_6248d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_6248d68 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_6248d73 : nop
        mov eax, offset public_6251c80
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248d60)
        ASM_EXPORT_ENTRY_FIRST(0x6248d68, public_6248d68)
        ASM_EXPORT_ENTRY_LAST(0x6248d73, public_6248d73)
    }
}

#undef public_6248d68
#undef public_6248d73

#pragma init_seg(compiler)
extern "C" void const* const public_6248d68 = __AsmFindLabelExport(&internal_6248d60, 0x6248d68);
extern "C" void const* const public_6248d73 = __AsmFindLabelExport(&internal_6248d60, 0x6248d73);
