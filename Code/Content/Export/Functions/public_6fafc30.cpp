#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafc38 _public_6fafc38
#define public_6fafc40 _public_6fafc40

PROC_DECLARE(0x6fafc30, internal_6fafc30, public_6fafc30);
/* CHUNK of public_6f65f10 */
extern "C" NAKED register_t __cdecl internal_6fafc30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x14]
        jmp public_6eec8d0
        public_6fafc38 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafc40 : nop
        mov eax, offset public_6fc4cf4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafc30)
        ASM_EXPORT_ENTRY_FIRST(0x6fafc38, public_6fafc38)
        ASM_EXPORT_ENTRY_LAST(0x6fafc40, public_6fafc40)
    }
}

#undef public_6fafc38
#undef public_6fafc40

#pragma init_seg(compiler)
extern "C" void const* const public_6fafc38 = __AsmFindLabelExport(&internal_6fafc30, 0x6fafc38);
extern "C" void const* const public_6fafc40 = __AsmFindLabelExport(&internal_6fafc30, 0x6fafc40);
