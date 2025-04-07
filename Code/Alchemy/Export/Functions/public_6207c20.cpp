#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207c20);

#define public_6207c35 _public_6207c35

PROC_DECLARE(0x6207c20, internal_6207c20, public_6207c20);
/* CHUNK of public_6204670 */
extern "C" NAKED register_t __cdecl internal_6207c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6207c35
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6207c35 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6207c20)
        ASM_EXPORT_ENTRY_SINGLE(0x6207c35, public_6207c35)
    }
}

#undef public_6207c35

#pragma init_seg(compiler)
extern "C" void const* const public_6207c35 = __AsmFindLabelExport(&internal_6207c20, 0x6207c35);
