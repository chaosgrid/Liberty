#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae9cb _public_6fae9cb
#define public_6fae9d3 _public_6fae9d3

PROC_DECLARE(0x6fae9c0, internal_6fae9c0, public_6fae9c0);
/* CHUNK of public_6f31910 */
extern "C" NAKED register_t __cdecl internal_6fae9c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fae9cb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6fae9d3 : nop
        mov eax, offset public_6fc394c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae9c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fae9cb, public_6fae9cb)
        ASM_EXPORT_ENTRY_LAST(0x6fae9d3, public_6fae9d3)
    }
}

#undef public_6fae9cb
#undef public_6fae9d3

#pragma init_seg(compiler)
extern "C" void const* const public_6fae9cb = __AsmFindLabelExport(&internal_6fae9c0, 0x6fae9cb);
extern "C" void const* const public_6fae9d3 = __AsmFindLabelExport(&internal_6fae9c0, 0x6fae9d3);
