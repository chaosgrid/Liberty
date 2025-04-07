#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);

#define public_6207485 _public_6207485

PROC_DECLARE(0x6207470, internal_6207470, public_6207470);
/* CHUNK of public_6204670 */
extern "C" NAKED register_t __cdecl internal_6207470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6207485
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6207485 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6207470)
        ASM_EXPORT_ENTRY_SINGLE(0x6207485, public_6207485)
    }
}

#undef public_6207485

#pragma init_seg(compiler)
extern "C" void const* const public_6207485 = __AsmFindLabelExport(&internal_6207470, 0x6207485);
