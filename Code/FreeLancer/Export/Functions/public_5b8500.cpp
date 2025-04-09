#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d470);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b850b _public_5b850b
#define public_5b8516 _public_5b8516
#define public_5b8521 _public_5b8521

PROC_DECLARE(0x5b8500, internal_5b8500, public_5b8500);
/* CHUNK of public_40aa80 */
extern "C" NAKED register_t __cdecl internal_5b8500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_4de730
        public_5b850b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_4de730
        public_5b8516 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_40d470
        public_5b8521 : nop
        mov eax, offset public_5f20c4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8500)
        ASM_EXPORT_ENTRY_FIRST(0x5b850b, public_5b850b)
        ASM_EXPORT_ENTRY(0x5b8516, public_5b8516)
        ASM_EXPORT_ENTRY_LAST(0x5b8521, public_5b8521)
    }
}

#undef public_5b850b
#undef public_5b8516
#undef public_5b8521

#pragma init_seg(compiler)
extern "C" void const* const public_5b850b = __AsmFindLabelExport(&internal_5b8500, 0x5b850b);
extern "C" void const* const public_5b8516 = __AsmFindLabelExport(&internal_5b8500, 0x5b8516);
extern "C" void const* const public_5b8521 = __AsmFindLabelExport(&internal_5b8500, 0x5b8521);
