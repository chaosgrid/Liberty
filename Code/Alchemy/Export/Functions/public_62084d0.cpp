#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084d0);

#define public_62084e5 _public_62084e5

PROC_DECLARE(0x62084d0, internal_62084d0, public_62084d0);
/* CHUNK of public_6204670 */
extern "C" NAKED register_t __cdecl internal_62084d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62084e5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62084e5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62084d0)
        ASM_EXPORT_ENTRY_SINGLE(0x62084e5, public_62084e5)
    }
}

#undef public_62084e5

#pragma init_seg(compiler)
extern "C" void const* const public_62084e5 = __AsmFindLabelExport(&internal_62084d0, 0x62084e5);
