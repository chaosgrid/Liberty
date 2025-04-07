#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a890);

#define public_6f4a8a5 _public_6f4a8a5

PROC_DECLARE(0x6f4a890, internal_6f4a890, public_6f4a890);
/* CHUNK of public_6f41960 */
extern "C" NAKED register_t __cdecl internal_6f4a890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f4a8a5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4a8a5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4a890)
        ASM_EXPORT_ENTRY_SINGLE(0x6f4a8a5, public_6f4a8a5)
    }
}

#undef public_6f4a8a5

#pragma init_seg(compiler)
extern "C" void const* const public_6f4a8a5 = __AsmFindLabelExport(&internal_6f4a890, 0x6f4a8a5);
