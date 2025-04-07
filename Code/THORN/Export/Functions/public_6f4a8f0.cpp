#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a8f0);

#define public_6f4a905 _public_6f4a905

PROC_DECLARE(0x6f4a8f0, internal_6f4a8f0, public_6f4a8f0);
/* CHUNK of public_6f42d70 */
extern "C" NAKED register_t __cdecl internal_6f4a8f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f4a905
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4a905 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4a8f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f4a905, public_6f4a905)
    }
}

#undef public_6f4a905

#pragma init_seg(compiler)
extern "C" void const* const public_6f4a905 = __AsmFindLabelExport(&internal_6f4a8f0, 0x6f4a905);
