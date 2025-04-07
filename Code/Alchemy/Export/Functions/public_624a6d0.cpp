#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ed60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a6db _public_624a6db
#define public_624a6e6 _public_624a6e6

PROC_DECLARE(0x624a6d0, internal_624a6d0, public_624a6d0);
/* CHUNK of public_623ea30 */
extern "C" NAKED register_t __cdecl internal_624a6d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_623ed60
        public_624a6db : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_623ed60
        public_624a6e6 : nop
        mov eax, offset public_6253750
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a6d0)
        ASM_EXPORT_ENTRY_FIRST(0x624a6db, public_624a6db)
        ASM_EXPORT_ENTRY_LAST(0x624a6e6, public_624a6e6)
    }
}

#undef public_624a6db
#undef public_624a6e6

#pragma init_seg(compiler)
extern "C" void const* const public_624a6db = __AsmFindLabelExport(&internal_624a6d0, 0x624a6db);
extern "C" void const* const public_624a6e6 = __AsmFindLabelExport(&internal_624a6d0, 0x624a6e6);
