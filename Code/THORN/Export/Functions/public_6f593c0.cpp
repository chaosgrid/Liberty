#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f593c8 _public_6f593c8

PROC_DECLARE(0x6f593c0, internal_6f593c0, public_6f593c0);
/* CHUNK of public_6f45f80 */
extern "C" NAKED register_t __cdecl internal_6f593c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f593c8 : nop
        mov eax, offset public_6f5c5ac
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f593c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f593c8, public_6f593c8)
    }
}

#undef public_6f593c8

#pragma init_seg(compiler)
extern "C" void const* const public_6f593c8 = __AsmFindLabelExport(&internal_6f593c0, 0x6f593c8);
