#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ff50);

#define public_621ff67 _public_621ff67

PROC_DECLARE(0x621ff50, internal_621ff50, public_621ff50);
/* CHUNK of public_621fd50 */
extern "C" NAKED register_t __cdecl internal_621ff50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_621ff67
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_621ff67 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x621ff50)
        ASM_EXPORT_ENTRY_SINGLE(0x621ff67, public_621ff67)
    }
}

#undef public_621ff67

#pragma init_seg(compiler)
extern "C" void const* const public_621ff67 = __AsmFindLabelExport(&internal_621ff50, 0x621ff67);
