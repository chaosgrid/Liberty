#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca800);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd9b9 _public_5bd9b9
#define public_5bd9c1 _public_5bd9c1
#define public_5bd9cc _public_5bd9cc
#define public_5bd9d4 _public_5bd9d4
#define public_5bd9df _public_5bd9df

PROC_DECLARE(0x5bd9b0, internal_5bd9b0, public_5bd9b0);
/* CHUNK of public_4ca690 */
extern "C" NAKED register_t __cdecl internal_5bd9b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp dword ptr ds : [public_5c62a4]
        public_5bd9b9 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_5154f0
        public_5bd9c1 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x24
        jmp public_4de730
        public_5bd9cc : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_4ca800
        public_5bd9d4 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x50
        jmp public_59ef20
        public_5bd9df : nop
        mov eax, offset public_5f7e3c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd9b0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd9b9, public_5bd9b9)
        ASM_EXPORT_ENTRY(0x5bd9c1, public_5bd9c1)
        ASM_EXPORT_ENTRY(0x5bd9cc, public_5bd9cc)
        ASM_EXPORT_ENTRY(0x5bd9d4, public_5bd9d4)
        ASM_EXPORT_ENTRY_LAST(0x5bd9df, public_5bd9df)
    }
}

#undef public_5bd9b9
#undef public_5bd9c1
#undef public_5bd9cc
#undef public_5bd9d4
#undef public_5bd9df

#pragma init_seg(compiler)
extern "C" void const* const public_5bd9b9 = __AsmFindLabelExport(&internal_5bd9b0, 0x5bd9b9);
extern "C" void const* const public_5bd9c1 = __AsmFindLabelExport(&internal_5bd9b0, 0x5bd9c1);
extern "C" void const* const public_5bd9cc = __AsmFindLabelExport(&internal_5bd9b0, 0x5bd9cc);
extern "C" void const* const public_5bd9d4 = __AsmFindLabelExport(&internal_5bd9b0, 0x5bd9d4);
extern "C" void const* const public_5bd9df = __AsmFindLabelExport(&internal_5bd9b0, 0x5bd9df);
