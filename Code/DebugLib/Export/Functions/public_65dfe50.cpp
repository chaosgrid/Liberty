#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2540);
CLANG_FORWARD_PROC_SYMBOL(public_65d2590);
CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dfe5b _public_65dfe5b
#define public_65dfe66 _public_65dfe66
#define public_65dfe71 _public_65dfe71

PROC_DECLARE(0x65dfe50, internal_65dfe50, public_65dfe50);
/* CHUNK of public_65d10c0 */
extern "C" NAKED register_t __cdecl internal_65dfe50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_65d2540
        public_65dfe5b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_65d2590
        public_65dfe66 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        jmp public_65d2630
        public_65dfe71 : nop
        mov eax, offset public_65e1e3c
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dfe50)
        ASM_EXPORT_ENTRY_FIRST(0x65dfe5b, public_65dfe5b)
        ASM_EXPORT_ENTRY(0x65dfe66, public_65dfe66)
        ASM_EXPORT_ENTRY_LAST(0x65dfe71, public_65dfe71)
    }
}

#undef public_65dfe5b
#undef public_65dfe66
#undef public_65dfe71

#pragma init_seg(compiler)
extern "C" void const* const public_65dfe5b = __AsmFindLabelExport(&internal_65dfe50, 0x65dfe5b);
extern "C" void const* const public_65dfe66 = __AsmFindLabelExport(&internal_65dfe50, 0x65dfe66);
extern "C" void const* const public_65dfe71 = __AsmFindLabelExport(&internal_65dfe50, 0x65dfe71);
