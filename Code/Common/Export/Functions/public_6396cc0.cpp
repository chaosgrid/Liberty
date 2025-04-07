#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631ed70);
CLANG_FORWARD_PROC_SYMBOL(public_631ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396cc8 _public_6396cc8
#define public_6396cd0 _public_6396cd0

PROC_DECLARE(0x6396cc0, internal_6396cc0, public_6396cc0);
/* CHUNK of public_631f260 */
extern "C" NAKED register_t __cdecl internal_6396cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x80]
        jmp public_631ed70
        public_6396cc8 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_631ee30
        public_6396cd0 : nop
        mov eax, offset public_63b0c24
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396cc0)
        ASM_EXPORT_ENTRY_FIRST(0x6396cc8, public_6396cc8)
        ASM_EXPORT_ENTRY_LAST(0x6396cd0, public_6396cd0)
    }
}

#undef public_6396cc8
#undef public_6396cd0

#pragma init_seg(compiler)
extern "C" void const* const public_6396cc8 = __AsmFindLabelExport(&internal_6396cc0, 0x6396cc8);
extern "C" void const* const public_6396cd0 = __AsmFindLabelExport(&internal_6396cc0, 0x6396cd0);
