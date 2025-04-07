#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639252b _public_639252b
#define public_6392536 _public_6392536
#define public_6392542 _public_6392542
#define public_639254e _public_639254e

PROC_DECLARE(0x6392520, internal_6392520, public_6392520);
/* CHUNK of public_6265100 */
extern "C" NAKED register_t __cdecl internal_6392520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_639252b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6392536 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_63991ac]
        public_6392542 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_639254e : nop
        mov eax, offset public_63ab09c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392520)
        ASM_EXPORT_ENTRY_FIRST(0x639252b, public_639252b)
        ASM_EXPORT_ENTRY(0x6392536, public_6392536)
        ASM_EXPORT_ENTRY(0x6392542, public_6392542)
        ASM_EXPORT_ENTRY_LAST(0x639254e, public_639254e)
    }
}

#undef public_639252b
#undef public_6392536
#undef public_6392542
#undef public_639254e

#pragma init_seg(compiler)
extern "C" void const* const public_639252b = __AsmFindLabelExport(&internal_6392520, 0x639252b);
extern "C" void const* const public_6392536 = __AsmFindLabelExport(&internal_6392520, 0x6392536);
extern "C" void const* const public_6392542 = __AsmFindLabelExport(&internal_6392520, 0x6392542);
extern "C" void const* const public_639254e = __AsmFindLabelExport(&internal_6392520, 0x639254e);
