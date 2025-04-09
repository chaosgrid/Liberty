#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1558 _public_5c1558

PROC_DECLARE(0x5c1550, internal_5c1550, public_5c1550);
/* CHUNK of public_559050 */
extern "C" NAKED register_t __cdecl internal_5c1550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_576010
        public_5c1558 : nop
        mov eax, offset public_5fb8cc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1550)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1558, public_5c1558)
    }
}

#undef public_5c1558

#pragma init_seg(compiler)
extern "C" void const* const public_5c1558 = __AsmFindLabelExport(&internal_5c1550, 0x5c1558);
