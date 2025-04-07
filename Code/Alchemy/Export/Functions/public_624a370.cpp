#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_621bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a37b _public_624a37b
#define public_624a383 _public_624a383
#define public_624a391 _public_624a391

PROC_DECLARE(0x624a370, internal_624a370, public_624a370);
/* CHUNK of public_623ba50 */
extern "C" NAKED register_t __cdecl internal_624a370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a37b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b710
        public_624a383 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x98
        jmp public_621bcc0
        public_624a391 : nop
        mov eax, offset public_62533fc
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a370)
        ASM_EXPORT_ENTRY_FIRST(0x624a37b, public_624a37b)
        ASM_EXPORT_ENTRY(0x624a383, public_624a383)
        ASM_EXPORT_ENTRY_LAST(0x624a391, public_624a391)
    }
}

#undef public_624a37b
#undef public_624a383
#undef public_624a391

#pragma init_seg(compiler)
extern "C" void const* const public_624a37b = __AsmFindLabelExport(&internal_624a370, 0x624a37b);
extern "C" void const* const public_624a383 = __AsmFindLabelExport(&internal_624a370, 0x624a383);
extern "C" void const* const public_624a391 = __AsmFindLabelExport(&internal_624a370, 0x624a391);
