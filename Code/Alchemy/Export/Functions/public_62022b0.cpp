#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022b0);

#define public_62022c5 _public_62022c5

PROC_DECLARE(0x62022b0, internal_62022b0, public_62022b0);
/* CHUNK of public_6201190 */
extern "C" NAKED register_t __cdecl internal_62022b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62022c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62022c5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62022b0)
        ASM_EXPORT_ENTRY_SINGLE(0x62022c5, public_62022c5)
    }
}

#undef public_62022c5

#pragma init_seg(compiler)
extern "C" void const* const public_62022c5 = __AsmFindLabelExport(&internal_62022b0, 0x62022c5);
