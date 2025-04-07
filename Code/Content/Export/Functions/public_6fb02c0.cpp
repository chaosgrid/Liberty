#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30690);
CLANG_FORWARD_PROC_SYMBOL(public_6f30720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb02cb _public_6fb02cb
#define public_6fb02d6 _public_6fb02d6
#define public_6fb02e1 _public_6fb02e1
#define public_6fb02ec _public_6fb02ec
#define public_6fb02f7 _public_6fb02f7

PROC_DECLARE(0x6fb02c0, internal_6fb02c0, public_6fb02c0);
/* CHUNK of public_6f76380 */
extern "C" NAKED register_t __cdecl internal_6fb02c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x220]
        jmp public_6f30720
        public_6fb02cb : nop
        lea ecx, ss:[ebp-0x220]
        jmp public_6f30690
        public_6fb02d6 : nop
        lea ecx, ss:[ebp-0x20C]
        jmp public_6eec8d0
        public_6fb02e1 : nop
        lea ecx, ss:[ebp-0x274]
        jmp public_6eec8d0
        public_6fb02ec : nop
        lea ecx, ss:[ebp-0x274]
        jmp public_6eec8d0
        public_6fb02f7 : nop
        mov eax, offset public_6fc55d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb02c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb02cb, public_6fb02cb)
        ASM_EXPORT_ENTRY(0x6fb02d6, public_6fb02d6)
        ASM_EXPORT_ENTRY(0x6fb02e1, public_6fb02e1)
        ASM_EXPORT_ENTRY(0x6fb02ec, public_6fb02ec)
        ASM_EXPORT_ENTRY_LAST(0x6fb02f7, public_6fb02f7)
    }
}

#undef public_6fb02cb
#undef public_6fb02d6
#undef public_6fb02e1
#undef public_6fb02ec
#undef public_6fb02f7

#pragma init_seg(compiler)
extern "C" void const* const public_6fb02cb = __AsmFindLabelExport(&internal_6fb02c0, 0x6fb02cb);
extern "C" void const* const public_6fb02d6 = __AsmFindLabelExport(&internal_6fb02c0, 0x6fb02d6);
extern "C" void const* const public_6fb02e1 = __AsmFindLabelExport(&internal_6fb02c0, 0x6fb02e1);
extern "C" void const* const public_6fb02ec = __AsmFindLabelExport(&internal_6fb02c0, 0x6fb02ec);
extern "C" void const* const public_6fb02f7 = __AsmFindLabelExport(&internal_6fb02c0, 0x6fb02f7);
