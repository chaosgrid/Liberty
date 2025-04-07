#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220d50);

#define public_6220d65 _public_6220d65

PROC_DECLARE(0x6220d50, internal_6220d50, public_6220d50);
/* CHUNK of public_621eed0 */
extern "C" NAKED register_t __cdecl internal_6220d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6220d65
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6220d65 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6220d50)
        ASM_EXPORT_ENTRY_SINGLE(0x6220d65, public_6220d65)
    }
}

#undef public_6220d65

#pragma init_seg(compiler)
extern "C" void const* const public_6220d65 = __AsmFindLabelExport(&internal_6220d50, 0x6220d65);
