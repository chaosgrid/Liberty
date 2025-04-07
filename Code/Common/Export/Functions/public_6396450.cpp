#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396458 _public_6396458
#define public_639646e _public_639646e
#define public_639646f _public_639646f

PROC_DECLARE(0x6396450, internal_6396450, public_6396450);
/* CHUNK of public_6312dd0 */
extern "C" NAKED register_t __cdecl internal_6396450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_6396458 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        and eax, 1
        test eax, eax
        je public_639646e
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_630e210
        public_639646e : nop
        ret 
        public_639646f : nop
        mov eax, offset public_63b0370
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396450)
        ASM_EXPORT_ENTRY_FIRST(0x6396458, public_6396458)
        ASM_EXPORT_ENTRY(0x639646e, public_639646e)
        ASM_EXPORT_ENTRY_LAST(0x639646f, public_639646f)
    }
}

#undef public_6396458
#undef public_639646e
#undef public_639646f

#pragma init_seg(compiler)
extern "C" void const* const public_6396458 = __AsmFindLabelExport(&internal_6396450, 0x6396458);
extern "C" void const* const public_639646e = __AsmFindLabelExport(&internal_6396450, 0x639646e);
extern "C" void const* const public_639646f = __AsmFindLabelExport(&internal_6396450, 0x639646f);
