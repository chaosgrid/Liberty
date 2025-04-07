#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229f70);

#define public_6229f85 _public_6229f85

PROC_DECLARE(0x6229f70, internal_6229f70, public_6229f70);
/* CHUNK of public_6228b90 */
extern "C" NAKED register_t __cdecl internal_6229f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6229f85
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6229f85 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6229f70)
        ASM_EXPORT_ENTRY_SINGLE(0x6229f85, public_6229f85)
    }
}

#undef public_6229f85

#pragma init_seg(compiler)
extern "C" void const* const public_6229f85 = __AsmFindLabelExport(&internal_6229f70, 0x6229f85);
