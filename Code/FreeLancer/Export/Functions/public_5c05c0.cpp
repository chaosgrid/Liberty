#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c05c8 _public_5c05c8
#define public_5c05d3 _public_5c05d3
#define public_5c05de _public_5c05de

PROC_DECLARE(0x5c05c0, internal_5c05c0, public_5c05c0);
/* CHUNK of public_52f540 */
extern "C" NAKED register_t __cdecl internal_5c05c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c05c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_502d90
        public_5c05d3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_502d90
        public_5c05de : nop
        mov eax, offset public_5fa71c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c05c0)
        ASM_EXPORT_ENTRY_FIRST(0x5c05c8, public_5c05c8)
        ASM_EXPORT_ENTRY(0x5c05d3, public_5c05d3)
        ASM_EXPORT_ENTRY_LAST(0x5c05de, public_5c05de)
    }
}

#undef public_5c05c8
#undef public_5c05d3
#undef public_5c05de

#pragma init_seg(compiler)
extern "C" void const* const public_5c05c8 = __AsmFindLabelExport(&internal_5c05c0, 0x5c05c8);
extern "C" void const* const public_5c05d3 = __AsmFindLabelExport(&internal_5c05c0, 0x5c05d3);
extern "C" void const* const public_5c05de = __AsmFindLabelExport(&internal_5c05c0, 0x5c05de);
