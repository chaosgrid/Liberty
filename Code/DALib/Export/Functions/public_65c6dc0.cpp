#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3340);
CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a6c);

#define public_65c6dcb _public_65c6dcb
#define public_65c6dd6 _public_65c6dd6
#define public_65c6de4 _public_65c6de4

PROC_DECLARE(0x65c6dc0, internal_65c6dc0, public_65c6dc0);
/* CHUNK of public_65c21c0 */
extern "C" NAKED register_t __cdecl internal_65c6dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_65c4240
        public_65c6dcb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_65c4240
        public_65c6dd6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp public_65c3340
        public_65c6de4 : nop
        mov eax, offset public_65c76f0
        jmp public_65c6a6c
        UNREACHABLE_TRAP(0x65c6dc0)
        ASM_EXPORT_ENTRY_FIRST(0x65c6dcb, public_65c6dcb)
        ASM_EXPORT_ENTRY(0x65c6dd6, public_65c6dd6)
        ASM_EXPORT_ENTRY_LAST(0x65c6de4, public_65c6de4)
    }
}

#undef public_65c6dcb
#undef public_65c6dd6
#undef public_65c6de4

#pragma init_seg(compiler)
extern "C" void const* const public_65c6dcb = __AsmFindLabelExport(&internal_65c6dc0, 0x65c6dcb);
extern "C" void const* const public_65c6dd6 = __AsmFindLabelExport(&internal_65c6dc0, 0x65c6dd6);
extern "C" void const* const public_65c6de4 = __AsmFindLabelExport(&internal_65c6dc0, 0x65c6de4);
