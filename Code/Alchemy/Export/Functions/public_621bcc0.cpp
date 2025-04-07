#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bcc0);

#define public_621bcd5 _public_621bcd5

PROC_DECLARE(0x621bcc0, internal_621bcc0, public_621bcc0);
/* CHUNK of public_621b890 */
extern "C" NAKED register_t __cdecl internal_621bcc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_621bcd5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_621bcd5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x621bcc0)
        ASM_EXPORT_ENTRY_SINGLE(0x621bcd5, public_621bcd5)
    }
}

#undef public_621bcd5

#pragma init_seg(compiler)
extern "C" void const* const public_621bcd5 = __AsmFindLabelExport(&internal_621bcc0, 0x621bcd5);
