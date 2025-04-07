#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f60);

#define public_6209f75 _public_6209f75

PROC_DECLARE(0x6209f60, internal_6209f60, public_6209f60);
/* CHUNK of public_6206d80 */
extern "C" NAKED register_t __cdecl internal_6209f60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6209f75
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6209f75 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6209f60)
        ASM_EXPORT_ENTRY_SINGLE(0x6209f75, public_6209f75)
    }
}

#undef public_6209f75

#pragma init_seg(compiler)
extern "C" void const* const public_6209f75 = __AsmFindLabelExport(&internal_6209f60, 0x6209f75);
