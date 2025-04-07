#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);

#define public_620b727 _public_620b727

PROC_DECLARE(0x620b710, internal_620b710, public_620b710);
/* CHUNK of public_620b480 */
extern "C" NAKED register_t __cdecl internal_620b710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_620b727
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_620b727 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620b710)
        ASM_EXPORT_ENTRY_SINGLE(0x620b727, public_620b727)
    }
}

#undef public_620b727

#pragma init_seg(compiler)
extern "C" void const* const public_620b727 = __AsmFindLabelExport(&internal_620b710, 0x620b727);
