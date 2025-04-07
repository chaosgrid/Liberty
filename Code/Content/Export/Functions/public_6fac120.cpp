#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac12b _public_6fac12b
#define public_6fac136 _public_6fac136
#define public_6fac142 _public_6fac142

PROC_DECLARE(0x6fac120, internal_6fac120, public_6fac120);
/* CHUNK of public_6ef3830 */
extern "C" NAKED register_t __cdecl internal_6fac120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_6ef38e0
        public_6fac12b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_6ef6640
        public_6fac136 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp dword ptr ds : [public_6fb3138]
        public_6fac142 : nop
        mov eax, offset public_6fc0d88
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac120)
        ASM_EXPORT_ENTRY_FIRST(0x6fac12b, public_6fac12b)
        ASM_EXPORT_ENTRY(0x6fac136, public_6fac136)
        ASM_EXPORT_ENTRY_LAST(0x6fac142, public_6fac142)
    }
}

#undef public_6fac12b
#undef public_6fac136
#undef public_6fac142

#pragma init_seg(compiler)
extern "C" void const* const public_6fac12b = __AsmFindLabelExport(&internal_6fac120, 0x6fac12b);
extern "C" void const* const public_6fac136 = __AsmFindLabelExport(&internal_6fac120, 0x6fac136);
extern "C" void const* const public_6fac142 = __AsmFindLabelExport(&internal_6fac120, 0x6fac142);
