#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6efb6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac7a8 _public_6fac7a8
#define public_6fac7b3 _public_6fac7b3
#define public_6fac7be _public_6fac7be
#define public_6fac7c9 _public_6fac7c9

PROC_DECLARE(0x6fac7a0, internal_6fac7a0, public_6fac7a0);
/* CHUNK of public_6efb550 */
extern "C" NAKED register_t __cdecl internal_6fac7a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea8cc0
        public_6fac7a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_6f15350
        public_6fac7b3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6f15350
        public_6fac7be : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6efb6b0
        public_6fac7c9 : nop
        mov eax, offset public_6fc1458
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac7a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac7a8, public_6fac7a8)
        ASM_EXPORT_ENTRY(0x6fac7b3, public_6fac7b3)
        ASM_EXPORT_ENTRY(0x6fac7be, public_6fac7be)
        ASM_EXPORT_ENTRY_LAST(0x6fac7c9, public_6fac7c9)
    }
}

#undef public_6fac7a8
#undef public_6fac7b3
#undef public_6fac7be
#undef public_6fac7c9

#pragma init_seg(compiler)
extern "C" void const* const public_6fac7a8 = __AsmFindLabelExport(&internal_6fac7a0, 0x6fac7a8);
extern "C" void const* const public_6fac7b3 = __AsmFindLabelExport(&internal_6fac7a0, 0x6fac7b3);
extern "C" void const* const public_6fac7be = __AsmFindLabelExport(&internal_6fac7a0, 0x6fac7be);
extern "C" void const* const public_6fac7c9 = __AsmFindLabelExport(&internal_6fac7a0, 0x6fac7c9);
