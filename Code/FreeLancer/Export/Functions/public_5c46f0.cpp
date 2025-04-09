#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_58f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_58fa10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c46f8 _public_5c46f8
#define public_5c4706 _public_5c4706
#define public_5c4714 _public_5c4714
#define public_5c4722 _public_5c4722
#define public_5c4730 _public_5c4730

PROC_DECLARE(0x5c46f0, internal_5c46f0, public_5c46f0);
/* CHUNK of public_58ca00 */
extern "C" NAKED register_t __cdecl internal_5c46f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_579620
        public_5c46f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x490
        jmp public_58f9a0
        public_5c4706 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4A0
        jmp public_4de730
        public_5c4714 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4B0
        jmp public_4de730
        public_5c4722 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C0
        jmp public_58fa10
        public_5c4730 : nop
        mov eax, offset public_5fe3ac
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c46f0)
        ASM_EXPORT_ENTRY_FIRST(0x5c46f8, public_5c46f8)
        ASM_EXPORT_ENTRY(0x5c4706, public_5c4706)
        ASM_EXPORT_ENTRY(0x5c4714, public_5c4714)
        ASM_EXPORT_ENTRY(0x5c4722, public_5c4722)
        ASM_EXPORT_ENTRY_LAST(0x5c4730, public_5c4730)
    }
}

#undef public_5c46f8
#undef public_5c4706
#undef public_5c4714
#undef public_5c4722
#undef public_5c4730

#pragma init_seg(compiler)
extern "C" void const* const public_5c46f8 = __AsmFindLabelExport(&internal_5c46f0, 0x5c46f8);
extern "C" void const* const public_5c4706 = __AsmFindLabelExport(&internal_5c46f0, 0x5c4706);
extern "C" void const* const public_5c4714 = __AsmFindLabelExport(&internal_5c46f0, 0x5c4714);
extern "C" void const* const public_5c4722 = __AsmFindLabelExport(&internal_5c46f0, 0x5c4722);
extern "C" void const* const public_5c4730 = __AsmFindLabelExport(&internal_5c46f0, 0x5c4730);
