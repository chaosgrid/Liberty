#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a800);

#define public_6f4a815 _public_6f4a815

PROC_DECLARE(0x6f4a800, internal_6f4a800, public_6f4a800);
/* CHUNK of public_6f42210 */
extern "C" NAKED register_t __cdecl internal_6f4a800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f4a815
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4a815 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4a800)
        ASM_EXPORT_ENTRY_SINGLE(0x6f4a815, public_6f4a815)
    }
}

#undef public_6f4a815

#pragma init_seg(compiler)
extern "C" void const* const public_6f4a815 = __AsmFindLabelExport(&internal_6f4a800, 0x6f4a815);
