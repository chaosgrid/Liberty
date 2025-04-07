#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d90);

#define public_6209da5 _public_6209da5

PROC_DECLARE(0x6209d90, internal_6209d90, public_6209d90);
/* CHUNK of public_6207530 */
extern "C" NAKED register_t __cdecl internal_6209d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6209da5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6209da5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6209d90)
        ASM_EXPORT_ENTRY_SINGLE(0x6209da5, public_6209da5)
    }
}

#undef public_6209da5

#pragma init_seg(compiler)
extern "C" void const* const public_6209da5 = __AsmFindLabelExport(&internal_6209d90, 0x6209da5);
