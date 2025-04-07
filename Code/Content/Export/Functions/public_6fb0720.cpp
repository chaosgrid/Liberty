#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0728 _public_6fb0728
#define public_6fb0733 _public_6fb0733
#define public_6fb073e _public_6fb073e

PROC_DECLARE(0x6fb0720, internal_6fb0720, public_6fb0720);
/* CHUNK of public_6f80550 */
extern "C" NAKED register_t __cdecl internal_6fb0720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6ea8cc0
        public_6fb0728 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1C
        jmp public_6f15350
        public_6fb0733 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_6f15350
        public_6fb073e : nop
        mov eax, offset public_6fc5a08
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0720)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0728, public_6fb0728)
        ASM_EXPORT_ENTRY(0x6fb0733, public_6fb0733)
        ASM_EXPORT_ENTRY_LAST(0x6fb073e, public_6fb073e)
    }
}

#undef public_6fb0728
#undef public_6fb0733
#undef public_6fb073e

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0728 = __AsmFindLabelExport(&internal_6fb0720, 0x6fb0728);
extern "C" void const* const public_6fb0733 = __AsmFindLabelExport(&internal_6fb0720, 0x6fb0733);
extern "C" void const* const public_6fb073e = __AsmFindLabelExport(&internal_6fb0720, 0x6fb073e);
