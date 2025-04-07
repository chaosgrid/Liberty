#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220c40);

#define public_6220c55 _public_6220c55

PROC_DECLARE(0x6220c40, internal_6220c40, public_6220c40);
/* CHUNK of public_621fd50 */
extern "C" NAKED register_t __cdecl internal_6220c40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6220c55
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6220c55 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6220c40)
        ASM_EXPORT_ENTRY_SINGLE(0x6220c55, public_6220c55)
    }
}

#undef public_6220c55

#pragma init_seg(compiler)
extern "C" void const* const public_6220c55 = __AsmFindLabelExport(&internal_6220c40, 0x6220c55);
