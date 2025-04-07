#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393948 _public_6393948
#define public_6393953 _public_6393953

PROC_DECLARE(0x6393940, internal_6393940, public_6393940);
/* CHUNK of public_629d120 */
extern "C" NAKED register_t __cdecl internal_6393940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6293160
        public_6393948 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_6287870
        public_6393953 : nop
        mov eax, offset public_63acc4c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393940)
        ASM_EXPORT_ENTRY_FIRST(0x6393948, public_6393948)
        ASM_EXPORT_ENTRY_LAST(0x6393953, public_6393953)
    }
}

#undef public_6393948
#undef public_6393953

#pragma init_seg(compiler)
extern "C" void const* const public_6393948 = __AsmFindLabelExport(&internal_6393940, 0x6393948);
extern "C" void const* const public_6393953 = __AsmFindLabelExport(&internal_6393940, 0x6393953);
