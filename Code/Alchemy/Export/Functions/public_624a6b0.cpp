#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ed60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a6bb _public_624a6bb
#define public_624a6c6 _public_624a6c6

PROC_DECLARE(0x624a6b0, internal_624a6b0, public_624a6b0);
/* CHUNK of public_6204630 */
extern "C" NAKED register_t __cdecl internal_624a6b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_623ed60
        public_624a6bb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_623ed60
        public_624a6c6 : nop
        mov eax, offset public_6253724
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a6b0)
        ASM_EXPORT_ENTRY_FIRST(0x624a6bb, public_624a6bb)
        ASM_EXPORT_ENTRY_LAST(0x624a6c6, public_624a6c6)
    }
}

#undef public_624a6bb
#undef public_624a6c6

#pragma init_seg(compiler)
extern "C" void const* const public_624a6bb = __AsmFindLabelExport(&internal_624a6b0, 0x624a6bb);
extern "C" void const* const public_624a6c6 = __AsmFindLabelExport(&internal_624a6b0, 0x624a6c6);
