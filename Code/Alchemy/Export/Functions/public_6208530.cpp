#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208530);

#define public_6208545 _public_6208545

PROC_DECLARE(0x6208530, internal_6208530, public_6208530);
/* CHUNK of public_6204670 */
extern "C" NAKED register_t __cdecl internal_6208530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6208545
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6208545 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6208530)
        ASM_EXPORT_ENTRY_SINGLE(0x6208545, public_6208545)
    }
}

#undef public_6208545

#pragma init_seg(compiler)
extern "C" void const* const public_6208545 = __AsmFindLabelExport(&internal_6208530, 0x6208545);
