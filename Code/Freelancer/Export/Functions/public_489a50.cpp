#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489a50);

#define public_489a75 _public_489a75

PROC_DECLARE(0x489a50, internal_489a50, public_489a50);
/* CHUNK of public_489b50 */
extern "C" NAKED register_t __cdecl internal_489a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_489a75
        mov ecx, eax
        test ecx, ecx
        je public_489a75
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_489a75 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x489a50)
        ASM_EXPORT_ENTRY_SINGLE(0x489a75, public_489a75)
    }
}

#undef public_489a75

#pragma init_seg(compiler)
extern "C" void const* const public_489a75 = __AsmFindLabelExport(&internal_489a50, 0x489a75);
