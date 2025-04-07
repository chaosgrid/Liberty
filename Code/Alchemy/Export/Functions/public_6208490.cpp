#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208490);

#define public_62084a5 _public_62084a5

PROC_DECLARE(0x6208490, internal_6208490, public_6208490);
/* CHUNK of public_6204670 */
extern "C" NAKED register_t __cdecl internal_6208490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62084a5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62084a5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6208490)
        ASM_EXPORT_ENTRY_SINGLE(0x62084a5, public_62084a5)
    }
}

#undef public_62084a5

#pragma init_seg(compiler)
extern "C" void const* const public_62084a5 = __AsmFindLabelExport(&internal_6208490, 0x62084a5);
