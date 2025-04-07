#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_621bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624878b _public_624878b
#define public_6248793 _public_6248793
#define public_62487a1 _public_62487a1

PROC_DECLARE(0x6248780, internal_6248780, public_6248780);
/* CHUNK of public_621b890 */
extern "C" NAKED register_t __cdecl internal_6248780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624878b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b710
        public_6248793 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x98
        jmp public_621bcc0
        public_62487a1 : nop
        mov eax, offset public_6251660
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248780)
        ASM_EXPORT_ENTRY_FIRST(0x624878b, public_624878b)
        ASM_EXPORT_ENTRY(0x6248793, public_6248793)
        ASM_EXPORT_ENTRY_LAST(0x62487a1, public_62487a1)
    }
}

#undef public_624878b
#undef public_6248793
#undef public_62487a1

#pragma init_seg(compiler)
extern "C" void const* const public_624878b = __AsmFindLabelExport(&internal_6248780, 0x624878b);
extern "C" void const* const public_6248793 = __AsmFindLabelExport(&internal_6248780, 0x6248793);
extern "C" void const* const public_62487a1 = __AsmFindLabelExport(&internal_6248780, 0x62487a1);
