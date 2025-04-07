#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab11b _public_6fab11b
#define public_6fab126 _public_6fab126
#define public_6fab131 _public_6fab131
#define public_6fab13c _public_6fab13c
#define public_6fab144 _public_6fab144

PROC_DECLARE(0x6fab110, internal_6fab110, public_6fab110);
/* CHUNK of public_6ed2c20 */
extern "C" NAKED register_t __cdecl internal_6fab110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fab11b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fab126 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x68
        jmp public_6f28e10
        public_6fab131 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x6C
        jmp public_6eec8d0
        public_6fab13c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6fab144 : nop
        mov eax, offset public_6fbf654
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab110)
        ASM_EXPORT_ENTRY_FIRST(0x6fab11b, public_6fab11b)
        ASM_EXPORT_ENTRY(0x6fab126, public_6fab126)
        ASM_EXPORT_ENTRY(0x6fab131, public_6fab131)
        ASM_EXPORT_ENTRY(0x6fab13c, public_6fab13c)
        ASM_EXPORT_ENTRY_LAST(0x6fab144, public_6fab144)
    }
}

#undef public_6fab11b
#undef public_6fab126
#undef public_6fab131
#undef public_6fab13c
#undef public_6fab144

#pragma init_seg(compiler)
extern "C" void const* const public_6fab11b = __AsmFindLabelExport(&internal_6fab110, 0x6fab11b);
extern "C" void const* const public_6fab126 = __AsmFindLabelExport(&internal_6fab110, 0x6fab126);
extern "C" void const* const public_6fab131 = __AsmFindLabelExport(&internal_6fab110, 0x6fab131);
extern "C" void const* const public_6fab13c = __AsmFindLabelExport(&internal_6fab110, 0x6fab13c);
extern "C" void const* const public_6fab144 = __AsmFindLabelExport(&internal_6fab110, 0x6fab144);
