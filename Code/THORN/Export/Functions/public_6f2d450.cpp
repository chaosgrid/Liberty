#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d450);

#define public_6f2d465 _public_6f2d465

PROC_DECLARE(0x6f2d450, internal_6f2d450, public_6f2d450);
/* CHUNK of public_6f28a60 */
extern "C" NAKED register_t __cdecl internal_6f2d450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f2d465
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f2d465 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2d450)
        ASM_EXPORT_ENTRY_SINGLE(0x6f2d465, public_6f2d465)
    }
}

#undef public_6f2d465

#pragma init_seg(compiler)
extern "C" void const* const public_6f2d465 = __AsmFindLabelExport(&internal_6f2d450, 0x6f2d465);
