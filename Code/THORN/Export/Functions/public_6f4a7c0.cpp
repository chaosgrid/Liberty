#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a7c0);

#define public_6f4a7d5 _public_6f4a7d5

PROC_DECLARE(0x6f4a7c0, internal_6f4a7c0, public_6f4a7c0);
/* CHUNK of public_6f40c80 */
extern "C" NAKED register_t __cdecl internal_6f4a7c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f4a7d5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4a7d5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4a7c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f4a7d5, public_6f4a7d5)
    }
}

#undef public_6f4a7d5

#pragma init_seg(compiler)
extern "C" void const* const public_6f4a7d5 = __AsmFindLabelExport(&internal_6f4a7c0, 0x6f4a7d5);
