#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5914c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4998 _public_5c4998
#define public_5c49b0 _public_5c49b0
#define public_5c49b7 _public_5c49b7
#define public_5c49bf _public_5c49bf
#define public_5c49d9 _public_5c49d9
#define public_5c49e0 _public_5c49e0
#define public_5c49e8 _public_5c49e8

PROC_DECLARE(0x5c4990, internal_5c4990, public_5c4990);
/* CHUNK of public_591ba0 */
extern "C" NAKED register_t __cdecl internal_5c4990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c4998 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5c49b0
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x7C
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_5c49b7
        public_5c49b0 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_5c49b7 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        jmp public_5914c0
        public_5c49bf : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5c49d9
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x80
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5c49e0
        public_5c49d9 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5c49e0 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5c49e8 : nop
        mov eax, offset public_5fe6a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4990)
        ASM_EXPORT_ENTRY_FIRST(0x5c4998, public_5c4998)
        ASM_EXPORT_ENTRY(0x5c49b0, public_5c49b0)
        ASM_EXPORT_ENTRY(0x5c49b7, public_5c49b7)
        ASM_EXPORT_ENTRY(0x5c49bf, public_5c49bf)
        ASM_EXPORT_ENTRY(0x5c49d9, public_5c49d9)
        ASM_EXPORT_ENTRY(0x5c49e0, public_5c49e0)
        ASM_EXPORT_ENTRY_LAST(0x5c49e8, public_5c49e8)
    }
}

#undef public_5c4998
#undef public_5c49b0
#undef public_5c49b7
#undef public_5c49bf
#undef public_5c49d9
#undef public_5c49e0
#undef public_5c49e8

#pragma init_seg(compiler)
extern "C" void const* const public_5c4998 = __AsmFindLabelExport(&internal_5c4990, 0x5c4998);
extern "C" void const* const public_5c49b0 = __AsmFindLabelExport(&internal_5c4990, 0x5c49b0);
extern "C" void const* const public_5c49b7 = __AsmFindLabelExport(&internal_5c4990, 0x5c49b7);
extern "C" void const* const public_5c49bf = __AsmFindLabelExport(&internal_5c4990, 0x5c49bf);
extern "C" void const* const public_5c49d9 = __AsmFindLabelExport(&internal_5c4990, 0x5c49d9);
extern "C" void const* const public_5c49e0 = __AsmFindLabelExport(&internal_5c4990, 0x5c49e0);
extern "C" void const* const public_5c49e8 = __AsmFindLabelExport(&internal_5c4990, 0x5c49e8);
