#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4488f0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_555a60);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9ac8 _public_5b9ac8
#define public_5b9ad3 _public_5b9ad3
#define public_5b9ade _public_5b9ade
#define public_5b9aec _public_5b9aec
#define public_5b9afa _public_5b9afa

PROC_DECLARE(0x5b9ac0, internal_5b9ac0, public_5b9ac0);
/* CHUNK of public_449260 */
extern "C" NAKED register_t __cdecl internal_5b9ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5594b0
        public_5b9ac8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_576010
        public_5b9ad3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_555a60
        public_5b9ade : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x504
        jmp public_4de730
        public_5b9aec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1020
        jmp public_4488f0
        public_5b9afa : nop
        mov eax, offset public_5f3b90
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9ac0)
        ASM_EXPORT_ENTRY_FIRST(0x5b9ac8, public_5b9ac8)
        ASM_EXPORT_ENTRY(0x5b9ad3, public_5b9ad3)
        ASM_EXPORT_ENTRY(0x5b9ade, public_5b9ade)
        ASM_EXPORT_ENTRY(0x5b9aec, public_5b9aec)
        ASM_EXPORT_ENTRY_LAST(0x5b9afa, public_5b9afa)
    }
}

#undef public_5b9ac8
#undef public_5b9ad3
#undef public_5b9ade
#undef public_5b9aec
#undef public_5b9afa

#pragma init_seg(compiler)
extern "C" void const* const public_5b9ac8 = __AsmFindLabelExport(&internal_5b9ac0, 0x5b9ac8);
extern "C" void const* const public_5b9ad3 = __AsmFindLabelExport(&internal_5b9ac0, 0x5b9ad3);
extern "C" void const* const public_5b9ade = __AsmFindLabelExport(&internal_5b9ac0, 0x5b9ade);
extern "C" void const* const public_5b9aec = __AsmFindLabelExport(&internal_5b9ac0, 0x5b9aec);
extern "C" void const* const public_5b9afa = __AsmFindLabelExport(&internal_5b9ac0, 0x5b9afa);
