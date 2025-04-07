#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_622da20);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624961b _public_624961b
#define public_6249623 _public_6249623
#define public_624962b _public_624962b
#define public_6249639 _public_6249639
#define public_6249641 _public_6249641
#define public_6249649 _public_6249649
#define public_6249651 _public_6249651

PROC_DECLARE(0x6249610, internal_6249610, public_6249610);
/* CHUNK of public_622d7c0 */
extern "C" NAKED register_t __cdecl internal_6249610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624961b : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6249623 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_624962b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xB4
        jmp public_620b700
        public_6249639 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_622da20
        public_6249641 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_622d2c0
        public_6249649 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_6249651 : nop
        mov eax, offset public_62525d0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249610)
        ASM_EXPORT_ENTRY_FIRST(0x624961b, public_624961b)
        ASM_EXPORT_ENTRY(0x6249623, public_6249623)
        ASM_EXPORT_ENTRY(0x624962b, public_624962b)
        ASM_EXPORT_ENTRY(0x6249639, public_6249639)
        ASM_EXPORT_ENTRY(0x6249641, public_6249641)
        ASM_EXPORT_ENTRY(0x6249649, public_6249649)
        ASM_EXPORT_ENTRY_LAST(0x6249651, public_6249651)
    }
}

#undef public_624961b
#undef public_6249623
#undef public_624962b
#undef public_6249639
#undef public_6249641
#undef public_6249649
#undef public_6249651

#pragma init_seg(compiler)
extern "C" void const* const public_624961b = __AsmFindLabelExport(&internal_6249610, 0x624961b);
extern "C" void const* const public_6249623 = __AsmFindLabelExport(&internal_6249610, 0x6249623);
extern "C" void const* const public_624962b = __AsmFindLabelExport(&internal_6249610, 0x624962b);
extern "C" void const* const public_6249639 = __AsmFindLabelExport(&internal_6249610, 0x6249639);
extern "C" void const* const public_6249641 = __AsmFindLabelExport(&internal_6249610, 0x6249641);
extern "C" void const* const public_6249649 = __AsmFindLabelExport(&internal_6249610, 0x6249649);
extern "C" void const* const public_6249651 = __AsmFindLabelExport(&internal_6249610, 0x6249651);
