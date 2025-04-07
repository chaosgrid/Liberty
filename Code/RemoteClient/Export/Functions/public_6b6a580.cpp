#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38590);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a588 _public_6b6a588

PROC_DECLARE(0x6b6a580, internal_6b6a580, public_6b6a580);
/* CHUNK of public_6b34830 */
extern "C" NAKED register_t __cdecl internal_6b6a580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6b38590
        public_6b6a588 : nop
        mov eax, offset public_6b6ec38
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a580)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a588, public_6b6a588)
    }
}

#undef public_6b6a588

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a588 = __AsmFindLabelExport(&internal_6b6a580, 0x6b6a588);
