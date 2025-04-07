#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a4c0);

#define public_621a4d7 _public_621a4d7

PROC_DECLARE(0x621a4c0, internal_621a4c0, public_621a4c0);
/* CHUNK of public_6219e10 */
extern "C" NAKED register_t __cdecl internal_621a4c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_621a4d7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_621a4d7 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x621a4c0)
        ASM_EXPORT_ENTRY_SINGLE(0x621a4d7, public_621a4d7)
    }
}

#undef public_621a4d7

#pragma init_seg(compiler)
extern "C" void const* const public_621a4d7 = __AsmFindLabelExport(&internal_621a4c0, 0x621a4d7);
