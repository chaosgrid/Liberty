#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f30);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a7eb _public_624a7eb
#define public_624a7f6 _public_624a7f6
#define public_624a801 _public_624a801

PROC_DECLARE(0x624a7e0, internal_624a7e0, public_624a7e0);
/* CHUNK of public_62416f0 */
extern "C" NAKED register_t __cdecl internal_624a7e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a7eb : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 8
        jmp public_6209f30
        public_624a7f6 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 8
        jmp public_6209f30
        public_624a801 : nop
        mov eax, offset public_625388c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a7e0)
        ASM_EXPORT_ENTRY_FIRST(0x624a7eb, public_624a7eb)
        ASM_EXPORT_ENTRY(0x624a7f6, public_624a7f6)
        ASM_EXPORT_ENTRY_LAST(0x624a801, public_624a801)
    }
}

#undef public_624a7eb
#undef public_624a7f6
#undef public_624a801

#pragma init_seg(compiler)
extern "C" void const* const public_624a7eb = __AsmFindLabelExport(&internal_624a7e0, 0x624a7eb);
extern "C" void const* const public_624a7f6 = __AsmFindLabelExport(&internal_624a7e0, 0x624a7f6);
extern "C" void const* const public_624a801 = __AsmFindLabelExport(&internal_624a7e0, 0x624a801);
