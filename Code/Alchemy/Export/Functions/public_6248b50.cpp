#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220c40);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248b5b _public_6248b5b
#define public_6248b63 _public_6248b63

PROC_DECLARE(0x6248b50, internal_6248b50, public_6248b50);
/* CHUNK of public_6220020 */
extern "C" NAKED register_t __cdecl internal_6248b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248b5b : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6220c40
        public_6248b63 : nop
        mov eax, offset public_6251a18
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248b50)
        ASM_EXPORT_ENTRY_FIRST(0x6248b5b, public_6248b5b)
        ASM_EXPORT_ENTRY_LAST(0x6248b63, public_6248b63)
    }
}

#undef public_6248b5b
#undef public_6248b63

#pragma init_seg(compiler)
extern "C" void const* const public_6248b5b = __AsmFindLabelExport(&internal_6248b50, 0x6248b5b);
extern "C" void const* const public_6248b63 = __AsmFindLabelExport(&internal_6248b50, 0x6248b63);
