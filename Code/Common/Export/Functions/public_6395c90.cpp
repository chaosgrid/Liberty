#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395c9c _public_6395c9c
#define public_6395ca8 _public_6395ca8
#define public_6395cb4 _public_6395cb4

PROC_DECLARE(0x6395c90, internal_6395c90, public_6395c90);
/* CHUNK of public_62ff1f0 */
extern "C" NAKED register_t __cdecl internal_6395c90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6395c9c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp dword ptr ds : [public_63991ac]
        public_6395ca8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6395cb4 : nop
        mov eax, offset public_63afa98
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395c90)
        ASM_EXPORT_ENTRY_FIRST(0x6395c9c, public_6395c9c)
        ASM_EXPORT_ENTRY(0x6395ca8, public_6395ca8)
        ASM_EXPORT_ENTRY_LAST(0x6395cb4, public_6395cb4)
    }
}

#undef public_6395c9c
#undef public_6395ca8
#undef public_6395cb4

#pragma init_seg(compiler)
extern "C" void const* const public_6395c9c = __AsmFindLabelExport(&internal_6395c90, 0x6395c9c);
extern "C" void const* const public_6395ca8 = __AsmFindLabelExport(&internal_6395c90, 0x6395ca8);
extern "C" void const* const public_6395cb4 = __AsmFindLabelExport(&internal_6395c90, 0x6395cb4);
