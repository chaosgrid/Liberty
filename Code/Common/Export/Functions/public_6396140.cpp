#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639614b _public_639614b
#define public_6396156 _public_6396156

PROC_DECLARE(0x6396140, internal_6396140, public_6396140);
/* CHUNK of public_6308d10 */
extern "C" NAKED register_t __cdecl internal_6396140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_630e210
        public_639614b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_630e210
        public_6396156 : nop
        mov eax, offset public_63aff90
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396140)
        ASM_EXPORT_ENTRY_FIRST(0x639614b, public_639614b)
        ASM_EXPORT_ENTRY_LAST(0x6396156, public_6396156)
    }
}

#undef public_639614b
#undef public_6396156

#pragma init_seg(compiler)
extern "C" void const* const public_639614b = __AsmFindLabelExport(&internal_6396140, 0x639614b);
extern "C" void const* const public_6396156 = __AsmFindLabelExport(&internal_6396140, 0x6396156);
