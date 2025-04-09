#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c099c _public_5c099c
#define public_5c09a5 _public_5c09a5

PROC_DECLARE(0x5c0990, internal_5c0990, public_5c0990);
/* CHUNK of public_5361e0 */
extern "C" NAKED register_t __cdecl internal_5c0990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call dword ptr ds : [public_5c69b0]
        pop ecx
        ret 
        public_5c099c : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp dword ptr ds : [public_5c69ac]
        public_5c09a5 : nop
        mov eax, offset public_5fabb8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0990)
        ASM_EXPORT_ENTRY_FIRST(0x5c099c, public_5c099c)
        ASM_EXPORT_ENTRY_LAST(0x5c09a5, public_5c09a5)
    }
}

#undef public_5c099c
#undef public_5c09a5

#pragma init_seg(compiler)
extern "C" void const* const public_5c099c = __AsmFindLabelExport(&internal_5c0990, 0x5c099c);
extern "C" void const* const public_5c09a5 = __AsmFindLabelExport(&internal_5c0990, 0x5c09a5);
