#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd030);
CLANG_FORWARD_PROC_SYMBOL(public_6efd050);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac968 _public_6fac968
#define public_6fac973 _public_6fac973
#define public_6fac97e _public_6fac97e

PROC_DECLARE(0x6fac960, internal_6fac960, public_6fac960);
/* CHUNK of public_6efccf0 */
extern "C" NAKED register_t __cdecl internal_6fac960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_6eec8d0
        public_6fac968 : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_6efd030
        public_6fac973 : nop
        lea ecx, ss:[ebp-0xCC]
        jmp public_6efd050
        public_6fac97e : nop
        mov eax, offset public_6fc15f8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac960)
        ASM_EXPORT_ENTRY_FIRST(0x6fac968, public_6fac968)
        ASM_EXPORT_ENTRY(0x6fac973, public_6fac973)
        ASM_EXPORT_ENTRY_LAST(0x6fac97e, public_6fac97e)
    }
}

#undef public_6fac968
#undef public_6fac973
#undef public_6fac97e

#pragma init_seg(compiler)
extern "C" void const* const public_6fac968 = __AsmFindLabelExport(&internal_6fac960, 0x6fac968);
extern "C" void const* const public_6fac973 = __AsmFindLabelExport(&internal_6fac960, 0x6fac973);
extern "C" void const* const public_6fac97e = __AsmFindLabelExport(&internal_6fac960, 0x6fac97e);
