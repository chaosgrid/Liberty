#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624739b _public_624739b
#define public_62473a3 _public_62473a3

PROC_DECLARE(0x6247390, internal_6247390, public_6247390);
/* CHUNK of public_6204ef0 */
extern "C" NAKED register_t __cdecl internal_6247390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624739b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_62473a3 : nop
        mov eax, offset public_6250114
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247390)
        ASM_EXPORT_ENTRY_FIRST(0x624739b, public_624739b)
        ASM_EXPORT_ENTRY_LAST(0x62473a3, public_62473a3)
    }
}

#undef public_624739b
#undef public_62473a3

#pragma init_seg(compiler)
extern "C" void const* const public_624739b = __AsmFindLabelExport(&internal_6247390, 0x624739b);
extern "C" void const* const public_62473a3 = __AsmFindLabelExport(&internal_6247390, 0x62473a3);
