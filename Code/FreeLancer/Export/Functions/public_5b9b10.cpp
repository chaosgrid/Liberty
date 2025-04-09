#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4488f0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_555a60);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9b18 _public_5b9b18
#define public_5b9b30 _public_5b9b30
#define public_5b9b37 _public_5b9b37
#define public_5b9b3f _public_5b9b3f
#define public_5b9b4a _public_5b9b4a
#define public_5b9b58 _public_5b9b58
#define public_5b9b66 _public_5b9b66

PROC_DECLARE(0x5b9b10, internal_5b9b10, public_5b9b10);
/* CHUNK of public_449420 */
extern "C" NAKED register_t __cdecl internal_5b9b10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5594b0
        public_5b9b18 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5b9b30
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x30
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5b9b37
        public_5b9b30 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5b9b37 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5b9b3f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_555a60
        public_5b9b4a : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x504
        jmp public_4de730
        public_5b9b58 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1020
        jmp public_4488f0
        public_5b9b66 : nop
        mov eax, offset public_5f3bd4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9b10)
        ASM_EXPORT_ENTRY_FIRST(0x5b9b18, public_5b9b18)
        ASM_EXPORT_ENTRY(0x5b9b30, public_5b9b30)
        ASM_EXPORT_ENTRY(0x5b9b37, public_5b9b37)
        ASM_EXPORT_ENTRY(0x5b9b3f, public_5b9b3f)
        ASM_EXPORT_ENTRY(0x5b9b4a, public_5b9b4a)
        ASM_EXPORT_ENTRY(0x5b9b58, public_5b9b58)
        ASM_EXPORT_ENTRY_LAST(0x5b9b66, public_5b9b66)
    }
}

#undef public_5b9b18
#undef public_5b9b30
#undef public_5b9b37
#undef public_5b9b3f
#undef public_5b9b4a
#undef public_5b9b58
#undef public_5b9b66

#pragma init_seg(compiler)
extern "C" void const* const public_5b9b18 = __AsmFindLabelExport(&internal_5b9b10, 0x5b9b18);
extern "C" void const* const public_5b9b30 = __AsmFindLabelExport(&internal_5b9b10, 0x5b9b30);
extern "C" void const* const public_5b9b37 = __AsmFindLabelExport(&internal_5b9b10, 0x5b9b37);
extern "C" void const* const public_5b9b3f = __AsmFindLabelExport(&internal_5b9b10, 0x5b9b3f);
extern "C" void const* const public_5b9b4a = __AsmFindLabelExport(&internal_5b9b10, 0x5b9b4a);
extern "C" void const* const public_5b9b58 = __AsmFindLabelExport(&internal_5b9b10, 0x5b9b58);
extern "C" void const* const public_5b9b66 = __AsmFindLabelExport(&internal_5b9b10, 0x5b9b66);
