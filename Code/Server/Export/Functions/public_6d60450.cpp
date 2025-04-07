#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6045b _public_6d6045b
#define public_6d60466 _public_6d60466
#define public_6d60471 _public_6d60471

PROC_DECLARE(0x6d60450, internal_6d60450, public_6d60450);
/* CHUNK of public_6ce6620 */
extern "C" NAKED register_t __cdecl internal_6d60450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6cee4a0
        public_6d6045b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_6cecb50
        public_6d60466 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6cecb50
        public_6d60471 : nop
        mov eax, offset public_6d70ca4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60450)
        ASM_EXPORT_ENTRY_FIRST(0x6d6045b, public_6d6045b)
        ASM_EXPORT_ENTRY(0x6d60466, public_6d60466)
        ASM_EXPORT_ENTRY_LAST(0x6d60471, public_6d60471)
    }
}

#undef public_6d6045b
#undef public_6d60466
#undef public_6d60471

#pragma init_seg(compiler)
extern "C" void const* const public_6d6045b = __AsmFindLabelExport(&internal_6d60450, 0x6d6045b);
extern "C" void const* const public_6d60466 = __AsmFindLabelExport(&internal_6d60450, 0x6d60466);
extern "C" void const* const public_6d60471 = __AsmFindLabelExport(&internal_6d60450, 0x6d60471);
