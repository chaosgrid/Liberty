#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a81b _public_624a81b
#define public_624a826 _public_624a826
#define public_624a831 _public_624a831

PROC_DECLARE(0x624a810, internal_624a810, public_624a810);
/* CHUNK of public_6241900 */
extern "C" NAKED register_t __cdecl internal_624a810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a81b : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 8
        jmp public_6209fc0
        public_624a826 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 8
        jmp public_6209fc0
        public_624a831 : nop
        mov eax, offset public_62538c0
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a810)
        ASM_EXPORT_ENTRY_FIRST(0x624a81b, public_624a81b)
        ASM_EXPORT_ENTRY(0x624a826, public_624a826)
        ASM_EXPORT_ENTRY_LAST(0x624a831, public_624a831)
    }
}

#undef public_624a81b
#undef public_624a826
#undef public_624a831

#pragma init_seg(compiler)
extern "C" void const* const public_624a81b = __AsmFindLabelExport(&internal_624a810, 0x624a81b);
extern "C" void const* const public_624a826 = __AsmFindLabelExport(&internal_624a810, 0x624a826);
extern "C" void const* const public_624a831 = __AsmFindLabelExport(&internal_624a810, 0x624a831);
