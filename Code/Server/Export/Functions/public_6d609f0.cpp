#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d609fb _public_6d609fb

PROC_DECLARE(0x6d609f0, internal_6d609f0, public_6d609f0);
/* CHUNK of public_6cf51e0 */
extern "C" NAKED register_t __cdecl internal_6d609f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6cecb50
        public_6d609fb : nop
        mov eax, offset public_6d71338
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d609f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d609fb, public_6d609fb)
    }
}

#undef public_6d609fb

#pragma init_seg(compiler)
extern "C" void const* const public_6d609fb = __AsmFindLabelExport(&internal_6d609f0, 0x6d609fb);
