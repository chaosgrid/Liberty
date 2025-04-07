#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6470);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62e6481 _public_62e6481

PROC_DECLARE(0x62e6470, internal_62e6470, public_62e6470);
/* CHUNK of public_62db3b0 */
extern "C" NAKED register_t __cdecl internal_62e6470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        test eax, eax
        je public_62e6481
        push 0
        call public_6341610
        public_62e6481 : nop
        ret 
        UNREACHABLE_TRAP(0x62e6470)
        ASM_EXPORT_ENTRY_SINGLE(0x62e6481, public_62e6481)
    }
}

#undef public_62e6481

#pragma init_seg(compiler)
extern "C" void const* const public_62e6481 = __AsmFindLabelExport(&internal_62e6470, 0x62e6481);
