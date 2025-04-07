#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabd4b _public_6fabd4b
#define public_6fabd56 _public_6fabd56
#define public_6fabd61 _public_6fabd61
#define public_6fabd69 _public_6fabd69

PROC_DECLARE(0x6fabd40, internal_6fabd40, public_6fabd40);
/* CHUNK of public_6eea890 */
extern "C" NAKED register_t __cdecl internal_6fabd40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8C]
        jmp public_6eec8d0
        public_6fabd4b : nop
        lea ecx, ss:[ebp-0xB8]
        jmp public_6f15350
        public_6fabd56 : nop
        lea ecx, ss:[ebp-0xC8]
        jmp public_6eec8d0
        public_6fabd61 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6eec8d0
        public_6fabd69 : nop
        mov eax, offset public_6fc0948
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabd40)
        ASM_EXPORT_ENTRY_FIRST(0x6fabd4b, public_6fabd4b)
        ASM_EXPORT_ENTRY(0x6fabd56, public_6fabd56)
        ASM_EXPORT_ENTRY(0x6fabd61, public_6fabd61)
        ASM_EXPORT_ENTRY_LAST(0x6fabd69, public_6fabd69)
    }
}

#undef public_6fabd4b
#undef public_6fabd56
#undef public_6fabd61
#undef public_6fabd69

#pragma init_seg(compiler)
extern "C" void const* const public_6fabd4b = __AsmFindLabelExport(&internal_6fabd40, 0x6fabd4b);
extern "C" void const* const public_6fabd56 = __AsmFindLabelExport(&internal_6fabd40, 0x6fabd56);
extern "C" void const* const public_6fabd61 = __AsmFindLabelExport(&internal_6fabd40, 0x6fabd61);
extern "C" void const* const public_6fabd69 = __AsmFindLabelExport(&internal_6fabd40, 0x6fabd69);
