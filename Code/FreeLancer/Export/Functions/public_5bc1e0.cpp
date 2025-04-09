#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc1e8 _public_5bc1e8
#define public_5bc202 _public_5bc202
#define public_5bc209 _public_5bc209
#define public_5bc211 _public_5bc211

PROC_DECLARE(0x5bc1e0, internal_5bc1e0, public_5bc1e0);
/* CHUNK of public_488320 */
extern "C" NAKED register_t __cdecl internal_5bc1e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bc1e8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bc202
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5bc209
        public_5bc202 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bc209 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5bc211 : nop
        mov eax, offset public_5f65e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc1e0)
        ASM_EXPORT_ENTRY_FIRST(0x5bc1e8, public_5bc1e8)
        ASM_EXPORT_ENTRY(0x5bc202, public_5bc202)
        ASM_EXPORT_ENTRY(0x5bc209, public_5bc209)
        ASM_EXPORT_ENTRY_LAST(0x5bc211, public_5bc211)
    }
}

#undef public_5bc1e8
#undef public_5bc202
#undef public_5bc209
#undef public_5bc211

#pragma init_seg(compiler)
extern "C" void const* const public_5bc1e8 = __AsmFindLabelExport(&internal_5bc1e0, 0x5bc1e8);
extern "C" void const* const public_5bc202 = __AsmFindLabelExport(&internal_5bc1e0, 0x5bc202);
extern "C" void const* const public_5bc209 = __AsmFindLabelExport(&internal_5bc1e0, 0x5bc209);
extern "C" void const* const public_5bc211 = __AsmFindLabelExport(&internal_5bc1e0, 0x5bc211);
