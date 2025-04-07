#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393519 _public_6393519
#define public_6393522 _public_6393522

PROC_DECLARE(0x6393510, internal_6393510, public_6393510);
/* CHUNK of public_628e780 */
extern "C" NAKED register_t __cdecl internal_6393510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_63991ac]
        public_6393519 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6399314]
        public_6393522 : nop
        mov eax, offset public_63ac650
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393510)
        ASM_EXPORT_ENTRY_FIRST(0x6393519, public_6393519)
        ASM_EXPORT_ENTRY_LAST(0x6393522, public_6393522)
    }
}

#undef public_6393519
#undef public_6393522

#pragma init_seg(compiler)
extern "C" void const* const public_6393519 = __AsmFindLabelExport(&internal_6393510, 0x6393519);
extern "C" void const* const public_6393522 = __AsmFindLabelExport(&internal_6393510, 0x6393522);
