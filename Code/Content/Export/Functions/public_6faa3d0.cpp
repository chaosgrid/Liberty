#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa3e8 _public_6faa3e8
#define public_6faa3ef _public_6faa3ef
#define public_6faa3f7 _public_6faa3f7

PROC_DECLARE(0x6faa3d0, internal_6faa3d0, public_6faa3d0);
/* CHUNK of public_6eb7900 */
extern "C" NAKED register_t __cdecl internal_6faa3d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6faa3e8
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-0x48], eax
        jmp public_6faa3ef
        public_6faa3e8 : nop
        mov dword ptr ss : [ebp-0x48], 0
        public_6faa3ef : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        jmp public_6f15350
        public_6faa3f7 : nop
        mov eax, offset public_6fbe7a8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa3d0)
        ASM_EXPORT_ENTRY_FIRST(0x6faa3e8, public_6faa3e8)
        ASM_EXPORT_ENTRY(0x6faa3ef, public_6faa3ef)
        ASM_EXPORT_ENTRY_LAST(0x6faa3f7, public_6faa3f7)
    }
}

#undef public_6faa3e8
#undef public_6faa3ef
#undef public_6faa3f7

#pragma init_seg(compiler)
extern "C" void const* const public_6faa3e8 = __AsmFindLabelExport(&internal_6faa3d0, 0x6faa3e8);
extern "C" void const* const public_6faa3ef = __AsmFindLabelExport(&internal_6faa3d0, 0x6faa3ef);
extern "C" void const* const public_6faa3f7 = __AsmFindLabelExport(&internal_6faa3d0, 0x6faa3f7);
