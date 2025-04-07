#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c3051 _public_62c3051

PROC_DECLARE(0x62c3040, internal_62c3040, public_62c3040);
/* CHUNK of public_62c2e60 */
extern "C" NAKED register_t __cdecl internal_62c3040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x14]
        add ecx, 0x14
        test eax, eax
        je public_62c3051
        push 0
        call public_6341610
        public_62c3051 : nop
        ret 
        UNREACHABLE_TRAP(0x62c3040)
        ASM_EXPORT_ENTRY_SINGLE(0x62c3051, public_62c3051)
    }
}

#undef public_62c3051

#pragma init_seg(compiler)
extern "C" void const* const public_62c3051 = __AsmFindLabelExport(&internal_62c3040, 0x62c3051);
