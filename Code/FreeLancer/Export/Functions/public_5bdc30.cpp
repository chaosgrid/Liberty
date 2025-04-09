#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdc39 _public_5bdc39
#define public_5bdc44 _public_5bdc44

PROC_DECLARE(0x5bdc30, internal_5bdc30, public_5bdc30);
/* CHUNK of public_4cf030 */
extern "C" NAKED register_t __cdecl internal_5bdc30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x74]
        jmp dword ptr ds : [public_5c62a4]
        public_5bdc39 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 4
        jmp public_5154f0
        public_5bdc44 : nop
        mov eax, offset public_5f808c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdc30)
        ASM_EXPORT_ENTRY_FIRST(0x5bdc39, public_5bdc39)
        ASM_EXPORT_ENTRY_LAST(0x5bdc44, public_5bdc44)
    }
}

#undef public_5bdc39
#undef public_5bdc44

#pragma init_seg(compiler)
extern "C" void const* const public_5bdc39 = __AsmFindLabelExport(&internal_5bdc30, 0x5bdc39);
extern "C" void const* const public_5bdc44 = __AsmFindLabelExport(&internal_5bdc30, 0x5bdc44);
