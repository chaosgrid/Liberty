#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639618b _public_639618b
#define public_6396196 _public_6396196
#define public_63961a2 _public_63961a2
#define public_63961ae _public_63961ae

PROC_DECLARE(0x6396180, internal_6396180, public_6396180);
/* CHUNK of public_6308e60 */
extern "C" NAKED register_t __cdecl internal_6396180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_639618b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6396196 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_63991ac]
        public_63961a2 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_63961ae : nop
        mov eax, offset public_63afff8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396180)
        ASM_EXPORT_ENTRY_FIRST(0x639618b, public_639618b)
        ASM_EXPORT_ENTRY(0x6396196, public_6396196)
        ASM_EXPORT_ENTRY(0x63961a2, public_63961a2)
        ASM_EXPORT_ENTRY_LAST(0x63961ae, public_63961ae)
    }
}

#undef public_639618b
#undef public_6396196
#undef public_63961a2
#undef public_63961ae

#pragma init_seg(compiler)
extern "C" void const* const public_639618b = __AsmFindLabelExport(&internal_6396180, 0x639618b);
extern "C" void const* const public_6396196 = __AsmFindLabelExport(&internal_6396180, 0x6396196);
extern "C" void const* const public_63961a2 = __AsmFindLabelExport(&internal_6396180, 0x63961a2);
extern "C" void const* const public_63961ae = __AsmFindLabelExport(&internal_6396180, 0x63961ae);
