#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d23a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d628f8 _public_6d628f8
#define public_6d62903 _public_6d62903
#define public_6d6290b _public_6d6290b
#define public_6d62913 _public_6d62913
#define public_6d6291b _public_6d6291b

PROC_DECLARE(0x6d628f0, internal_6d628f0, public_6d628f0);
/* CHUNK of public_6d23990 */
extern "C" NAKED register_t __cdecl internal_6d628f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d23a60
        public_6d628f8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_6d209f0
        public_6d62903 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d20a40
        public_6d6290b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d209f0
        public_6d62913 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d20a40
        public_6d6291b : nop
        mov eax, offset public_6d738cc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d628f0)
        ASM_EXPORT_ENTRY_FIRST(0x6d628f8, public_6d628f8)
        ASM_EXPORT_ENTRY(0x6d62903, public_6d62903)
        ASM_EXPORT_ENTRY(0x6d6290b, public_6d6290b)
        ASM_EXPORT_ENTRY(0x6d62913, public_6d62913)
        ASM_EXPORT_ENTRY_LAST(0x6d6291b, public_6d6291b)
    }
}

#undef public_6d628f8
#undef public_6d62903
#undef public_6d6290b
#undef public_6d62913
#undef public_6d6291b

#pragma init_seg(compiler)
extern "C" void const* const public_6d628f8 = __AsmFindLabelExport(&internal_6d628f0, 0x6d628f8);
extern "C" void const* const public_6d62903 = __AsmFindLabelExport(&internal_6d628f0, 0x6d62903);
extern "C" void const* const public_6d6290b = __AsmFindLabelExport(&internal_6d628f0, 0x6d6290b);
extern "C" void const* const public_6d62913 = __AsmFindLabelExport(&internal_6d628f0, 0x6d62913);
extern "C" void const* const public_6d6291b = __AsmFindLabelExport(&internal_6d628f0, 0x6d6291b);
