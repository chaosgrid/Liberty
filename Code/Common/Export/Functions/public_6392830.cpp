#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639283b _public_639283b
#define public_6392849 _public_6392849
#define public_6392854 _public_6392854
#define public_6392860 _public_6392860
#define public_639286c _public_639286c

PROC_DECLARE(0x6392830, internal_6392830, public_6392830);
/* CHUNK of public_6270e50 */
extern "C" NAKED register_t __cdecl internal_6392830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_639283b : nop
        mov eax, dword ptr ss : [ebp-0x167C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6392849 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6392854 : nop
        mov ecx, dword ptr ss : [ebp-0x16B0]
        jmp dword ptr ds : [public_63991ac]
        public_6392860 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_639286c : nop
        mov eax, offset public_63ab620
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392830)
        ASM_EXPORT_ENTRY_FIRST(0x639283b, public_639283b)
        ASM_EXPORT_ENTRY(0x6392849, public_6392849)
        ASM_EXPORT_ENTRY(0x6392854, public_6392854)
        ASM_EXPORT_ENTRY(0x6392860, public_6392860)
        ASM_EXPORT_ENTRY_LAST(0x639286c, public_639286c)
    }
}

#undef public_639283b
#undef public_6392849
#undef public_6392854
#undef public_6392860
#undef public_639286c

#pragma init_seg(compiler)
extern "C" void const* const public_639283b = __AsmFindLabelExport(&internal_6392830, 0x639283b);
extern "C" void const* const public_6392849 = __AsmFindLabelExport(&internal_6392830, 0x6392849);
extern "C" void const* const public_6392854 = __AsmFindLabelExport(&internal_6392830, 0x6392854);
extern "C" void const* const public_6392860 = __AsmFindLabelExport(&internal_6392830, 0x6392860);
extern "C" void const* const public_639286c = __AsmFindLabelExport(&internal_6392830, 0x639286c);
