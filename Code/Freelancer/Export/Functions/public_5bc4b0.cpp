#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc4bb _public_5bc4bb
#define public_5bc4c6 _public_5bc4c6
#define public_5bc4ce _public_5bc4ce
#define public_5bc4d9 _public_5bc4d9

PROC_DECLARE(0x5bc4b0, internal_5bc4b0, public_5bc4b0);
/* CHUNK of public_48dd40 */
extern "C" NAKED register_t __cdecl internal_5bc4b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_59ef20
        public_5bc4bb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x5C
        jmp public_444e20
        public_5bc4c6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5bc4ce : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5bc4d9 : nop
        mov eax, offset public_5f68dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc4b0)
        ASM_EXPORT_ENTRY_FIRST(0x5bc4bb, public_5bc4bb)
        ASM_EXPORT_ENTRY(0x5bc4c6, public_5bc4c6)
        ASM_EXPORT_ENTRY(0x5bc4ce, public_5bc4ce)
        ASM_EXPORT_ENTRY_LAST(0x5bc4d9, public_5bc4d9)
    }
}

#undef public_5bc4bb
#undef public_5bc4c6
#undef public_5bc4ce
#undef public_5bc4d9

#pragma init_seg(compiler)
extern "C" void const* const public_5bc4bb = __AsmFindLabelExport(&internal_5bc4b0, 0x5bc4bb);
extern "C" void const* const public_5bc4c6 = __AsmFindLabelExport(&internal_5bc4b0, 0x5bc4c6);
extern "C" void const* const public_5bc4ce = __AsmFindLabelExport(&internal_5bc4b0, 0x5bc4ce);
extern "C" void const* const public_5bc4d9 = __AsmFindLabelExport(&internal_5bc4b0, 0x5bc4d9);
