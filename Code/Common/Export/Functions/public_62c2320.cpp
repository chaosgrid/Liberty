#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2320);

#define public_62c232c _public_62c232c

PROC_DECLARE(0x62c2320, internal_62c2320, public_62c2320);
/* CHUNK of public_62b1810 */
extern "C" NAKED register_t __cdecl internal_62c2320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [ecx+0x20]
        test ecx, ecx
        je public_62c232c
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x20]
        public_62c232c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62c2320)
        ASM_EXPORT_ENTRY_SINGLE(0x62c232c, public_62c232c)
    }
}

#undef public_62c232c

#pragma init_seg(compiler)
extern "C" void const* const public_62c232c = __AsmFindLabelExport(&internal_62c2320, 0x62c232c);
