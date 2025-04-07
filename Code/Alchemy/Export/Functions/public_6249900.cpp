#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62306c0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624990b _public_624990b
#define public_6249916 _public_6249916

PROC_DECLARE(0x6249900, internal_6249900, public_6249900);
/* CHUNK of public_6230600 */
extern "C" NAKED register_t __cdecl internal_6249900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x6C
        jmp public_62306c0
        public_624990b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_62306c0
        public_6249916 : nop
        mov eax, offset public_62528ec
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249900)
        ASM_EXPORT_ENTRY_FIRST(0x624990b, public_624990b)
        ASM_EXPORT_ENTRY_LAST(0x6249916, public_6249916)
    }
}

#undef public_624990b
#undef public_6249916

#pragma init_seg(compiler)
extern "C" void const* const public_624990b = __AsmFindLabelExport(&internal_6249900, 0x624990b);
extern "C" void const* const public_6249916 = __AsmFindLabelExport(&internal_6249900, 0x6249916);
