#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6350560);

#define public_635057f _public_635057f

PROC_DECLARE(0x6350560, internal_6350560, public_6350560);
/* CHUNK of public_634e0b0 */
extern "C" NAKED register_t __cdecl internal_6350560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_635057f
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_635057f
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_635057f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6350560)
        ASM_EXPORT_ENTRY_SINGLE(0x635057f, public_635057f)
    }
}

#undef public_635057f

#pragma init_seg(compiler)
extern "C" void const* const public_635057f = __AsmFindLabelExport(&internal_6350560, 0x635057f);
