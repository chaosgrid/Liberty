#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33090);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f587e8 _public_6f587e8

PROC_DECLARE(0x6f587e0, internal_6f587e0, public_6f587e0);
/* CHUNK of public_6f2ffb0 */
extern "C" NAKED register_t __cdecl internal_6f587e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f33090
        public_6f587e8 : nop
        mov eax, offset public_6f5b96c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f587e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f587e8, public_6f587e8)
    }
}

#undef public_6f587e8

#pragma init_seg(compiler)
extern "C" void const* const public_6f587e8 = __AsmFindLabelExport(&internal_6f587e0, 0x6f587e8);
