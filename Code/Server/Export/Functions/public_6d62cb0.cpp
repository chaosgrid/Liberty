#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62cc1 _public_6d62cc1
#define public_6d62cca _public_6d62cca

PROC_DECLARE(0x6d62cb0, internal_6d62cb0, public_6d62cb0);
/* CHUNK of public_6d40910 */
extern "C" NAKED register_t __cdecl internal_6d62cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62cc1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp dword ptr ds : [public_6d64b68]
        public_6d62cca : nop
        mov eax, offset public_6d75094
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62cb0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62cc1, public_6d62cc1)
        ASM_EXPORT_ENTRY_LAST(0x6d62cca, public_6d62cca)
    }
}

#undef public_6d62cc1
#undef public_6d62cca

#pragma init_seg(compiler)
extern "C" void const* const public_6d62cc1 = __AsmFindLabelExport(&internal_6d62cb0, 0x6d62cc1);
extern "C" void const* const public_6d62cca = __AsmFindLabelExport(&internal_6d62cb0, 0x6d62cca);
