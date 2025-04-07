#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabbeb _public_6fabbeb

PROC_DECLARE(0x6fabbe0, internal_6fabbe0, public_6fabbe0);
/* CHUNK of public_6ee8a70 */
extern "C" NAKED register_t __cdecl internal_6fabbe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6eec4d0
        public_6fabbeb : nop
        mov eax, offset public_6fc07cc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabbe0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fabbeb, public_6fabbeb)
    }
}

#undef public_6fabbeb

#pragma init_seg(compiler)
extern "C" void const* const public_6fabbeb = __AsmFindLabelExport(&internal_6fabbe0, 0x6fabbeb);
