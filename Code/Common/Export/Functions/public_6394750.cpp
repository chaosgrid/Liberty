#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639475c _public_639475c
#define public_6394768 _public_6394768
#define public_6394774 _public_6394774

PROC_DECLARE(0x6394750, internal_6394750, public_6394750);
/* CHUNK of public_62b6920 */
extern "C" NAKED register_t __cdecl internal_6394750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_639475c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp dword ptr ds : [public_63991ac]
        public_6394768 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6394774 : nop
        mov eax, offset public_63adcec
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394750)
        ASM_EXPORT_ENTRY_FIRST(0x639475c, public_639475c)
        ASM_EXPORT_ENTRY(0x6394768, public_6394768)
        ASM_EXPORT_ENTRY_LAST(0x6394774, public_6394774)
    }
}

#undef public_639475c
#undef public_6394768
#undef public_6394774

#pragma init_seg(compiler)
extern "C" void const* const public_639475c = __AsmFindLabelExport(&internal_6394750, 0x639475c);
extern "C" void const* const public_6394768 = __AsmFindLabelExport(&internal_6394750, 0x6394768);
extern "C" void const* const public_6394774 = __AsmFindLabelExport(&internal_6394750, 0x6394774);
