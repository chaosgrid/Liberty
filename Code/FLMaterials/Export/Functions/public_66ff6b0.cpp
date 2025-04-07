#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);

#define public_66ff6c5 _public_66ff6c5

PROC_DECLARE(0x66ff6b0, internal_66ff6b0, public_66ff6b0);
/* CHUNK of public_66f2da0 */
extern "C" NAKED register_t __cdecl internal_66ff6b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_66ff6c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_66ff6c5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66ff6b0)
        ASM_EXPORT_ENTRY_SINGLE(0x66ff6c5, public_66ff6c5)
    }
}

#undef public_66ff6c5

#pragma init_seg(compiler)
extern "C" void const* const public_66ff6c5 = __AsmFindLabelExport(&internal_66ff6b0, 0x66ff6c5);
