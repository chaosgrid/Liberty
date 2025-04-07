#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ed60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a69b _public_624a69b
#define public_624a6a6 _public_624a6a6

PROC_DECLARE(0x624a690, internal_624a690, public_624a690);
/* CHUNK of public_623e890 */
extern "C" NAKED register_t __cdecl internal_624a690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_623ed60
        public_624a69b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_623ed60
        public_624a6a6 : nop
        mov eax, offset public_62536f8
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a690)
        ASM_EXPORT_ENTRY_FIRST(0x624a69b, public_624a69b)
        ASM_EXPORT_ENTRY_LAST(0x624a6a6, public_624a6a6)
    }
}

#undef public_624a69b
#undef public_624a6a6

#pragma init_seg(compiler)
extern "C" void const* const public_624a69b = __AsmFindLabelExport(&internal_624a690, 0x624a69b);
extern "C" void const* const public_624a6a6 = __AsmFindLabelExport(&internal_624a690, 0x624a6a6);
