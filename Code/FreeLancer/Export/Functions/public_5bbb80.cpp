#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbb88 _public_5bbb88

PROC_DECLARE(0x5bbb80, internal_5bbb80, public_5bbb80);
/* CHUNK of public_474420 */
extern "C" NAKED register_t __cdecl internal_5bbb80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bbb88 : nop
        mov eax, offset public_5f5ed0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbb80)
        ASM_EXPORT_ENTRY_SINGLE(0x5bbb88, public_5bbb88)
    }
}

#undef public_5bbb88

#pragma init_seg(compiler)
extern "C" void const* const public_5bbb88 = __AsmFindLabelExport(&internal_5bbb80, 0x5bbb88);
