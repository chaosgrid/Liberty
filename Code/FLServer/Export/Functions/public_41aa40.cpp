#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_413bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41aa4b _public_41aa4b
#define public_41aa56 _public_41aa56

PROC_DECLARE(0x41aa40, internal_41aa40, public_41aa40);
/* CHUNK of public_415a30 */
extern "C" NAKED register_t __cdecl internal_41aa40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x87C]
        jmp public_403bd0
        public_41aa4b : nop
        lea ecx, ss:[ebp-0x86C]
        jmp public_413bb0
        public_41aa56 : nop
        mov eax, offset public_41fb80
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41aa40)
        ASM_EXPORT_ENTRY_FIRST(0x41aa4b, public_41aa4b)
        ASM_EXPORT_ENTRY_LAST(0x41aa56, public_41aa56)
    }
}

#undef public_41aa4b
#undef public_41aa56

#pragma init_seg(compiler)
extern "C" void const* const public_41aa4b = __AsmFindLabelExport(&internal_41aa40, 0x41aa4b);
extern "C" void const* const public_41aa56 = __AsmFindLabelExport(&internal_41aa40, 0x41aa56);
