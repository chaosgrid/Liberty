#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d27b0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d27c1 _public_62d27c1

PROC_DECLARE(0x62d27b0, internal_62d27b0, public_62d27b0);
/* CHUNK of public_62d2530 */
extern "C" NAKED register_t __cdecl internal_62d27b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+8]
        add ecx, 8
        test eax, eax
        je public_62d27c1
        push 0
        call public_6341610
        public_62d27c1 : nop
        ret 
        UNREACHABLE_TRAP(0x62d27b0)
        ASM_EXPORT_ENTRY_SINGLE(0x62d27c1, public_62d27c1)
    }
}

#undef public_62d27c1

#pragma init_seg(compiler)
extern "C" void const* const public_62d27c1 = __AsmFindLabelExport(&internal_62d27b0, 0x62d27c1);
