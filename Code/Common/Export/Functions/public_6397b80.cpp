#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6347630);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397b88 _public_6397b88
#define public_6397b96 _public_6397b96

PROC_DECLARE(0x6397b80, internal_6397b80, public_6397b80);
/* CHUNK of public_6347660 */
extern "C" NAKED register_t __cdecl internal_6397b80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6347630
        public_6397b88 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x150
        jmp public_63449d0
        public_6397b96 : nop
        mov eax, offset public_63b1e60
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397b80)
        ASM_EXPORT_ENTRY_FIRST(0x6397b88, public_6397b88)
        ASM_EXPORT_ENTRY_LAST(0x6397b96, public_6397b96)
    }
}

#undef public_6397b88
#undef public_6397b96

#pragma init_seg(compiler)
extern "C" void const* const public_6397b88 = __AsmFindLabelExport(&internal_6397b80, 0x6397b88);
extern "C" void const* const public_6397b96 = __AsmFindLabelExport(&internal_6397b80, 0x6397b96);
