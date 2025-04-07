#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a8b0);

#define public_6f4a8c5 _public_6f4a8c5

PROC_DECLARE(0x6f4a8b0, internal_6f4a8b0, public_6f4a8b0);
/* CHUNK of public_6f41960 */
extern "C" NAKED register_t __cdecl internal_6f4a8b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f4a8c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4a8c5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4a8b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f4a8c5, public_6f4a8c5)
    }
}

#undef public_6f4a8c5

#pragma init_seg(compiler)
extern "C" void const* const public_6f4a8c5 = __AsmFindLabelExport(&internal_6f4a8b0, 0x6f4a8c5);
