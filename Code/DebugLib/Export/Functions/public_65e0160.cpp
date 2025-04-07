#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d24d0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6ba0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65e016b _public_65e016b
#define public_65e0176 _public_65e0176

PROC_DECLARE(0x65e0160, internal_65e0160, public_65e0160);
/* CHUNK of public_65d6a80 */
extern "C" NAKED register_t __cdecl internal_65e0160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_65d24d0
        public_65e016b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_65d6ba0
        public_65e0176 : nop
        mov eax, offset public_65e2220
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65e0160)
        ASM_EXPORT_ENTRY_FIRST(0x65e016b, public_65e016b)
        ASM_EXPORT_ENTRY_LAST(0x65e0176, public_65e0176)
    }
}

#undef public_65e016b
#undef public_65e0176

#pragma init_seg(compiler)
extern "C" void const* const public_65e016b = __AsmFindLabelExport(&internal_65e0160, 0x65e016b);
extern "C" void const* const public_65e0176 = __AsmFindLabelExport(&internal_65e0160, 0x65e0176);
