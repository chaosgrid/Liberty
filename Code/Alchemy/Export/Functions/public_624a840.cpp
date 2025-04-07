#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d60);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a84b _public_624a84b
#define public_624a856 _public_624a856
#define public_624a861 _public_624a861

PROC_DECLARE(0x624a840, internal_624a840, public_624a840);
/* CHUNK of public_6242630 */
extern "C" NAKED register_t __cdecl internal_624a840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a84b : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 8
        jmp public_6209d60
        public_624a856 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 8
        jmp public_6209d60
        public_624a861 : nop
        mov eax, offset public_62538f4
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a840)
        ASM_EXPORT_ENTRY_FIRST(0x624a84b, public_624a84b)
        ASM_EXPORT_ENTRY(0x624a856, public_624a856)
        ASM_EXPORT_ENTRY_LAST(0x624a861, public_624a861)
    }
}

#undef public_624a84b
#undef public_624a856
#undef public_624a861

#pragma init_seg(compiler)
extern "C" void const* const public_624a84b = __AsmFindLabelExport(&internal_624a840, 0x624a84b);
extern "C" void const* const public_624a856 = __AsmFindLabelExport(&internal_624a840, 0x624a856);
extern "C" void const* const public_624a861 = __AsmFindLabelExport(&internal_624a840, 0x624a861);
