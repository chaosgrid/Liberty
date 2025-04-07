#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2330);

#define public_62c233c _public_62c233c

PROC_DECLARE(0x62c2330, internal_62c2330, public_62c2330);
/* CHUNK of public_62b1840 */
extern "C" NAKED register_t __cdecl internal_62c2330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [ecx+0x28]
        test ecx, ecx
        je public_62c233c
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x20]
        public_62c233c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62c2330)
        ASM_EXPORT_ENTRY_SINGLE(0x62c233c, public_62c233c)
    }
}

#undef public_62c233c

#pragma init_seg(compiler)
extern "C" void const* const public_62c233c = __AsmFindLabelExport(&internal_62c2330, 0x62c233c);
