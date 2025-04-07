#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3340);
CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6d9b _public_65c6d9b
#define public_65c6da6 _public_65c6da6
#define public_65c6db4 _public_65c6db4

PROC_DECLARE(0x65c6d90, internal_65c6d90, public_65c6d90);
/* CHUNK of public_65c2090 */
extern "C" NAKED register_t __cdecl internal_65c6d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x10
        jmp public_65c4240
        public_65c6d9b : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x3C
        jmp public_65c4240
        public_65c6da6 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x80
        jmp public_65c3340
        public_65c6db4 : nop
        mov eax, offset public_65c76bc
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6d90)
        ASM_EXPORT_ENTRY_FIRST(0x65c6d9b, public_65c6d9b)
        ASM_EXPORT_ENTRY(0x65c6da6, public_65c6da6)
        ASM_EXPORT_ENTRY_LAST(0x65c6db4, public_65c6db4)
    }
}

#undef public_65c6d9b
#undef public_65c6da6
#undef public_65c6db4

#pragma init_seg(compiler)
extern "C" void const* const public_65c6d9b = __AsmFindLabelExport(&internal_65c6d90, 0x65c6d9b);
extern "C" void const* const public_65c6da6 = __AsmFindLabelExport(&internal_65c6d90, 0x65c6da6);
extern "C" void const* const public_65c6db4 = __AsmFindLabelExport(&internal_65c6d90, 0x65c6db4);
