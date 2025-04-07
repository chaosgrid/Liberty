#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae97b _public_6fae97b

PROC_DECLARE(0x6fae970, internal_6fae970, public_6fae970);
/* CHUNK of public_6f30830 */
extern "C" NAKED register_t __cdecl internal_6fae970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6f15350
        public_6fae97b : nop
        mov eax, offset public_6fc3880
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae970)
        ASM_EXPORT_ENTRY_SINGLE(0x6fae97b, public_6fae97b)
    }
}

#undef public_6fae97b

#pragma init_seg(compiler)
extern "C" void const* const public_6fae97b = __AsmFindLabelExport(&internal_6fae970, 0x6fae97b);
