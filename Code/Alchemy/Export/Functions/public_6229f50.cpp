#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229f50);

#define public_6229f65 _public_6229f65

PROC_DECLARE(0x6229f50, internal_6229f50, public_6229f50);
/* CHUNK of public_62281c0 */
extern "C" NAKED register_t __cdecl internal_6229f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6229f65
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6229f65 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6229f50)
        ASM_EXPORT_ENTRY_SINGLE(0x6229f65, public_6229f65)
    }
}

#undef public_6229f65

#pragma init_seg(compiler)
extern "C" void const* const public_6229f65 = __AsmFindLabelExport(&internal_6229f50, 0x6229f65);
