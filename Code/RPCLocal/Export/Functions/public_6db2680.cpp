#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2688 _public_6db2688
#define public_6db2693 _public_6db2693
#define public_6db269e _public_6db269e

PROC_DECLARE(0x6db2680, internal_6db2680, public_6db2680);
/* CHUNK of public_6d91dd0 */
extern "C" NAKED register_t __cdecl internal_6db2680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6da1370
        public_6db2688 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_6d8fbe0
        public_6db2693 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6d8fbe0
        public_6db269e : nop
        mov eax, offset public_6db6e84
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2680)
        ASM_EXPORT_ENTRY_FIRST(0x6db2688, public_6db2688)
        ASM_EXPORT_ENTRY(0x6db2693, public_6db2693)
        ASM_EXPORT_ENTRY_LAST(0x6db269e, public_6db269e)
    }
}

#undef public_6db2688
#undef public_6db2693
#undef public_6db269e

#pragma init_seg(compiler)
extern "C" void const* const public_6db2688 = __AsmFindLabelExport(&internal_6db2680, 0x6db2688);
extern "C" void const* const public_6db2693 = __AsmFindLabelExport(&internal_6db2680, 0x6db2693);
extern "C" void const* const public_6db269e = __AsmFindLabelExport(&internal_6db2680, 0x6db269e);
