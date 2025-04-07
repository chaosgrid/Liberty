#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0098 _public_6fb0098
#define public_6fb00a3 _public_6fb00a3
#define public_6fb00ab _public_6fb00ab

PROC_DECLARE(0x6fb0090, internal_6fb0090, public_6fb0090);
/* CHUNK of public_6f73680 */
extern "C" NAKED register_t __cdecl internal_6fb0090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f28e10
        public_6fb0098 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6fb00a3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fb00ab : nop
        mov eax, offset public_6fc539c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0090)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0098, public_6fb0098)
        ASM_EXPORT_ENTRY(0x6fb00a3, public_6fb00a3)
        ASM_EXPORT_ENTRY_LAST(0x6fb00ab, public_6fb00ab)
    }
}

#undef public_6fb0098
#undef public_6fb00a3
#undef public_6fb00ab

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0098 = __AsmFindLabelExport(&internal_6fb0090, 0x6fb0098);
extern "C" void const* const public_6fb00a3 = __AsmFindLabelExport(&internal_6fb0090, 0x6fb00a3);
extern "C" void const* const public_6fb00ab = __AsmFindLabelExport(&internal_6fb0090, 0x6fb00ab);
