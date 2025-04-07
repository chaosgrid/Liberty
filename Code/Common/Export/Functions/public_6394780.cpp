#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7180);
CLANG_FORWARD_PROC_SYMBOL(public_62b7250);
CLANG_FORWARD_PROC_SYMBOL(public_62b8e90);
CLANG_FORWARD_PROC_SYMBOL(public_62b8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9040);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394788 _public_6394788
#define public_6394793 _public_6394793
#define public_639479e _public_639479e
#define public_63947a9 _public_63947a9
#define public_63947b1 _public_63947b1
#define public_63947bf _public_63947bf

PROC_DECLARE(0x6394780, internal_6394780, public_6394780);
/* CHUNK of public_62b6d70 */
extern "C" NAKED register_t __cdecl internal_6394780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_62b8e90
        public_6394788 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xC
        jmp public_62b8e90
        public_6394793 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x18
        jmp public_62b8fe0
        public_639479e : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x24
        jmp public_62b9040
        public_63947a9 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_62b7180
        public_63947b1 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x80
        jmp public_62b7250
        public_63947bf : nop
        mov eax, offset public_63add38
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394780)
        ASM_EXPORT_ENTRY_FIRST(0x6394788, public_6394788)
        ASM_EXPORT_ENTRY(0x6394793, public_6394793)
        ASM_EXPORT_ENTRY(0x639479e, public_639479e)
        ASM_EXPORT_ENTRY(0x63947a9, public_63947a9)
        ASM_EXPORT_ENTRY(0x63947b1, public_63947b1)
        ASM_EXPORT_ENTRY_LAST(0x63947bf, public_63947bf)
    }
}

#undef public_6394788
#undef public_6394793
#undef public_639479e
#undef public_63947a9
#undef public_63947b1
#undef public_63947bf

#pragma init_seg(compiler)
extern "C" void const* const public_6394788 = __AsmFindLabelExport(&internal_6394780, 0x6394788);
extern "C" void const* const public_6394793 = __AsmFindLabelExport(&internal_6394780, 0x6394793);
extern "C" void const* const public_639479e = __AsmFindLabelExport(&internal_6394780, 0x639479e);
extern "C" void const* const public_63947a9 = __AsmFindLabelExport(&internal_6394780, 0x63947a9);
extern "C" void const* const public_63947b1 = __AsmFindLabelExport(&internal_6394780, 0x63947b1);
extern "C" void const* const public_63947bf = __AsmFindLabelExport(&internal_6394780, 0x63947bf);
