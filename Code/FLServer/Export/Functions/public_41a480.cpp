#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb00);
CLANG_FORWARD_PROC_SYMBOL(public_40fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_41918e);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a48b _public_41a48b
#define public_41a496 _public_41a496
#define public_41a4a1 _public_41a4a1
#define public_41a4ac _public_41a4ac
#define public_41a4b7 _public_41a4b7
#define public_41a4c2 _public_41a4c2
#define public_41a4cd _public_41a4cd
#define public_41a4db _public_41a4db

PROC_DECLARE(0x41a480, internal_41a480, public_41a480);
/* CHUNK of public_40f900 */
extern "C" NAKED register_t __cdecl internal_41a480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 4
        jmp public_41918e
        public_41a48b : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x44
        jmp public_40e9b0
        public_41a496 : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x4C
        jmp public_40e9b0
        public_41a4a1 : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x54
        jmp public_40e9b0
        public_41a4ac : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x5C
        jmp public_40e9b0
        public_41a4b7 : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x64
        jmp public_40fb00
        public_41a4c2 : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x78
        jmp public_40fbc0
        public_41a4cd : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        add ecx, 0x8C
        jmp public_40fbc0
        public_41a4db : nop
        mov eax, offset public_41f610
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a480)
        ASM_EXPORT_ENTRY_FIRST(0x41a48b, public_41a48b)
        ASM_EXPORT_ENTRY(0x41a496, public_41a496)
        ASM_EXPORT_ENTRY(0x41a4a1, public_41a4a1)
        ASM_EXPORT_ENTRY(0x41a4ac, public_41a4ac)
        ASM_EXPORT_ENTRY(0x41a4b7, public_41a4b7)
        ASM_EXPORT_ENTRY(0x41a4c2, public_41a4c2)
        ASM_EXPORT_ENTRY(0x41a4cd, public_41a4cd)
        ASM_EXPORT_ENTRY_LAST(0x41a4db, public_41a4db)
    }
}

#undef public_41a48b
#undef public_41a496
#undef public_41a4a1
#undef public_41a4ac
#undef public_41a4b7
#undef public_41a4c2
#undef public_41a4cd
#undef public_41a4db

#pragma init_seg(compiler)
extern "C" void const* const public_41a48b = __AsmFindLabelExport(&internal_41a480, 0x41a48b);
extern "C" void const* const public_41a496 = __AsmFindLabelExport(&internal_41a480, 0x41a496);
extern "C" void const* const public_41a4a1 = __AsmFindLabelExport(&internal_41a480, 0x41a4a1);
extern "C" void const* const public_41a4ac = __AsmFindLabelExport(&internal_41a480, 0x41a4ac);
extern "C" void const* const public_41a4b7 = __AsmFindLabelExport(&internal_41a480, 0x41a4b7);
extern "C" void const* const public_41a4c2 = __AsmFindLabelExport(&internal_41a480, 0x41a4c2);
extern "C" void const* const public_41a4cd = __AsmFindLabelExport(&internal_41a480, 0x41a4cd);
extern "C" void const* const public_41a4db = __AsmFindLabelExport(&internal_41a480, 0x41a4db);
