#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db28a8 _public_6db28a8
#define public_6db28b3 _public_6db28b3
#define public_6db28be _public_6db28be

PROC_DECLARE(0x6db28a0, internal_6db28a0, public_6db28a0);
/* CHUNK of public_6d9d290 */
extern "C" NAKED register_t __cdecl internal_6db28a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6da1370
        public_6db28a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_6d8fbe0
        public_6db28b3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6d8fbe0
        public_6db28be : nop
        mov eax, offset public_6db70fc
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db28a0)
        ASM_EXPORT_ENTRY_FIRST(0x6db28a8, public_6db28a8)
        ASM_EXPORT_ENTRY(0x6db28b3, public_6db28b3)
        ASM_EXPORT_ENTRY_LAST(0x6db28be, public_6db28be)
    }
}

#undef public_6db28a8
#undef public_6db28b3
#undef public_6db28be

#pragma init_seg(compiler)
extern "C" void const* const public_6db28a8 = __AsmFindLabelExport(&internal_6db28a0, 0x6db28a8);
extern "C" void const* const public_6db28b3 = __AsmFindLabelExport(&internal_6db28a0, 0x6db28b3);
extern "C" void const* const public_6db28be = __AsmFindLabelExport(&internal_6db28a0, 0x6db28be);
