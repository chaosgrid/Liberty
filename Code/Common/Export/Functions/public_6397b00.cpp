#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345280);
CLANG_FORWARD_PROC_SYMBOL(public_6345290);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397b08 _public_6397b08
#define public_6397b10 _public_6397b10

PROC_DECLARE(0x6397b00, internal_6397b00, public_6397b00);
/* CHUNK of public_6345300 */
extern "C" NAKED register_t __cdecl internal_6397b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6345290
        public_6397b08 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6345280
        public_6397b10 : nop
        mov eax, offset public_63b1d88
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397b00)
        ASM_EXPORT_ENTRY_FIRST(0x6397b08, public_6397b08)
        ASM_EXPORT_ENTRY_LAST(0x6397b10, public_6397b10)
    }
}

#undef public_6397b08
#undef public_6397b10

#pragma init_seg(compiler)
extern "C" void const* const public_6397b08 = __AsmFindLabelExport(&internal_6397b00, 0x6397b08);
extern "C" void const* const public_6397b10 = __AsmFindLabelExport(&internal_6397b00, 0x6397b10);
