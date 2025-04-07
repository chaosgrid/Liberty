#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0a88 _public_6fb0a88

PROC_DECLARE(0x6fb0a80, internal_6fb0a80, public_6fb0a80);
/* CHUNK of public_6f855f0 */
extern "C" NAKED register_t __cdecl internal_6fb0a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f85550
        public_6fb0a88 : nop
        mov eax, offset public_6fc5da0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0a80)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0a88, public_6fb0a88)
    }
}

#undef public_6fb0a88

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0a88 = __AsmFindLabelExport(&internal_6fb0a80, 0x6fb0a88);
