#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203bc0);

#define public_6203bd5 _public_6203bd5

PROC_DECLARE(0x6203bc0, internal_6203bc0, public_6203bc0);
/* CHUNK of public_6203480 */
extern "C" NAKED register_t __cdecl internal_6203bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6203bd5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6203bd5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6203bc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6203bd5, public_6203bd5)
    }
}

#undef public_6203bd5

#pragma init_seg(compiler)
extern "C" void const* const public_6203bd5 = __AsmFindLabelExport(&internal_6203bc0, 0x6203bd5);
