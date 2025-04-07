#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9988 _public_6fa9988
#define public_6fa9993 _public_6fa9993
#define public_6fa999b _public_6fa999b
#define public_6fa99a3 _public_6fa99a3
#define public_6fa99ab _public_6fa99ab

PROC_DECLARE(0x6fa9980, internal_6fa9980, public_6fa9980);
/* CHUNK of public_6ea8370 */
extern "C" NAKED register_t __cdecl internal_6fa9980()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_6eec8d0
        public_6fa9988 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fa9993 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6eec8d0
        public_6fa999b : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6eec8d0
        public_6fa99a3 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6eec8d0
        public_6fa99ab : nop
        mov eax, offset public_6fbdd00
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9980)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9988, public_6fa9988)
        ASM_EXPORT_ENTRY(0x6fa9993, public_6fa9993)
        ASM_EXPORT_ENTRY(0x6fa999b, public_6fa999b)
        ASM_EXPORT_ENTRY(0x6fa99a3, public_6fa99a3)
        ASM_EXPORT_ENTRY_LAST(0x6fa99ab, public_6fa99ab)
    }
}

#undef public_6fa9988
#undef public_6fa9993
#undef public_6fa999b
#undef public_6fa99a3
#undef public_6fa99ab

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9988 = __AsmFindLabelExport(&internal_6fa9980, 0x6fa9988);
extern "C" void const* const public_6fa9993 = __AsmFindLabelExport(&internal_6fa9980, 0x6fa9993);
extern "C" void const* const public_6fa999b = __AsmFindLabelExport(&internal_6fa9980, 0x6fa999b);
extern "C" void const* const public_6fa99a3 = __AsmFindLabelExport(&internal_6fa9980, 0x6fa99a3);
extern "C" void const* const public_6fa99ab = __AsmFindLabelExport(&internal_6fa9980, 0x6fa99ab);
