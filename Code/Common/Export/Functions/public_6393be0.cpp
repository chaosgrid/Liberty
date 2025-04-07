#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629abd0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393be8 _public_6393be8
#define public_6393bf3 _public_6393bf3

PROC_DECLARE(0x6393be0, internal_6393be0, public_6393be0);
/* CHUNK of public_629fcc0 */
extern "C" NAKED register_t __cdecl internal_6393be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_6393be8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_629abd0
        public_6393bf3 : nop
        mov eax, offset public_63acfbc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393be0)
        ASM_EXPORT_ENTRY_FIRST(0x6393be8, public_6393be8)
        ASM_EXPORT_ENTRY_LAST(0x6393bf3, public_6393bf3)
    }
}

#undef public_6393be8
#undef public_6393bf3

#pragma init_seg(compiler)
extern "C" void const* const public_6393be8 = __AsmFindLabelExport(&internal_6393be0, 0x6393be8);
extern "C" void const* const public_6393bf3 = __AsmFindLabelExport(&internal_6393be0, 0x6393bf3);
