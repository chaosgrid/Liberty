#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb09cb _public_6fb09cb

PROC_DECLARE(0x6fb09c0, internal_6fb09c0, public_6fb09c0);
/* CHUNK of public_6f84c40 */
extern "C" NAKED register_t __cdecl internal_6fb09c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb09cb : nop
        mov eax, offset public_6fc5ca0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb09c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb09cb, public_6fb09cb)
    }
}

#undef public_6fb09cb

#pragma init_seg(compiler)
extern "C" void const* const public_6fb09cb = __AsmFindLabelExport(&internal_6fb09c0, 0x6fb09cb);
