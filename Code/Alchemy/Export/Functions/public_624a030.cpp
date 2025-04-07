#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a03b _public_624a03b
#define public_624a043 _public_624a043

PROC_DECLARE(0x624a030, internal_624a030, public_624a030);
/* CHUNK of public_6238050 */
extern "C" NAKED register_t __cdecl internal_624a030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a03b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_624a043 : nop
        mov eax, offset public_6253078
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a030)
        ASM_EXPORT_ENTRY_FIRST(0x624a03b, public_624a03b)
        ASM_EXPORT_ENTRY_LAST(0x624a043, public_624a043)
    }
}

#undef public_624a03b
#undef public_624a043

#pragma init_seg(compiler)
extern "C" void const* const public_624a03b = __AsmFindLabelExport(&internal_624a030, 0x624a03b);
extern "C" void const* const public_624a043 = __AsmFindLabelExport(&internal_624a030, 0x624a043);
