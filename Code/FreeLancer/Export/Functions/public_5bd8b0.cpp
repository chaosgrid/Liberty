#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4c9230);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd8b8 _public_5bd8b8
#define public_5bd8d2 _public_5bd8d2
#define public_5bd8d9 _public_5bd8d9
#define public_5bd8e1 _public_5bd8e1
#define public_5bd8e9 _public_5bd8e9

PROC_DECLARE(0x5bd8b0, internal_5bd8b0, public_5bd8b0);
/* CHUNK of public_4c94b0 */
extern "C" NAKED register_t __cdecl internal_5bd8b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c9230
        public_5bd8b8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bd8d2
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0xF4
        mov dword ptr ss : [ebp-0x10], eax
        jmp public_5bd8d9
        public_5bd8d2 : nop
        mov dword ptr ss : [ebp-0x10], 0
        public_5bd8d9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5bd8e1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5bd8e9 : nop
        mov eax, offset public_5f7d50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd8b0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd8b8, public_5bd8b8)
        ASM_EXPORT_ENTRY(0x5bd8d2, public_5bd8d2)
        ASM_EXPORT_ENTRY(0x5bd8d9, public_5bd8d9)
        ASM_EXPORT_ENTRY(0x5bd8e1, public_5bd8e1)
        ASM_EXPORT_ENTRY_LAST(0x5bd8e9, public_5bd8e9)
    }
}

#undef public_5bd8b8
#undef public_5bd8d2
#undef public_5bd8d9
#undef public_5bd8e1
#undef public_5bd8e9

#pragma init_seg(compiler)
extern "C" void const* const public_5bd8b8 = __AsmFindLabelExport(&internal_5bd8b0, 0x5bd8b8);
extern "C" void const* const public_5bd8d2 = __AsmFindLabelExport(&internal_5bd8b0, 0x5bd8d2);
extern "C" void const* const public_5bd8d9 = __AsmFindLabelExport(&internal_5bd8b0, 0x5bd8d9);
extern "C" void const* const public_5bd8e1 = __AsmFindLabelExport(&internal_5bd8b0, 0x5bd8e1);
extern "C" void const* const public_5bd8e9 = __AsmFindLabelExport(&internal_5bd8b0, 0x5bd8e9);
