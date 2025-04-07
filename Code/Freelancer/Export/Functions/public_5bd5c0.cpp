#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd5c8 _public_5bd5c8
#define public_5bd5e2 _public_5bd5e2
#define public_5bd5e9 _public_5bd5e9
#define public_5bd5f1 _public_5bd5f1

PROC_DECLARE(0x5bd5c0, internal_5bd5c0, public_5bd5c0);
/* CHUNK of public_4bfd40 */
extern "C" NAKED register_t __cdecl internal_5bd5c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bd5c8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bd5e2
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5bd5e9
        public_5bd5e2 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bd5e9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5bd5f1 : nop
        mov eax, offset public_5f7974
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd5c0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd5c8, public_5bd5c8)
        ASM_EXPORT_ENTRY(0x5bd5e2, public_5bd5e2)
        ASM_EXPORT_ENTRY(0x5bd5e9, public_5bd5e9)
        ASM_EXPORT_ENTRY_LAST(0x5bd5f1, public_5bd5f1)
    }
}

#undef public_5bd5c8
#undef public_5bd5e2
#undef public_5bd5e9
#undef public_5bd5f1

#pragma init_seg(compiler)
extern "C" void const* const public_5bd5c8 = __AsmFindLabelExport(&internal_5bd5c0, 0x5bd5c8);
extern "C" void const* const public_5bd5e2 = __AsmFindLabelExport(&internal_5bd5c0, 0x5bd5e2);
extern "C" void const* const public_5bd5e9 = __AsmFindLabelExport(&internal_5bd5c0, 0x5bd5e9);
extern "C" void const* const public_5bd5f1 = __AsmFindLabelExport(&internal_5bd5c0, 0x5bd5f1);
