#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208550);

#define public_6208565 _public_6208565

PROC_DECLARE(0x6208550, internal_6208550, public_6208550);
/* CHUNK of public_6204670 */
extern "C" NAKED register_t __cdecl internal_6208550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6208565
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6208565 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6208550)
        ASM_EXPORT_ENTRY_SINGLE(0x6208565, public_6208565)
    }
}

#undef public_6208565

#pragma init_seg(compiler)
extern "C" void const* const public_6208565 = __AsmFindLabelExport(&internal_6208550, 0x6208565);
