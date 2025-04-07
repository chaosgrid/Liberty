#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395e8c _public_6395e8c
#define public_6395e98 _public_6395e98
#define public_6395ea4 _public_6395ea4

PROC_DECLARE(0x6395e80, internal_6395e80, public_6395e80);
/* CHUNK of public_6300460 */
extern "C" NAKED register_t __cdecl internal_6395e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6395e8c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x14
        jmp dword ptr ds : [public_63991ac]
        public_6395e98 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6395ea4 : nop
        mov eax, offset public_63afc3c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395e80)
        ASM_EXPORT_ENTRY_FIRST(0x6395e8c, public_6395e8c)
        ASM_EXPORT_ENTRY(0x6395e98, public_6395e98)
        ASM_EXPORT_ENTRY_LAST(0x6395ea4, public_6395ea4)
    }
}

#undef public_6395e8c
#undef public_6395e98
#undef public_6395ea4

#pragma init_seg(compiler)
extern "C" void const* const public_6395e8c = __AsmFindLabelExport(&internal_6395e80, 0x6395e8c);
extern "C" void const* const public_6395e98 = __AsmFindLabelExport(&internal_6395e80, 0x6395e98);
extern "C" void const* const public_6395ea4 = __AsmFindLabelExport(&internal_6395e80, 0x6395ea4);
