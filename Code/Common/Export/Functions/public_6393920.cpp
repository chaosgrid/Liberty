#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393928 _public_6393928
#define public_6393933 _public_6393933

PROC_DECLARE(0x6393920, internal_6393920, public_6393920);
/* CHUNK of public_629bd70 */
extern "C" NAKED register_t __cdecl internal_6393920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6293160
        public_6393928 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_6269110
        public_6393933 : nop
        mov eax, offset public_63acbd8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393920)
        ASM_EXPORT_ENTRY_FIRST(0x6393928, public_6393928)
        ASM_EXPORT_ENTRY_LAST(0x6393933, public_6393933)
    }
}

#undef public_6393928
#undef public_6393933

#pragma init_seg(compiler)
extern "C" void const* const public_6393928 = __AsmFindLabelExport(&internal_6393920, 0x6393928);
extern "C" void const* const public_6393933 = __AsmFindLabelExport(&internal_6393920, 0x6393933);
