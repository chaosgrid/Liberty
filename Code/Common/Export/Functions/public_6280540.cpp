#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280540);

#define public_6280555 _public_6280555

PROC_DECLARE(0x6280540, internal_6280540, public_6280540);
/* CHUNK of public_627fc80 */
extern "C" NAKED register_t __cdecl internal_6280540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6280555
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6280555 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6280540)
        ASM_EXPORT_ENTRY_SINGLE(0x6280555, public_6280555)
    }
}

#undef public_6280555

#pragma init_seg(compiler)
extern "C" void const* const public_6280555 = __AsmFindLabelExport(&internal_6280540, 0x6280555);
