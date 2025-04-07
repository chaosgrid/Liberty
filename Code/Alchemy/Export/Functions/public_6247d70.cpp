#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6211030);
CLANG_FORWARD_PROC_SYMBOL(public_6211040);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247d7b _public_6247d7b
#define public_6247d83 _public_6247d83
#define public_6247d91 _public_6247d91
#define public_6247d99 _public_6247d99
#define public_6247da1 _public_6247da1
#define public_6247da9 _public_6247da9

PROC_DECLARE(0x6247d70, internal_6247d70, public_6247d70);
/* CHUNK of public_6210e20 */
extern "C" NAKED register_t __cdecl internal_6247d70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247d7b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_6247d83 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xB4
        jmp public_620b700
        public_6247d91 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6211040
        public_6247d99 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6211030
        public_6247da1 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_6247da9 : nop
        mov eax, offset public_6250bcc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247d70)
        ASM_EXPORT_ENTRY_FIRST(0x6247d7b, public_6247d7b)
        ASM_EXPORT_ENTRY(0x6247d83, public_6247d83)
        ASM_EXPORT_ENTRY(0x6247d91, public_6247d91)
        ASM_EXPORT_ENTRY(0x6247d99, public_6247d99)
        ASM_EXPORT_ENTRY(0x6247da1, public_6247da1)
        ASM_EXPORT_ENTRY_LAST(0x6247da9, public_6247da9)
    }
}

#undef public_6247d7b
#undef public_6247d83
#undef public_6247d91
#undef public_6247d99
#undef public_6247da1
#undef public_6247da9

#pragma init_seg(compiler)
extern "C" void const* const public_6247d7b = __AsmFindLabelExport(&internal_6247d70, 0x6247d7b);
extern "C" void const* const public_6247d83 = __AsmFindLabelExport(&internal_6247d70, 0x6247d83);
extern "C" void const* const public_6247d91 = __AsmFindLabelExport(&internal_6247d70, 0x6247d91);
extern "C" void const* const public_6247d99 = __AsmFindLabelExport(&internal_6247d70, 0x6247d99);
extern "C" void const* const public_6247da1 = __AsmFindLabelExport(&internal_6247d70, 0x6247da1);
extern "C" void const* const public_6247da9 = __AsmFindLabelExport(&internal_6247d70, 0x6247da9);
