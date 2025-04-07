#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c80);
CLANG_FORWARD_PROC_SYMBOL(public_6eacf80);
CLANG_FORWARD_PROC_SYMBOL(public_6ead0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9a3b _public_6fa9a3b
#define public_6fa9a43 _public_6fa9a43
#define public_6fa9a4b _public_6fa9a4b

PROC_DECLARE(0x6fa9a30, internal_6fa9a30, public_6fa9a30);
/* CHUNK of public_6ea9340 */
extern "C" NAKED register_t __cdecl internal_6fa9a30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xBC]
        jmp public_6ea7c80
        public_6fa9a3b : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6eacf80
        public_6fa9a43 : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_6ead0b0
        public_6fa9a4b : nop
        mov eax, offset public_6fbddb0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9a30)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9a3b, public_6fa9a3b)
        ASM_EXPORT_ENTRY(0x6fa9a43, public_6fa9a43)
        ASM_EXPORT_ENTRY_LAST(0x6fa9a4b, public_6fa9a4b)
    }
}

#undef public_6fa9a3b
#undef public_6fa9a43
#undef public_6fa9a4b

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9a3b = __AsmFindLabelExport(&internal_6fa9a30, 0x6fa9a3b);
extern "C" void const* const public_6fa9a43 = __AsmFindLabelExport(&internal_6fa9a30, 0x6fa9a43);
extern "C" void const* const public_6fa9a4b = __AsmFindLabelExport(&internal_6fa9a30, 0x6fa9a4b);
