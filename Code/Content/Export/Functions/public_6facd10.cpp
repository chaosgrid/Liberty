#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facd1b _public_6facd1b
#define public_6facd26 _public_6facd26

PROC_DECLARE(0x6facd10, internal_6facd10, public_6facd10);
/* CHUNK of public_6f058d0 */
extern "C" NAKED register_t __cdecl internal_6facd10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6f05cf0
        public_6facd1b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6f15350
        public_6facd26 : nop
        mov eax, offset public_6fc19f0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facd10)
        ASM_EXPORT_ENTRY_FIRST(0x6facd1b, public_6facd1b)
        ASM_EXPORT_ENTRY_LAST(0x6facd26, public_6facd26)
    }
}

#undef public_6facd1b
#undef public_6facd26

#pragma init_seg(compiler)
extern "C" void const* const public_6facd1b = __AsmFindLabelExport(&internal_6facd10, 0x6facd1b);
extern "C" void const* const public_6facd26 = __AsmFindLabelExport(&internal_6facd10, 0x6facd26);
