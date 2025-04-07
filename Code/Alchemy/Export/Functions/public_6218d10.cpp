#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218d10);

#define public_6218d1d _public_6218d1d

PROC_DECLARE(0x6218d10, internal_6218d10, public_6218d10);
/* CHUNK of public_6215f40 */
extern "C" NAKED register_t __cdecl internal_6218d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6218d1d
        dec dword ptr ds : [eax+0xE4]
        public_6218d1d : nop
        ret 
        UNREACHABLE_TRAP(0x6218d10)
        ASM_EXPORT_ENTRY_SINGLE(0x6218d1d, public_6218d1d)
    }
}

#undef public_6218d1d

#pragma init_seg(compiler)
extern "C" void const* const public_6218d1d = __AsmFindLabelExport(&internal_6218d10, 0x6218d1d);
