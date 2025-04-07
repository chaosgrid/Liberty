#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c5c20);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c5c31 _public_62c5c31

PROC_DECLARE(0x62c5c20, internal_62c5c20, public_62c5c20);
/* CHUNK of public_62c5af0 */
extern "C" NAKED register_t __cdecl internal_62c5c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x28]
        add ecx, 0x28
        test eax, eax
        je public_62c5c31
        push 0
        call public_6341610
        public_62c5c31 : nop
        ret 
        UNREACHABLE_TRAP(0x62c5c20)
        ASM_EXPORT_ENTRY_SINGLE(0x62c5c31, public_62c5c31)
    }
}

#undef public_62c5c31

#pragma init_seg(compiler)
extern "C" void const* const public_62c5c31 = __AsmFindLabelExport(&internal_62c5c20, 0x62c5c31);
