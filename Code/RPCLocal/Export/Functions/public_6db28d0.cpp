#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db28d8 _public_6db28d8
#define public_6db28e3 _public_6db28e3
#define public_6db28ee _public_6db28ee

PROC_DECLARE(0x6db28d0, internal_6db28d0, public_6db28d0);
/* CHUNK of public_6d9da40 */
extern "C" NAKED register_t __cdecl internal_6db28d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6da1370
        public_6db28d8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6d8fbe0
        public_6db28e3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6d8fbe0
        public_6db28ee : nop
        mov eax, offset public_6db7154
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db28d0)
        ASM_EXPORT_ENTRY_FIRST(0x6db28d8, public_6db28d8)
        ASM_EXPORT_ENTRY(0x6db28e3, public_6db28e3)
        ASM_EXPORT_ENTRY_LAST(0x6db28ee, public_6db28ee)
    }
}

#undef public_6db28d8
#undef public_6db28e3
#undef public_6db28ee

#pragma init_seg(compiler)
extern "C" void const* const public_6db28d8 = __AsmFindLabelExport(&internal_6db28d0, 0x6db28d8);
extern "C" void const* const public_6db28e3 = __AsmFindLabelExport(&internal_6db28d0, 0x6db28e3);
extern "C" void const* const public_6db28ee = __AsmFindLabelExport(&internal_6db28d0, 0x6db28ee);
