#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafc58 _public_6fafc58
#define public_6fafc60 _public_6fafc60
#define public_6fafc68 _public_6fafc68

PROC_DECLARE(0x6fafc50, internal_6fafc50, public_6fafc50);
/* CHUNK of public_6f66690 */
extern "C" NAKED register_t __cdecl internal_6fafc50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_6eec8d0
        public_6fafc58 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafc60 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6eec8d0
        public_6fafc68 : nop
        mov eax, offset public_6fc4d28
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafc50)
        ASM_EXPORT_ENTRY_FIRST(0x6fafc58, public_6fafc58)
        ASM_EXPORT_ENTRY(0x6fafc60, public_6fafc60)
        ASM_EXPORT_ENTRY_LAST(0x6fafc68, public_6fafc68)
    }
}

#undef public_6fafc58
#undef public_6fafc60
#undef public_6fafc68

#pragma init_seg(compiler)
extern "C" void const* const public_6fafc58 = __AsmFindLabelExport(&internal_6fafc50, 0x6fafc58);
extern "C" void const* const public_6fafc60 = __AsmFindLabelExport(&internal_6fafc50, 0x6fafc60);
extern "C" void const* const public_6fafc68 = __AsmFindLabelExport(&internal_6fafc50, 0x6fafc68);
