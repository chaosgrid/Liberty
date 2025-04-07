#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2960);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa038 _public_6faa038
#define public_6faa043 _public_6faa043

PROC_DECLARE(0x6faa030, internal_6faa030, public_6faa030);
/* CHUNK of public_6eb2870 */
extern "C" NAKED register_t __cdecl internal_6faa030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea1650
        public_6faa038 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6eb2960
        public_6faa043 : nop
        mov eax, offset public_6fbe400
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa030)
        ASM_EXPORT_ENTRY_FIRST(0x6faa038, public_6faa038)
        ASM_EXPORT_ENTRY_LAST(0x6faa043, public_6faa043)
    }
}

#undef public_6faa038
#undef public_6faa043

#pragma init_seg(compiler)
extern "C" void const* const public_6faa038 = __AsmFindLabelExport(&internal_6faa030, 0x6faa038);
extern "C" void const* const public_6faa043 = __AsmFindLabelExport(&internal_6faa030, 0x6faa043);
