#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc950);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb086b _public_6fb086b
#define public_6fb0876 _public_6fb0876
#define public_6fb0881 _public_6fb0881

PROC_DECLARE(0x6fb0860, internal_6fb0860, public_6fb0860);
/* CHUNK of public_6f82b90 */
extern "C" NAKED register_t __cdecl internal_6fb0860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC90]
        jmp public_6efc950
        public_6fb086b : nop
        lea ecx, ss:[ebp-0xC6C]
        jmp public_6eec8d0
        public_6fb0876 : nop
        lea ecx, ss:[ebp-0xC48]
        jmp public_6efc950
        public_6fb0881 : nop
        mov eax, offset public_6fc5b4c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0860)
        ASM_EXPORT_ENTRY_FIRST(0x6fb086b, public_6fb086b)
        ASM_EXPORT_ENTRY(0x6fb0876, public_6fb0876)
        ASM_EXPORT_ENTRY_LAST(0x6fb0881, public_6fb0881)
    }
}

#undef public_6fb086b
#undef public_6fb0876
#undef public_6fb0881

#pragma init_seg(compiler)
extern "C" void const* const public_6fb086b = __AsmFindLabelExport(&internal_6fb0860, 0x6fb086b);
extern "C" void const* const public_6fb0876 = __AsmFindLabelExport(&internal_6fb0860, 0x6fb0876);
extern "C" void const* const public_6fb0881 = __AsmFindLabelExport(&internal_6fb0860, 0x6fb0881);
