#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf188 _public_6faf188

PROC_DECLARE(0x6faf180, internal_6faf180, public_6faf180);
/* CHUNK of public_6f4d280 */
extern "C" NAKED register_t __cdecl internal_6faf180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6faf188 : nop
        mov eax, offset public_6fc415c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf180)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf188, public_6faf188)
    }
}

#undef public_6faf188

#pragma init_seg(compiler)
extern "C" void const* const public_6faf188 = __AsmFindLabelExport(&internal_6faf180, 0x6faf188);
