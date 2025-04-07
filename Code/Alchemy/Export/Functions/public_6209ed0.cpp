#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ed0);

#define public_6209ee5 _public_6209ee5

PROC_DECLARE(0x6209ed0, internal_6209ed0, public_6209ed0);
/* CHUNK of public_6207ce0 */
extern "C" NAKED register_t __cdecl internal_6209ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6209ee5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6209ee5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6209ed0)
        ASM_EXPORT_ENTRY_SINGLE(0x6209ee5, public_6209ee5)
    }
}

#undef public_6209ee5

#pragma init_seg(compiler)
extern "C" void const* const public_6209ee5 = __AsmFindLabelExport(&internal_6209ed0, 0x6209ee5);
