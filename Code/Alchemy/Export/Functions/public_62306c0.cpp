#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62306c0);

#define public_62306d5 _public_62306d5

PROC_DECLARE(0x62306c0, internal_62306c0, public_62306c0);
/* CHUNK of public_622f6a0 */
extern "C" NAKED register_t __cdecl internal_62306c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62306d5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62306d5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62306c0)
        ASM_EXPORT_ENTRY_SINGLE(0x62306d5, public_62306d5)
    }
}

#undef public_62306d5

#pragma init_seg(compiler)
extern "C" void const* const public_62306d5 = __AsmFindLabelExport(&internal_62306c0, 0x62306d5);
