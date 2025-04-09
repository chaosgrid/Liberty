#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_43c570);
CLANG_FORWARD_PROC_SYMBOL(public_43c730);
CLANG_FORWARD_PROC_SYMBOL(public_43c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_43c970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b93d8 _public_5b93d8
#define public_5b93e3 _public_5b93e3
#define public_5b93eb _public_5b93eb
#define public_5b93f3 _public_5b93f3
#define public_5b93fb _public_5b93fb

PROC_DECLARE(0x5b93d0, internal_5b93d0, public_5b93d0);
/* CHUNK of public_43a140 */
extern "C" NAKED register_t __cdecl internal_5b93d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_43c570
        public_5b93d8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_43c7b0
        public_5b93e3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43c970
        public_5b93eb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_43c730
        public_5b93f3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_43c4f0
        public_5b93fb : nop
        mov eax, offset public_5f3380
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b93d0)
        ASM_EXPORT_ENTRY_FIRST(0x5b93d8, public_5b93d8)
        ASM_EXPORT_ENTRY(0x5b93e3, public_5b93e3)
        ASM_EXPORT_ENTRY(0x5b93eb, public_5b93eb)
        ASM_EXPORT_ENTRY(0x5b93f3, public_5b93f3)
        ASM_EXPORT_ENTRY_LAST(0x5b93fb, public_5b93fb)
    }
}

#undef public_5b93d8
#undef public_5b93e3
#undef public_5b93eb
#undef public_5b93f3
#undef public_5b93fb

#pragma init_seg(compiler)
extern "C" void const* const public_5b93d8 = __AsmFindLabelExport(&internal_5b93d0, 0x5b93d8);
extern "C" void const* const public_5b93e3 = __AsmFindLabelExport(&internal_5b93d0, 0x5b93e3);
extern "C" void const* const public_5b93eb = __AsmFindLabelExport(&internal_5b93d0, 0x5b93eb);
extern "C" void const* const public_5b93f3 = __AsmFindLabelExport(&internal_5b93d0, 0x5b93f3);
extern "C" void const* const public_5b93fb = __AsmFindLabelExport(&internal_5b93d0, 0x5b93fb);
