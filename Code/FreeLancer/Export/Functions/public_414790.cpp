#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414790);

#define public_41479b _public_41479b

PROC_DECLARE(0x414790, internal_414790, public_414790);
/* CHUNK of public_414640 */
extern "C" NAKED register_t __cdecl internal_414790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_41479b
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+4]
        public_41479b : nop
        ret 
        UNREACHABLE_TRAP(0x414790)
        ASM_EXPORT_ENTRY_SINGLE(0x41479b, public_41479b)
    }
}

#undef public_41479b

#pragma init_seg(compiler)
extern "C" void const* const public_41479b = __AsmFindLabelExport(&internal_414790, 0x41479b);
