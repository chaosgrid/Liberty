#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_621bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62489ab _public_62489ab
#define public_62489b3 _public_62489b3
#define public_62489c1 _public_62489c1

PROC_DECLARE(0x62489a0, internal_62489a0, public_62489a0);
/* CHUNK of public_621d220 */
extern "C" NAKED register_t __cdecl internal_62489a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62489ab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b710
        public_62489b3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x98
        jmp public_621bcc0
        public_62489c1 : nop
        mov eax, offset public_625186c
        jmp public_6246126
        UNREACHABLE_TRAP(0x62489a0)
        ASM_EXPORT_ENTRY_FIRST(0x62489ab, public_62489ab)
        ASM_EXPORT_ENTRY(0x62489b3, public_62489b3)
        ASM_EXPORT_ENTRY_LAST(0x62489c1, public_62489c1)
    }
}

#undef public_62489ab
#undef public_62489b3
#undef public_62489c1

#pragma init_seg(compiler)
extern "C" void const* const public_62489ab = __AsmFindLabelExport(&internal_62489a0, 0x62489ab);
extern "C" void const* const public_62489b3 = __AsmFindLabelExport(&internal_62489a0, 0x62489b3);
extern "C" void const* const public_62489c1 = __AsmFindLabelExport(&internal_62489a0, 0x62489c1);
