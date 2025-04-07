#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6071c _public_6d6071c
#define public_6d60727 _public_6d60727
#define public_6d60732 _public_6d60732

PROC_DECLARE(0x6d60710, internal_6d60710, public_6d60710);
/* CHUNK of public_6cee360 */
extern "C" NAKED register_t __cdecl internal_6d60710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_6d64348]
        public_6d6071c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6cecb50
        public_6d60727 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_6cecb50
        public_6d60732 : nop
        mov eax, offset public_6d71014
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60710)
        ASM_EXPORT_ENTRY_FIRST(0x6d6071c, public_6d6071c)
        ASM_EXPORT_ENTRY(0x6d60727, public_6d60727)
        ASM_EXPORT_ENTRY_LAST(0x6d60732, public_6d60732)
    }
}

#undef public_6d6071c
#undef public_6d60727
#undef public_6d60732

#pragma init_seg(compiler)
extern "C" void const* const public_6d6071c = __AsmFindLabelExport(&internal_6d60710, 0x6d6071c);
extern "C" void const* const public_6d60727 = __AsmFindLabelExport(&internal_6d60710, 0x6d60727);
extern "C" void const* const public_6d60732 = __AsmFindLabelExport(&internal_6d60710, 0x6d60732);
