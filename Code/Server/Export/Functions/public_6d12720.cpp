#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12720);

#define public_6d12735 _public_6d12735

PROC_DECLARE(0x6d12720, internal_6d12720, public_6d12720);
/* CHUNK of public_6d180e0 */
extern "C" NAKED register_t __cdecl internal_6d12720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+0x178]
        add eax, 0x174
        test ecx, ecx
        jne public_6d12735
        xor eax, eax
        ret 
        public_6d12735 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6d12720)
        ASM_EXPORT_ENTRY_SINGLE(0x6d12735, public_6d12735)
    }
}

#undef public_6d12735

#pragma init_seg(compiler)
extern "C" void const* const public_6d12735 = __AsmFindLabelExport(&internal_6d12720, 0x6d12735);
