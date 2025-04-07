#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392438 _public_6392438
#define public_6392441 _public_6392441
#define public_639244a _public_639244a

PROC_DECLARE(0x6392430, internal_6392430, public_6392430);
/* CHUNK of public_6263860 */
extern "C" NAKED register_t __cdecl internal_6392430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6263310
        public_6392438 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_63991ac]
        public_6392441 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_63991ac]
        public_639244a : nop
        mov eax, offset public_63aaf60
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392430)
        ASM_EXPORT_ENTRY_FIRST(0x6392438, public_6392438)
        ASM_EXPORT_ENTRY(0x6392441, public_6392441)
        ASM_EXPORT_ENTRY_LAST(0x639244a, public_639244a)
    }
}

#undef public_6392438
#undef public_6392441
#undef public_639244a

#pragma init_seg(compiler)
extern "C" void const* const public_6392438 = __AsmFindLabelExport(&internal_6392430, 0x6392438);
extern "C" void const* const public_6392441 = __AsmFindLabelExport(&internal_6392430, 0x6392441);
extern "C" void const* const public_639244a = __AsmFindLabelExport(&internal_6392430, 0x639244a);
