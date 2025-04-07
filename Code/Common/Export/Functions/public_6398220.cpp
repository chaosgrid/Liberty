#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639822b _public_639822b
#define public_6398236 _public_6398236

PROC_DECLARE(0x6398220, internal_6398220, public_6398220);
/* CHUNK of public_635c310 */
extern "C" NAKED register_t __cdecl internal_6398220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_63449d0
        public_639822b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_63449d0
        public_6398236 : nop
        mov eax, offset public_63b26a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398220)
        ASM_EXPORT_ENTRY_FIRST(0x639822b, public_639822b)
        ASM_EXPORT_ENTRY_LAST(0x6398236, public_6398236)
    }
}

#undef public_639822b
#undef public_6398236

#pragma init_seg(compiler)
extern "C" void const* const public_639822b = __AsmFindLabelExport(&internal_6398220, 0x639822b);
extern "C" void const* const public_6398236 = __AsmFindLabelExport(&internal_6398220, 0x6398236);
